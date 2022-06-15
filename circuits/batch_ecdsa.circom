pragma circom 2.0.2;

include "../node_modules/circomlib/circuits/comparators.circom";
include "../node_modules/circomlib/circuits/multiplexer.circom";
include "../node_modules/circomlib/circuits/poseidon.circom";
include "../node_modules/circomlib/circuits/bitify.circom";

include "bigint.circom";
include "secp256k1.circom";
include "bigint_func.circom";
include "ecdsa_func.circom";
include "ecdsa.circom";
include "secp256k1_func.circom";

template Num2BitsFake(n) {
    signal input in;
    signal output out[n];
    for (var i = 0; i<n; i++) {
        out[i] <-- 1;
    }
}


// r, s, msghash, and pubkey have coordinates
// encoded with k registers of n bits each
// signature is (r, s)
// Does not check that pubkey is valid
// b is the number of signatures, i.e. the batch size
template BatchECDSAVerifyNoPubkeyCheck(n, k, b) {
    assert(k >= 2);
    assert(k <= 100);

    signal input r[b][k];
    signal input rprime[b][k];
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

    // poseidon hash all inputs to get random t for summations
    component MultiHasher[b][k];
    for (var i=0; i < b; i++) {
        for (var j=0; j < k; j++) {
            MultiHasher[i][j] = Poseidon(6);
            MultiHasher[i][j].inputs[0] <-- r[i][j];
            MultiHasher[i][j].inputs[1] <-- s[i][j];
            MultiHasher[i][j].inputs[2] <-- msghash[i][j];
            MultiHasher[i][j].inputs[3] <-- pubkey[i][0][j];
            MultiHasher[i][j].inputs[4] <-- pubkey[i][1][j];
            if (i == 0 && j == 0 ) {
                MultiHasher[i][j].inputs[5] <-- 0;
            } else if (j == 0) {
                MultiHasher[i][j].inputs[5] <-- MultiHasher[i-1][j].out;
            } else {
                MultiHasher[i][j].inputs[5] <-- MultiHasher[i][j-1].out;
            }
        }
    }
    signal t;
    t <-- MultiHasher[b-1][k-1].out;

   // Get t in k registers of n bits each
    signal tBits[k];
    signal sumTBits[k];
    component tBitsRangeCheck[k];
    var mod = 2**n;
    var xTemp[k];
    for (var i=0; i < k; i++) {
        if (i == 0) {
            xTemp[i] = t;
        } else {
            xTemp[i] = xTemp[i-1] / mod;
        }
        tBits[i] <-- xTemp[i] % mod;
        // Range check to make sure tBits[i] < 2^n, i.e. actually n bits
        // tBitsRangeCheck[i] = NumToBits(n);
        // tBitsRangeCheck.in <== tBits[i];
        // TODO implement range check
        if (i == 0) {
            sumTBits[i] <== tBits[i];
        } else {
            sumTBits[i] <== tBits[i] * 2**(n*i) + sumTBits[i-1];
        }
    }
    // Constraint to check that t = sum_i tBits[i] * 2^(n*i)
    sumTBits[k-1] === t;
 
    signal TPowersBits[b][k];
    component TPowersBigMult[b-2];
    // contains t^0, t^1, ..., t^(b-1)
    for (var i=0; i < b; i++) {
        if (i == 0) {
            // k registers of n bits for t^0 = 1
            TPowersBits[0][0] <== 1;
            for (var j=1; j < k; j++) {
                TPowersBits[0][j] <== 0;
            }
        } else if (i == 1) {
            // just copy tBits for t^1, this is an optimization to avoid a BigMult with 1
            for (var j=0; j < k; j++) {
                TPowersBits[j] <== tBits[j];
            }
        } else {
            TPowersBigMult[i-2] = BigMultModP(n,k);
            for (var j=0; j < k; j++) {
                TPowersBigMult[i].a[j] <== tBits[j];
                TPowersBigMult[i].b[j] <== TPowersBits[i-1][j];
                TPowersBigMult[i].p[j] <== order[j];
                TPowersBits[j] <== TPowersBigMult.out[j]
            }
        }
    }

    // Compute multiplicative inverse of s mod n for each signature
    for (var i = 0; i < b; i++) {
        sinv_comp[i] = mod_inv(n, k, s[i], order);
        for (var j = 0; j < k; j++) {
            sinv[i][j] <-- sinv_comp[i][j];
            sinv_range_checks[i][j] = Num2Bits(n);
            sinv_range_checks[i][j].in <-- sinv[i][j];
        }

        sinv_check[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            sinv_check[i].a[j] <-- sinv[i][j];
            sinv_check[i].b[j] <-- s[i][j];
            sinv_check[i].p[j] <-- order[j];
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
            g_coeff[i].a[j] <-- sinv[i][j];
            g_coeff[i].b[j] <-- msghash[i][j];
            g_coeff[i].p[j] <-- order[j];
        }
    }

    // compute t^i (h * sinv) mod n for each signature
    component g_coeff_times_t[b];
    for (var i = 0; i < b; i++) {
        g_coeff_times_t[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            g_coeff_times_t[i].a[j] <-- g_coeff[i].out[j];
            g_coeff_times_t[i].b[j] <-- TPowersBits[i].out[j];
            g_coeff_times_t[i].p[j] <-- order[j];
        }
    }

    // compute t^i (h * sinv) * G for each signature
    component g_mult[b];
    for (var i = 0; i < b; i++) {
        g_mult[i] = ECDSAPrivToPub(n, k);
        for (var j = 0; j < k; j++) {
            g_mult[i].privkey[j] <-- g_coeff_times_t[i].out[j];
        }
    }

    // compute (r * sinv) mod n for each signature
    component pubkey_coeff[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff[i].a[j] <-- sinv[i][j];
            pubkey_coeff[i].b[j] <-- r[i][j];
            pubkey_coeff[i].p[j] <-- order[j];
        }
    }

    // compute t^i (h * sinv) mod n for each signature
    component pubkey_coeff_times_t[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff_times_t[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff_times_t[i].a[j] <-- pubkey_coeff[i].out[j];
            pubkey_coeff_times_t[i].b[j] <-- TPowersBits[i].out[j];
            pubkey_coeff_times_t[i].p[j] <-- order[j];
        }
    }

    // compute (r * sinv) * pubkey * t^i for each signature
    component pubkey_mult[b];
    for (var i = 0; i < b; i++) {
        pubkey_mult[i] = Secp256k1ScalarMult(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_mult[i].scalar[j] <-- pubkey_coeff_times_t[i].out[j];
            pubkey_mult[i].point[0][j] <-- pubkey[i][0][j];
            pubkey_mult[i].point[1][j] <-- pubkey[i][1][j];
        }
    }

    // compute (h * sinv) * G + (r * sinv) * pubkey * t^i for each signature
    component sum_res[b];
    for (var i = 0; i < b; i++) {
        sum_res[i] = Secp256k1AddUnequal(n, k);
        for (var j = 0; j < k; j++) {
            sum_res[i].a[0][j] <-- g_mult[i].pubkey[0][j];
            sum_res[i].a[1][j] <-- g_mult[i].pubkey[1][j];
            sum_res[i].b[0][j] <-- pubkey_mult[i].out[0][j];
            sum_res[i].b[1][j] <-- pubkey_mult[i].out[1][j];
        }
    }

    // compute sum_i t^i (h_i s_i^{-1})) G + sum_i t^i (r_i s_i^{-1}) Q_i
    component partial_sums[b];
    for (var i = 0; i < b; i++) {
        partial_sums[i] = Secp256k1AddUnequal(n, k);
        if (i == 0) {
            for (var j = 0; j < k; j++) {
                partial_sums[i].a[0][j] <-- 0;
                partial_sums[i].a[1][j] <-- 0;
                partial_sums[i].b[0][j] <-- sum_res[i].out[0][j];
                partial_sums[i].b[1][j] <-- sum_res[i].out[1][j];
            }
        } else {
            for (var j = 0; j < k; j++) {
                partial_sums[i].a[0][j] <-- partial_sums[i-1].out[0][j];
                partial_sums[i].a[1][j] <-- partial_sums[i-1].out[0][j];
                partial_sums[i].b[0][j] <-- sum_res[i].out[0][j];
                partial_sums[i].b[1][j] <-- sum_res[i].out[1][j];
            }
        }
    }


    // compute t^i R_i for each i
    component r_scaled_by_t[b];
    for (var i = 0; i < b; i++) {
        r_scaled_by_t[i] = Secp256k1ScalarMult(n, k);
        for (var j = 0; j < k; j++) {
            r_scaled_by_t[i].scalar[j] <-- TPowersBits[i].out[j];
            r_scaled_by_t[i].point[0][j] <-- r[i][j];
            r_scaled_by_t[i].point[1][j] <-- rprime[i][j];
        }
    }

    // compute \sum_i t^i R_i
    component partial_sum_of_r_scaled[b];
    for (var i = 0; i < b; i++) {
        partial_sum_of_r_scaled[i] = Secp256k1AddUnequal(n, k);
        if (i == 0) {
            for (var j = 0; j < k; j++) {
                partial_sum_of_r_scaled[i].a[0][j] <-- 0;
                partial_sum_of_r_scaled[i].a[1][j] <-- 0;
                partial_sum_of_r_scaled[i].b[0][j] <-- r_scaled_by_t[i].out[0][j];
                partial_sum_of_r_scaled[i].b[1][j] <-- r_scaled_by_t[i].out[0][j];
            }
        } else {
            for (var j = 0; j < k; j++) {
                partial_sum_of_r_scaled[i].a[0][j] <-- partial_sum_of_r_scaled[i-1].out[0][j];
                partial_sum_of_r_scaled[i].a[1][j] <-- partial_sum_of_r_scaled[i-1].out[1][j];
                partial_sum_of_r_scaled[i].b[0][j] <-- r_scaled_by_t[i].out[0][j];
                partial_sum_of_r_scaled[i].b[1][j] <-- r_scaled_by_t[i].out[0][j];
            }
        }
    }

    component compare1[k];
    component compare2[k];

    signal num_equal[k-1];
    for (var j = 0; j < k; j++) {
        compare1[j] = IsEqual();
        compare2[j] = IsEqual();

        compare1[j].in[0] <-- partial_sum_of_r_scaled[b-1].out[0][j];
        compare1[j].in[1] <-- partial_sums[b-1].out[0][j];

        compare2[j].in[0] <-- partial_sum_of_r_scaled[b-1].out[1][j];
        compare2[j].in[1] <-- partial_sums[b-1].out[1][j];

        if (j > 0) {
            if (j == 1) {
                num_equal[j-1] <-- compare1[0].out + compare2[0].out + compare1[1].out + compare2[1].out;
            } else {
                num_equal[j-1] <-- num_equal[j-2] + compare1[j].out + compare2[j].out;
            }
        }
    }

    component res_comp = IsEqual();
    res_comp.in[0] <-- k + k;
    res_comp.in[1] <-- num_equal[k-2];
    result <-- res_comp.out;
}