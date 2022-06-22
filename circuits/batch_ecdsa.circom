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


template Secp256k1LinearCombination(n, k, b) {
    // Variables
    var w = 4;
    var window_size = 1 << w;
    var num_coordinates = div_ceil(n * k, w);
    var order[100] = get_secp256k1_order(n, k);
    var dummyHolder[2][100] = get_dummy_point(n, k);
    var dummy[2][k];
    for (var i = 0; i < k; i++) dummy[0][i] = dummyHolder[0][i];
    for (var i = 0; i < k; i++) dummy[1][i] = dummyHolder[1][i];

    // Input & Output Signals
    signal input coeffs[b][k];
    signal input points[b][2][k];
    signal output out[2][k];

    // Generating lookup table for points[0], ..., points[b-1] between multiples 0 and 2^w-1
    signal lookup_table[b][window_size][2][k];
    component table_doublers[b];
    component table_adders[b][window_size-3];
    for (var i = 0; i < b; i++) {
        for (var j = 0; j < window_size; j++) {
            if (j == 2) {
                table_doublers[i] = Secp256k1Double(n, k);
                for (var l = 0; l < k; l++) {
                    table_doublers[i].in[0][l] <== points[i][0][l];
                    table_doublers[i].in[1][l] <== points[i][1][l];
                }
            }
            else if (j > 2) {
                table_adders[i][j-3] = Secp256k1AddUnequal(n, k);
                for (var l = 0; l < k; l++) {
                    table_adders[i][j-3].a[0][l] <== points[i][0][l];
                    table_adders[i][j-3].a[1][l] <== points[i][1][l];
                    table_adders[i][j-3].b[0][l] <== lookup_table[i][j-1][0][l];
                    table_adders[i][j-3].b[1][l] <== lookup_table[i][j-1][1][l];
                }
            }
            for (var l = 0; l < k; l++) {
                if (j == 0) {
                    lookup_table[i][j][0][l] <== dummy[0][l];
                    lookup_table[i][j][1][l] <== dummy[1][l];
                } else if (j == 1) {
                    lookup_table[i][j][0][l] <== points[i][0][l];
                    lookup_table[i][j][1][l] <== points[i][1][l];
                } else if (j == 2) {
                    lookup_table[i][j][0][l] <== table_doublers[i].out[0][l];
                    lookup_table[i][j][1][l] <== table_doublers[i].out[1][l];
                } else {
                    lookup_table[i][j][0][l] <== table_adders[i][j-3].out[0][l];
                    lookup_table[i][j][1][l] <== table_adders[i][j-3].out[1][l];
                }
            }
        }
    }

    // Convert each coefficient to a bit representation
    component n2b[b][k];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            n2b[batch_idx][reg_idx] = Num2Bits(n);
            n2b[batch_idx][reg_idx].in <== coeffs[batch_idx][reg_idx];
        }
    }

    // Compute coordinates of each coefficient in base 2^w
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

    // Select precomputed elliptic curve points from table using selector coordinates
    component multiplexers[b][num_coordinates][2];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
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

    // Keep track of which selectors were zero
    component iszero[b][num_coordinates];
    component has_prev_nonzero[b][num_coordinates];

    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
            iszero[batch_idx][coord_idx] = IsZero();
            iszero[batch_idx][coord_idx].in <== selectors[batch_idx][coord_idx].out;
        }
    }
    for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
        has_prev_nonzero[0][coord_idx] = OR();
        has_prev_nonzero[0][coord_idx].a <== 0;
        has_prev_nonzero[0][coord_idx].b <== 1 - iszero[0][coord_idx].out;
    }
    for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
        for (var batch_idx = 1; batch_idx < b; batch_idx++) {
            has_prev_nonzero[batch_idx][coord_idx] = OR();
            has_prev_nonzero[batch_idx][coord_idx].a <== has_prev_nonzero[batch_idx-1][coord_idx].out;
            has_prev_nonzero[batch_idx][coord_idx].b <== 1 - iszero[batch_idx][coord_idx].out;
        }
    }

    // keeps track of whether the whole next coordinate has a 0 or not
    component has_prev_coordinate_nonzero[num_coordinates];
    for (var coord_idx = num_coordinates - 1; coord_idx >= 0; coord_idx--) {
        has_prev_coordinate_nonzero[coord_idx] = OR();
        if (coord_idx == num_coordinates - 1) {
            // This is just 0, since there is no previous entry
            has_prev_coordinate_nonzero[coord_idx].a <== 0;
            has_prev_coordinate_nonzero[coord_idx].b <== 0;
        } else {
            // Either I found a column in the past with a 1 or 
            has_prev_coordinate_nonzero[coord_idx].a <== has_prev_coordinate_nonzero[coord_idx+1].out;
            has_prev_coordinate_nonzero[coord_idx].b <== has_prev_nonzero[b-1][coord_idx+1].out;
        }
    }

    log(88888);
    for (var coord_idx = 0; coord_idx < num_coordinates; coord_idx++) {
        log(selectors[0][coord_idx].out);
        log(has_prev_nonzero[0][coord_idx].out);
        log(has_prev_coordinate_nonzero[coord_idx].out);
    }
    log(88888);

    // Log dummy point
    log(1111);     
    
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
            log(dummy[x_or_y][reg_idx]);
        }
    }
    log(1111);

    // log(2222);     
    
    // for (var batch_idx = 0; batch_idx < b; batch_idx++) {
    //     for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
    //         log(dummy[x_or_y][reg_idx]);
    //     }
    // }
    // log(222);


    // Efficient computation of linear combinations of elliptic curve points
    signal acc[num_coordinates][2][k];
    signal intermed1[num_coordinates][b-1][2][k];
    signal intermed2[num_coordinates][b-1][2][k];
    signal intermed3[num_coordinates][2][k];
    signal intermed4[num_coordinates][2][k];
    signal partial[num_coordinates][b][2][k];
    component doublers[num_coordinates];
    component adders[num_coordinates][b-1];
    component final_adder[num_coordinates];
    for (var coord_idx = num_coordinates - 1; coord_idx >= 0; coord_idx--) {

        // If this is not the first coordinate, double the accumulator from the last iteration
        if (coord_idx != num_coordinates - 1) {
            // log(2222);
            // log(coord_idx);
            doublers[coord_idx] = Secp256k1DoubleRepeat(n, k, w);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    doublers[coord_idx].in[x_or_y][reg_idx] <== acc[coord_idx+1][x_or_y][reg_idx];
                    // log(acc[coord_idx+1][x_or_y][reg_idx]);
                }
            }
            // log(2222);
        }

        // Set the first index of the partial sum to the multiplexer output (could be dummy!)
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                partial[coord_idx][0][x_or_y][reg_idx] <== multiplexers[0][coord_idx][x_or_y].out[reg_idx];
            }
        }

        // Compute the remaining partial sums
        for (var batch_idx = 1; batch_idx < b; batch_idx++) {
            // Compute the prev partial sum + current multiplexer output (note: not always used)
            adders[coord_idx][batch_idx-1] = Secp256k1AddUnequal(n, k);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    adders[coord_idx][batch_idx-1].a[x_or_y][reg_idx] <==
                        partial[coord_idx][batch_idx-1][x_or_y][reg_idx];
                    adders[coord_idx][batch_idx-1].b[x_or_y][reg_idx] <==
                        multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx];
                }
            }

            // Compute new partial sum according to various cases to handle dummy point
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    // Case 1: there was a prev non-zero selector
                    intermed1[coord_idx][batch_idx-1][x_or_y][reg_idx] <==
                        iszero[batch_idx][coord_idx].out * (partial[coord_idx][batch_idx-1][x_or_y][reg_idx] - adders[coord_idx][batch_idx-1].out[x_or_y][reg_idx])
                        + adders[coord_idx][batch_idx-1].out[x_or_y][reg_idx];
                    // Case 2: there is not prev non-zero selector
                    intermed2[coord_idx][batch_idx-1][x_or_y][reg_idx] <==
                        multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx]
                        - iszero[batch_idx][coord_idx].out * multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx];
                    // If there was prev non-zero selector, set partial to intermed1. otherwise, intermed2
                    partial[coord_idx][batch_idx][x_or_y][reg_idx] <==
                        has_prev_nonzero[batch_idx-1][coord_idx].out
                        * (intermed1[coord_idx][batch_idx-1][x_or_y][reg_idx] - intermed2[coord_idx][batch_idx-1][x_or_y][reg_idx])
                        + intermed2[coord_idx][batch_idx-1][x_or_y][reg_idx];
                }
            }
        }

        // If this is the first round, set the accumulator to the partial sum
        // We do not check has_prev_coordinate_nonzero
        final_adder[coord_idx] = Secp256k1AddUnequal(n, k);
        if (coord_idx == num_coordinates - 1) {
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    acc[coord_idx][x_or_y][reg_idx] <==
                        (1 - has_prev_nonzero[b-1][coord_idx].out) * (dummy[x_or_y][reg_idx] - partial[coord_idx][b-1][x_or_y][reg_idx])
                        + partial[coord_idx][b-1][x_or_y][reg_idx];
                }
            }
        } else {
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    final_adder[coord_idx].a[x_or_y][reg_idx] <== doublers[coord_idx].out[x_or_y][reg_idx];
                    final_adder[coord_idx].b[x_or_y][reg_idx] <== partial[coord_idx][b-1][x_or_y][reg_idx];
                }
            }
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                        // signal intermed3[num_coordinates][2][k];
                    intermed3[coord_idx][x_or_y][reg_idx] <== has_prev_nonzero[b-1][coord_idx].out * (final_adder[coord_idx].out[x_or_y][reg_idx] - doublers[coord_idx].out[x_or_y][reg_idx])
                        + doublers[coord_idx].out[x_or_y][reg_idx];
                    
                    // doublers[coord_idx].out[x_or_y][reg_idx]
                    //     + has_prev_nonzero[b-1][coord_idx].out * partial[coord_idx][b-1][x_or_y][reg_idx];
                    intermed4[coord_idx][x_or_y][reg_idx] <== (1-has_prev_nonzero[b-1][coord_idx].out) * (dummy[x_or_y][reg_idx])
                        + (has_prev_nonzero[b-1][coord_idx].out) * (partial[coord_idx][b-1][x_or_y][reg_idx]);
                    

                    // Case 1: has_prev_coordinate_nonzero[coord_idx] = 1, has_prev_nonzero[b-1][coord_idx] = 1
                    // We want to add doublers (result from past) + partial (result from current), i.e. final_addr
                    // Case 2: has_prev_coordinate_nonzero[coord_idx] = 1, has_prev_nonzero[b-1][coord_idx] = 0
                    // We want to only get doublers (i.e. result from past), but not add current
                    // Case 3:  has_prev_coordinate_nonzero[coord_idx] = 0, has_prev_nonzero[b-1][coord_idx] = 0
                    // Dummy point? 
                    // Case 4: has_prev_coordinate_nonzero[coord_idx] = 0, has_prev_nonzero[b-1][coord_idx] = 1
                    // Only partial

                    acc[coord_idx][x_or_y][reg_idx] <== has_prev_coordinate_nonzero[coord_idx].out * (intermed3[coord_idx][x_or_y][reg_idx] - intermed4[coord_idx][x_or_y][reg_idx])
                        + intermed4[coord_idx][x_or_y][reg_idx];
                }
            }
        }

        // log(9999);
        // log(coord_idx);
        // for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        //     for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
        //         log(acc[coord_idx][x_or_y][reg_idx]);
        //         log(partial[coord_idx][b-1][x_or_y][reg_idx]);

        //     }
        // }
        // log(9999);
    }

    // Write result to output elliptic curve point signal
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
            out[x_or_y][reg_idx] <== acc[0][x_or_y][reg_idx];
        }
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