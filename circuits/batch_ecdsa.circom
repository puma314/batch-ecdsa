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

/* Doubles an elliptic curve point w times */
template Secp256k1DoubleRepeat(n, k, w) {
    signal input in[2][k];
    signal output out[2][k];
    component doubler[w];

    doubler[0] = Secp256k1Double(n, k);
    for (var j = 0; j < k; j++) {
        doubler[0].in[0][j] <== in[0][j];
        doubler[0].in[1][j] <== in[1][j];
    }

    for (var i = 1; i < w; i++) {
        doubler[i] = Secp256k1Double(n, k);
        for (var j = 0; j < k; j++) {
            doubler[i].in[0][j] <== doubler[i-1].out[0][j];
            doubler[i].in[1][j] <== doubler[i-1].out[1][j];
        }
    }

    for (var j = 0; j < k; j++) {
        out[0][j] <== doubler[w-1].out[0][j];
        out[1][j] <== doubler[w-1].out[1][j];
    }
}


/* Shares doublees in combination with sliding window method */
template Secp256k1LinearCombination(n, k, b) {
    var w = 4;
    var window_size = 1 << w;
    var num_coordinates = div_ceil(n * k, w);

    signal input coeffs[b][k];
    signal input points[b][2][k];
    signal output out[2][k];
    signal lookup_table[b][window_size][2][k];
    component doublers[b];
    component adders[b][window_size-3];
    var order[100] = get_secp256k1_order(n, k);

    // TODO make the privkey a hash of all inputs for obtaining a random point
    // to add to instead of 0

    var dummyHolder[2][100] = get_dummy_point(n, k);
    var dummy[2][k];
    for (var i = 0; i < k; i++) dummy[0][i] = dummyHolder[0][i];
    for (var i = 0; i < k; i++) dummy[1][i] = dummyHolder[1][i];

    // Generating 2 random points to add to and subtract from
    component aux1 = ECDSAPrivToPub(n, k);
    component aux2 = ECDSAPrivToPub(n, k);
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        aux1.privkey[reg_idx] <== coeffs[0][reg_idx];
        aux2.privkey[reg_idx] <== coeffs[1][reg_idx];
    }


    // generating lookup table for points P_1, ..., P_t between multiples 0 and 2^w-1
    for (var i = 0; i < b; i++) {
        for (var j = 0; j < window_size; j++) {
            if (j == 2) {
                doublers[i] = Secp256k1Double(n, k);
                for (var l = 0; l < k; l++) {
                    doublers[i].in[0][l] <== points[i][0][l];
                    doublers[i].in[1][l] <== points[i][1][l];
                }
            }
            else if (j > 2) {
                adders[i][j-3] = Secp256k1AddUnequal(n, k);
                for (var l = 0; l < k; l++) {
                    adders[i][j-3].a[0][l] <== points[i][0][l];
                    adders[i][j-3].a[1][l] <== points[i][1][l];
                    adders[i][j-3].b[0][l] <== lookup_table[i][j-1][0][l];
                    adders[i][j-3].b[1][l] <== lookup_table[i][j-1][1][l];
                }
            }
            for (var l = 0; l < k; l++) {
                if (j == 0) {
                    // This is now the random point, instead of dummy point
                    lookup_table[i][j][0][l] <== aux2.pubkey[0][l];
                    lookup_table[i][j][1][l] <== aux2.pubkey[1][l];
                } else if (j == 1) {
                    lookup_table[i][j][0][l] <== points[i][0][l];
                    lookup_table[i][j][1][l] <== points[i][1][l];
                } else if (j == 2) {
                    lookup_table[i][j][0][l] <== doublers[i].out[0][l];
                    lookup_table[i][j][1][l] <== doublers[i].out[1][l];
                } else {
                    lookup_table[i][j][0][l] <== adders[i][j-3].out[0][l];
                    lookup_table[i][j][1][l] <== adders[i][j-3].out[1][l];
                }
            }
        }
    }

    component n2b[b][k];
    for (var i = 0; i < b; i++) {
        for (var j = 0; j < k; j++) {
            n2b[i][j] = Num2Bits(n);
            n2b[i][j].in <== coeffs[i][j];
        }
    }

    component selectors[b][num_coordinates];
    for (var i = 0; i < b; i++) {
        for (var j = 0; j < num_coordinates; j++) {
            selectors[i][j] = Bits2Num(w);
            for (var l = 0; l < w; l++) {
                var bit_idx1 = (j * w + l) \ n;
                var bit_idx2 = (j * w + l) % n;
                if (bit_idx1 < k) {
                    selectors[i][j].in[l] <== n2b[i][bit_idx1].out[bit_idx2];
                } else {
                    selectors[i][j].in[l] <== 0;
                }
            }
        }
    }

    signal numZeroSelectorsArr[b][num_coordinates];
    component iszero[b][num_coordinates];
    component multiplexers[b][num_coordinates][2];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
            iszero[batch_idx][coord_idx] = IsZero();
            iszero[batch_idx][coord_idx].in <== selectors[batch_idx][coord_idx].out;
            if (batch_idx == 0 && coord_idx == 0) {
                numZeroSelectorsArr[batch_idx][coord_idx] <== 0;
            } else if (coord_idx == 0) {
                numZeroSelectorsArr[batch_idx][coord_idx] <== numZeroSelectorsArr[batch_idx-1][num_coordinates - 1] + iszero[batch_idx][coord_idx].out;
            } else {
                numZeroSelectorsArr[batch_idx][coord_idx] <== numZeroSelectorsArr[batch_idx][coord_idx-1] + iszero[batch_idx][coord_idx].out;
            }
            for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                multiplexers[batch_idx][coord_idx][x_or_y] = Multiplexer(k, window_size);
                multiplexers[batch_idx][coord_idx][x_or_y].sel <== selectors[batch_idx][coord_idx].out;
                for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                    for (var win_idx = 0; win_idx < window_size; win_idx++) {
                        multiplexers[batch_idx][coord_idx][x_or_y].inp[win_idx][reg_idx]
                            <== lookup_table[batch_idx][win_idx][x_or_y][reg_idx];
                    }
                }
            }
        }
    }
    
    signal numZeroSelectors <== numZeroSelectorsArr[b-1][num_coordinates-1];

    component double_acc[num_coordinates];
    component add_acc[num_coordinates][b];

    // signal first_acc[2][k];

    // for (var reg_idx = 0; reg_idx < k; reg_idx++) {
    //     first_acc[0][reg_idx] <== multiplexers[0][num_coordinates-1][0].out[reg_idx];
    //     first_acc[1][reg_idx] <== multiplexers[0][num_coordinates-1][1].out[reg_idx];
    // }

    for (var coord_idx = num_coordinates - 1; coord_idx >= 0; coord_idx--) {
        double_acc[coord_idx] = Secp256k1Double(n, k);
        if (coord_idx != num_coordinates - 1) {
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                double_acc[coord_idx].in[0][reg_idx] <== add_acc[coord_idx+1][b-1].out[0][reg_idx];
                double_acc[coord_idx].in[1][reg_idx] <== add_acc[coord_idx+1][b-1].out[1][reg_idx];
            }
        }

        for (var batch_idx = 0; batch_idx < b; batch_idx++) {
            add_acc[coord_idx][batch_idx] = Secp256k1AddUnequal(n, k);

            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                if (batch_idx == 0 && coord_idx == num_coordinates - 1) {
                    // On the first turn, you want to add to aux1
                    add_acc[coord_idx][batch_idx].a[0][reg_idx] <== aux1.pubkey[0][reg_idx];
                    add_acc[coord_idx][batch_idx].a[1][reg_idx] <== aux1.pubkey[1][reg_idx];
                } else if (batch_idx == 0) {
                    add_acc[coord_idx][batch_idx].a[0][reg_idx] <== double_acc[coord_idx].out[0][reg_idx];
                    add_acc[coord_idx][batch_idx].a[1][reg_idx] <== double_acc[coord_idx].out[1][reg_idx];
                } else {
                    add_acc[coord_idx][batch_idx].a[0][reg_idx] <== add_acc[coord_idx][batch_idx-1].out[0][reg_idx];
                    add_acc[coord_idx][batch_idx].a[1][reg_idx] <== add_acc[coord_idx][batch_idx-1].out[1][reg_idx];
                }

                add_acc[coord_idx][batch_idx].b[0][reg_idx] <== multiplexers[batch_idx][coord_idx][0].out[reg_idx];
                add_acc[coord_idx][batch_idx].b[1][reg_idx] <== multiplexers[batch_idx][coord_idx][1].out[reg_idx];
            }
        }
    }

    // Here we subtract the random points
    // It should be the case that aux1 + numZeroSelectors * aux2 + add_acc[0][b-1] is the result
    // -1 = BigSubModP(0, 1, order)
    // numZeroSelectors in n, k
    component negativeOne = BigSubModP(n,k);
    component numZeroSelectorsBigInt = ConvertBigInt(n,k);
    numZeroSelectorsBigInt.in <== numZeroSelectors;
    component negNumZeroSelectors = BigSubModP(n,k);

    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        negativeOne.a[reg_idx] <== 0;
        if (reg_idx == 0) negativeOne.b[reg_idx] <== 1;
        else negativeOne.b[reg_idx] <== 0;
        negativeOne.p[reg_idx] <== order[reg_idx];

        negNumZeroSelectors.a[reg_idx] <== 0;
        negNumZeroSelectors.b[reg_idx] <== numZeroSelectorsBigInt.out[reg_idx];
        negNumZeroSelectors.p[reg_idx] <== order[reg_idx];
    }

    component negativeAux1 = Secp256k1ScalarMult(n,k);
    component negNumZeroSelectorsTimesAux2 = Secp256k1ScalarMult(n,k);
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        negativeAux1.scalar[reg_idx] <== negativeOne.out[reg_idx];
        negativeAux1.point[0][reg_idx] <== aux1.pubkey[0][reg_idx];
        negativeAux1.point[1][reg_idx] <== aux1.pubkey[1][reg_idx];

        negNumZeroSelectorsTimesAux2.scalar[reg_idx] <== negNumZeroSelectors.out[reg_idx];
        negNumZeroSelectorsTimesAux2.point[0][reg_idx] <== aux2.pubkey[0][reg_idx];
        negNumZeroSelectorsTimesAux2.point[1][reg_idx] <== aux2.pubkey[1][reg_idx];
    }

    component acc1 = Secp256k1AddUnequal(n,k);
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        acc1.a[0][reg_idx] <== add_acc[0][b-1].out[0][reg_idx];
        acc1.a[1][reg_idx] <== add_acc[0][b-1].out[1][reg_idx];
        acc1.b[0][reg_idx] <== negativeAux1.out[0][reg_idx];
        acc1.b[1][reg_idx] <== negativeAux1.out[1][reg_idx];
    }
    component acc2 = Secp256k1AddUnequal(n,k);
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        acc2.a[0][reg_idx] <== acc1.out[0][reg_idx];
        acc2.a[1][reg_idx] <== acc1.out[1][reg_idx];
        acc2.b[0][reg_idx] <== negNumZeroSelectorsTimesAux2.out[0][reg_idx];
        acc2.b[1][reg_idx] <== negNumZeroSelectorsTimesAux2.out[1][reg_idx];
    }

    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        out[0][reg_idx] <== acc2.out[0][reg_idx];
        out[1][reg_idx] <== acc2.out[1][reg_idx];
    }
}

