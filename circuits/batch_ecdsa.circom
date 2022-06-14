pragma circom 2.0.2;

include "../node_modules/circomlib/circuits/comparators.circom";
include "../node_modules/circomlib/circuits/multiplexer.circom";

include "bigint.circom";
include "secp256k1.circom";
include "bigint_func.circom";
include "ecdsa_func.circom";
include "ecdsa.circom";
include "secp256k1_func.circom";


// r, s, msghash, and pubkey have coordinates
// encoded with k registers of n bits each
// signature is (r, s)
// Does not check that pubkey is valid
// b is the number of signatures, i.e. the batch size
template BatchECDSAVerifyNoPubkeyCheck(n, k, b) {
    assert(k >= 2);
    assert(k <= 100);

    signal input r[b][k];
    signal input s[b][k];
    signal input msghash[b][k];
    signal input pubkey[b][2][k];

    signal output result;

    /*
    Batch ECDSA Equation:
        sum_i t^i R_i = (sum_i t^i (h_i s_i^{-1})) G + sum_i t^i (r_i s_i^{-1}) Q_i
    */

    var p[100] = get_secp256k1_prime(n, k);
    var order[100] = get_secp256k1_order(n, k);

    var sinv_comp[b][100];
    signal sinv[b][k];
    component sinv_range_checks[b][k];
    component sinv_check[b];

    // Compute multiplcate inverse of s mod n for each signature
    for (var i = 0; i < b; i++) {
        sinv_comp[i] = mod_inv(n, k, s[i], order);
        for (var j = 0; j < k; j++) {
            sinv[i][j] <-- sinv_comp[i][j];
            sinv_range_checks[i][j] = Num2Bits(n);
            sinv_range_checks[i][j].in <== sinv[i][j];
        }

        sinv_check[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            sinv_check[i].a[j] <== sinv[i][j];
            sinv_check[i].b[j] <== s[i][j];
            sinv_check[i].p[j] <== order[j];
        }

        for (var j = 0; j < k; j++) {
            if (j > 0) {
                sinv_check[i].out[j] === 0;
            }
            if (j == 0) { 
                sinv_check[i].out[j] === 1;
            }
        }
    }

    // compute (h * sinv) mod n for each signature
    component g_coeff[b];
    for (var i = 0; i < b; i++) {
        g_coeff[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            g_coeff[i].a[j] <== sinv[i][j];
            g_coeff[i].b[j] <== msghash[i][j];
            g_coeff[i].p[j] <== order[j];
        }
    }

    // compute (h * sinv) * G for each signature
    component g_mult[b];
    for (var i = 0; i < b; i++) {
        g_mult[i] = ECDSAPrivToPub(n, k);
        for (var j = 0; j < k; j++) {
            g_mult[i].privkey[j] <== g_coeff[i].out[j];
        }
    }

    // compute (r * sinv) mod n for each signature
    component pubkey_coeff[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff[i].a[j] <== sinv[i][j];
            pubkey_coeff[i].b[j] <== r[i][j];
            pubkey_coeff[i].p[j] <== order[j];
        }
    }

    // compute (r * sinv) * pubkey for each signature
    component pubkey_mult[b];
    for (var i = 0; i < b; i++) {
        pubkey_mult[i] = Secp256k1ScalarMult(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_mult[i].scalar[j] <== pubkey_coeff[i].out[j];
            pubkey_mult[i].point[0][j] <== pubkey[i][0][j];
            pubkey_mult[i].point[1][j] <== pubkey[i][1][j];
        }
    }

    // compute (h * sinv) * G + (r * sinv) * pubkey for each signature
    component sum_res[b];
    for (var i = 0; i < b; i++) {
        sum_res[i] = Secp256k1AddUnequal(n, k);
        for (var j = 0; j < k; j++) {
            sum_res[i].a[0][j] <== g_mult[i].pubkey[0][j];
            sum_res[i].a[1][j] <== g_mult[i].pubkey[1][j];
            sum_res[i].b[0][j] <== pubkey_mult[i].out[0][j];
            sum_res[i].b[1][j] <== pubkey_mult[i].out[1][j];
        }
    }

    component compare[b][k];
    signal num_equal[b][k-1];
    for (var i = 0; i < b; i++) {
        for (var j = 0; j < k; j++) {
            compare[i][j] = IsEqual();
            compare[i][j].in[0] <== r[i][j];
            compare[i][j].in[1] <== sum_res[i].out[0][j];

            if (j > 0) {
                if (j == 1) {
                    num_equal[i][j - 1] <== compare[i][0].out + compare[i][1].out;
                } else {
                    num_equal[i][j - 1] <== num_equal[i][j - 2] + compare[i][j].out;
                }
            }
        }
    }

    component res_comp = IsEqual();
    res_comp.in[0] <== k;
    res_comp.in[1] <== num_equal[0][k - 2];
    result <== res_comp.out;
}