// Batch ECDSA Equation:
// sum_i t^i R_i = (sum_i t^i (h_i s_i^{-1})) G + sum_i t^i (r_i s_i^{-1}) Q_i
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

    var p[100] = get_secp256k1_prime(n, k);
    var order[100] = get_secp256k1_order(n, k);
    var sinv_comp[b][100];
    signal sinv[b][k];
    component sinv_range_checks[b][k];
    component sinv_check[b];

    component point_on_curve = Secp256k1PointOnCurve();
    for(var i = 0; i < k; i++){
        point_on_curve.x[i] <== r[0][i];
        point_on_curve.y[i] <== rprime[0][i];
    }

    // poseidon hash all inputs to get a random t for summations
    // component MultiHasher[b][k];
    // for (var i=0; i < b; i++) {
    //     for (var j=0; j < k; j++) {
    //         MultiHasher[i][j] = Poseidon(6);
    //         MultiHasher[i][j].inputs[0] <== r[i][j];
    //         MultiHasher[i][j].inputs[1] <== s[i][j];
    //         MultiHasher[i][j].inputs[2] <== msghash[i][j];
    //         MultiHasher[i][j].inputs[3] <== pubkey[i][0][j];
    //         MultiHasher[i][j].inputs[4] <== pubkey[i][1][j];
    //         if (i == 0 && j == 0 ) {
    //             MultiHasher[i][j].inputs[5] <== 0;
    //         } else if (j == 0) {
    //             MultiHasher[i][j].inputs[5] <== MultiHasher[i-1][j].out;
    //         } else {
    //             MultiHasher[i][j].inputs[5] <== MultiHasher[i][j-1].out;
    //         }
    //     }
    // }
    // get t in k registers of n bits each
    // signal t <== MultiHasher[b-1][k-1].out;

    /*
    signal t;
    t <== 2;
    signal tBits[k];
    signal sumTBits[k];
    component tBitsRangeCheck[k];
    var mod = 2**n;
    var xTemp[k];
    for (var i=0; i < k; i++) {
        if (i == 0) {
            xTemp[i] = t;
        } else {
            xTemp[i] = xTemp[i-1] \ mod;
        }
        tBits[i] <-- xTemp[i] % mod;
        if (i == 0) {
            sumTBits[i] <== tBits[i];
        } else {
            sumTBits[i] <== tBits[i] * 2**(n*i) + sumTBits[i-1];
        }
    }
    // Constraint to check that t = sum_i tBits[i] * 2^(n*i)
    sumTBits[k-1] === t;

    // contains t^0, t^1, ..., t^(b-1)
    signal TPowersBits[b][k];
    component TPowersBigMult[b-2];
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
                TPowersBits[1][j] <== tBits[j];
            }
        } else {
            TPowersBigMult[i-2] = BigMultModP(n,k);
            for (var j=0; j < k; j++) {
                TPowersBigMult[i-2].a[j] <== tBits[j];
                TPowersBigMult[i-2].b[j] <== TPowersBits[i-1][j];
                TPowersBigMult[i-2].p[j] <== order[j];
            }
            for (var j=0; j < k; j++) {
                TPowersBits[i][j] <== TPowersBigMult[i-2].out[j];
            }
        }
    }
    */

    // compute s^-1 mod n for each signature
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
    component g_coeff1[b];
    for (var i = 0; i < b; i++) {
        g_coeff1[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            g_coeff1[i].a[j] <== sinv[i][j];
            g_coeff1[i].b[j] <== msghash[i][j];
            g_coeff1[i].p[j] <== order[j];
        }
    }

    // compute t^i (h * sinv) mod n for each signature
    /*
    component g_coeff2[b];
    for (var i = 0; i < b; i++) {
        g_coeff2[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            g_coeff2[i].a[j] <== g_coeff1[i].out[j];
            g_coeff2[i].b[j] <== TPowersBits[i][j];
            g_coeff2[i].p[j] <== order[j];
        }
    }
    */

    // compute sum_i t^i (h * sinv) mod n
    component g_coeff_sums[b];
    for (var i = 0; i < b; i++) {
        g_coeff_sums[i] = BigAddModP(n, k);
        for (var j = 0; j < k; j++) {
            if (i == 0) {
                g_coeff_sums[i].a[j] <== 0;
            } else {
                g_coeff_sums[i].a[j] <== g_coeff_sums[i-1].out[j];
            }
            g_coeff_sums[i].b[j] <== g_coeff1[i].out[j];
            g_coeff_sums[i].p[j] <== order[j];
        }
    }

    // compute (r * sinv) mod n for each signature
    component pubkey_coeff1[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff1[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff1[i].a[j] <== sinv[i][j];
            pubkey_coeff1[i].b[j] <== r[i][j];
            pubkey_coeff1[i].p[j] <== order[j];
        }
    }

    component pubkey_coeff2[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff2[i] = BigSubModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff2[i].a[j] <== 0;
            pubkey_coeff2[i].b[j] <== pubkey_coeff1[i].out[j];
            pubkey_coeff2[i].p[j] <== order[j];
        }
    }

    // compute t^i (r * sinv) mod n for each signature
    /*
    component pubkey_coeff2[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff2[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff2[i].a[j] <== pubkey_coeff1[i].out[j];
            pubkey_coeff2[i].b[j] <== TPowersBits[i][j];
            pubkey_coeff2[i].p[j] <== order[j];
        }
    }
    */

    // compute t^i * (r * sinv) * Q_i for each signature
    /*
    component pubkey_terms[b];
    for (var i = 0; i < b; i++) {
        pubkey_terms[i] = Secp256k1ScalarMult(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_terms[i].scalar[j] <== pubkey_coeff2[i].out[j];
            pubkey_terms[i].point[0][j] <== pubkey[i][0][j];
            pubkey_terms[i].point[1][j] <== pubkey[i][1][j];
        }
    }

    // compute \sum_i t^i * (r * sinv) * Q_i
    component pubkey_sums[b-1];
    for (var i = 0; i < b - 1; i++) {
        pubkey_sums[i] = Secp256k1AddUnequal(n, k);
        if (i == 0) {
            for (var j = 0; j < k; j++) {
                pubkey_sums[i].a[0][j] <== pubkey_terms[i].out[0][j];
                pubkey_sums[i].a[1][j] <== pubkey_terms[i].out[1][j];
                pubkey_sums[i].b[0][j] <== pubkey_terms[i+1].out[0][j];
                pubkey_sums[i].b[1][j] <== pubkey_terms[i+1].out[1][j];
            }
        } else {
            for (var j = 0; j < k; j++) {
                pubkey_sums[i].a[0][j] <== pubkey_sums[i-1].out[0][j];
                pubkey_sums[i].a[1][j] <== pubkey_sums[i-1].out[1][j];
                pubkey_sums[i].b[0][j] <== pubkey_terms[i+1].out[0][j];
                pubkey_sums[i].b[1][j] <== pubkey_terms[i+1].out[1][j];
            }
        }
    }
    */
    log(1111);
    component linear_combiner = Secp256k1LinearCombination(n, k, 2 * b);
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            linear_combiner.coeffs[batch_idx*2][reg_idx] <== pubkey_coeff1[batch_idx].out[reg_idx];
            linear_combiner.points[batch_idx*2][0][reg_idx] <== pubkey[batch_idx][0][reg_idx];
            linear_combiner.points[batch_idx*2][1][reg_idx] <== pubkey[batch_idx][1][reg_idx];

            linear_combiner.coeffs[batch_idx*2+1][reg_idx] <== g_coeff1[batch_idx].out[reg_idx];
            linear_combiner.points[batch_idx*2+1][0][reg_idx] <== r[batch_idx][reg_idx];
            linear_combiner.points[batch_idx*2+1][1][reg_idx] <== rprime[batch_idx][reg_idx];
        }
    }
    // compute (\sum_i t^i (h * sinv)) * G
    component generator_term = ECDSAPrivToPub(n, k);
    for (var j = 0; j < k; j++) {
        generator_term.privkey[j] <== g_coeff_sums[b-1].out[j];
    }

    /*
    // compute (\sum_i t^i (h * sinv)) * G + \sum_i t^i * (r * sinv) * Q_i
    component rhs_sum = Secp256k1AddUnequal(n, k);
    for (var j = 0; j < k; j++) {
        rhs_sum.a[0][j] <== generator_term.pubkey[0][j];
        rhs_sum.a[1][j] <== generator_term.pubkey[1][j];
        rhs_sum.b[0][j] <== pubkey_sums[b-2].out[0][j];
        rhs_sum.b[1][j] <== pubkey_sums[b-2].out[1][j];
    }

    // compute t^i R_i for each i
    component r_scaled_by_t[b];
    for (var i = 0; i < b; i++) {
        r_scaled_by_t[i] = Secp256k1ScalarMult(n, k);
        for (var j = 0; j < k; j++) {
            r_scaled_by_t[i].scalar[j] <== TPowersBits[i][j];
            r_scaled_by_t[i].point[0][j] <== r[i][j];
            r_scaled_by_t[i].point[1][j] <== rprime[i][j];
        }
    }
    */

    // compute \sum_i t^i R_i
    /*
    component partial_sum_of_r_scaled[b];
    for (var i = 0; i < b; i++) {
        partial_sum_of_r_scaled[i] = Secp256k1AddUnequal(n, k);
        if (i == 0) {
            for (var j = 0; j < k; j++) {
                partial_sum_of_r_scaled[i].a[0][j] <== 0;
                partial_sum_of_r_scaled[i].a[1][j] <== 0;
                partial_sum_of_r_scaled[i].b[0][j] <== r_scaled_by_t[i].out[0][j];
                partial_sum_of_r_scaled[i].b[1][j] <== r_scaled_by_t[i].out[0][j];
            }
        } else {
            for (var j = 0; j < k; j++) {
                partial_sum_of_r_scaled[i].a[0][j] <== partial_sum_of_r_scaled[i-1].out[0][j];
                partial_sum_of_r_scaled[i].a[1][j] <== partial_sum_of_r_scaled[i-1].out[1][j];
                partial_sum_of_r_scaled[i].b[0][j] <== r_scaled_by_t[i].out[0][j];
                partial_sum_of_r_scaled[i].b[1][j] <== r_scaled_by_t[i].out[0][j];
            }
        }
    }
    */

    /*
    component compare_x[k];
    component compare_y[k];

    signal num_equal[k-1];
    for (var j = 0; j < k; j++) {
        compare_x[j] = IsEqual();
        compare_y[j] = IsEqual();

        compare_x[j].in[0] <== partial_sum_of_r_scaled[b-1].out[0][j];
        compare_x[j].in[1] <== rhs_sum.out[0][j];

        compare_y[j].in[0] <== partial_sum_of_r_scaled[b-1].out[1][j];
        compare_y[j].in[1] <== rhs_sum.out[1][j];

        if (j > 0) {
            if (j == 1) {
                num_equal[j-1] <== compare_x[0].out + compare_y[0].out + compare_x[1].out + compare_y[1].out;
            } else {
                num_equal[j-1] <== num_equal[j-2] + compare_x[j].out + compare_y[j].out;
            }
        }
    }
    */

    component compare_x[k];
    component compare_y[k];
    signal num_equal[k-1];

    for (var j = 0; j < k; j++) {
        compare_x[j] = IsEqual();
        compare_y[j] = IsEqual();

        compare_x[j].in[0] <== linear_combiner.out[0][j];
        compare_y[j].in[0] <== linear_combiner.out[1][j];

        compare_x[j].in[1] <== generator_term.pubkey[0][j];
        compare_y[j].in[1] <== generator_term.pubkey[1][j];

        if (j > 0) {
            if (j == 1) {
                num_equal[j-1] <== compare_x[0].out + compare_y[0].out + compare_x[1].out + compare_y[1].out;
            } else {
                num_equal[j-1] <== num_equal[j-2] + compare_x[j].out + compare_y[j].out;
            }
        }

    }

    component res_comp = IsEqual();
    res_comp.in[0] <== 2 * k;
    res_comp.in[1] <== num_equal[k-2];
    result <== res_comp.out;
}