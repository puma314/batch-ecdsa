pragma circom 2.0.4;

include "../node_modules/circomlib/circuits/poseidon.circom";
include "circom-ecdsa/circuits/bigint.circom";
include "circom-ecdsa/circuits/secp256k1.circom";
include "circom-ecdsa/circuits/bigint_func.circom";
include "circom-ecdsa/circuits/ecdsa_func.circom";
include "circom-ecdsa/circuits/ecdsa.circom";
include "circom-ecdsa/circuits/secp256k1_func.circom";
include "bigint_ext.circom";

template Secp256k1IsEqual(n, k) {
    signal input a[2][k];
    signal input b[2][k];
    signal output out;

    component are_registers_equal[2][k];
    component all_registers_equal = IsEqual();

    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
            are_registers_equal[x_or_y][reg_idx] = IsEqual();
            are_registers_equal[x_or_y][reg_idx].in[0] <== a[x_or_y][reg_idx];
            are_registers_equal[x_or_y][reg_idx].in[1] <== b[x_or_y][reg_idx];
        }
    }

    signal acc[2*k];
    acc[0] <== are_registers_equal[0][0].out;
    acc[1] <== acc[0] + are_registers_equal[0][1].out;
    acc[2] <== acc[1] + are_registers_equal[0][2].out;
    acc[3] <== acc[2] + are_registers_equal[0][3].out;
    acc[4] <== acc[3] + are_registers_equal[1][0].out;
    acc[5] <== acc[4] + are_registers_equal[1][1].out;
    acc[6] <== acc[5] + are_registers_equal[1][2].out;
    acc[7] <== acc[6] + are_registers_equal[1][3].out;

    all_registers_equal.in[0] <== acc[2*k-1];
    all_registers_equal.in[1] <== 2 * k;
    out <== all_registers_equal.out;
}

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


    component point_on_curve[w];
    for (var i = 1; i < w; i++) {
        doubler[i] = Secp256k1Double(n, k);
        point_on_curve[i] = Secp256k1PointOnCurve();
        for(var j = 0; j < k; j++){
            point_on_curve[i].x[j] <== doubler[i-1].out[0][j];
            point_on_curve[i].y[j] <== doubler[i-1].out[1][j];
        }
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

/* Computes a linear combination of ECC points
 * coeffs[b][k] an array of coefficients for the linear combination
 * points[b][2][k] an array of ECC points
 * out[2][k] the computed linear combination of points weighted by coeffs
 * Note: It is expected that none of the points are equal
*/
template Secp256k1LinearCombination(n, k, b) {
    // Input & Output Signals
    signal input coeffs[b][k];
    signal input points[b][2][k];
    signal output out[2][k];

    // Variables
    var w = 4;
    var window_size = 1 << w;
    var num_coordinates = div_ceil(n * k, w);
    var order[100] = get_secp256k1_order(n, k);
    var dummyHolder[2][100] = get_dummy_point(n, k);
    var dummy[2][k];
    for (var i = 0; i < k; i++) dummy[0][i] = dummyHolder[0][i];
    for (var i = 0; i < k; i++) dummy[1][i] = dummyHolder[1][i];

    var dummy2[2][k];
    dummy2[0][0] = 7302857710491818226;
    dummy2[0][1] = 13090816099812022951;
    dummy2[0][2] = 9346046874093976485;
    dummy2[0][3] = 16390367348011359441;

    dummy2[1][0] = 3244438850366025804;
    dummy2[1][1] = 9434351362574893148;
    dummy2[1][2] = 7254847369327388665;
    dummy2[1][3] = 7867482507585870065;

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
            // Either there was a column in the past with a 1 or the previous column was 1
            has_prev_coordinate_nonzero[coord_idx].a <== has_prev_coordinate_nonzero[coord_idx+1].out;
            has_prev_coordinate_nonzero[coord_idx].b <== has_prev_nonzero[b-1][coord_idx+1].out;
        }
    }

    // Efficient computation of linear combinations of elliptic curve points
    signal acc[num_coordinates][2][k];
    signal intermed1[num_coordinates][b-1][2][k];
    signal intermed2[num_coordinates][b-1][2][k];
    signal intermed3[num_coordinates][2][k];
    signal intermed4[num_coordinates][2][k];
    signal partial[num_coordinates][b][2][k];
    component doublers[num_coordinates];
    component adders[num_coordinates][b-1];
    component are_points_equal[num_coordinates][b-1];
    component final_adder[num_coordinates-1];

    for (var coord_idx = num_coordinates - 1; coord_idx >= 0; coord_idx--) {
        // If this is not the first coordinate, double the accumulator from the last iteration
        if (coord_idx != num_coordinates - 1) {
            doublers[coord_idx] = Secp256k1DoubleRepeat(n, k, w);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    doublers[coord_idx].in[x_or_y][reg_idx] <== acc[coord_idx+1][x_or_y][reg_idx];
                }
            }
        }

        // Set the first index of the partial sum to the multiplexer output (could be dummy!)
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                partial[coord_idx][0][x_or_y][reg_idx] <== multiplexers[0][coord_idx][x_or_y].out[reg_idx];
            }
        }

        // Compute the remaining partial sums
        for (var batch_idx = 1; batch_idx < b; batch_idx++) {
            are_points_equal[coord_idx][batch_idx-1] = Secp256k1IsEqual(n, k);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    are_points_equal[coord_idx][batch_idx-1].a[x_or_y][reg_idx] <==
                        partial[coord_idx][batch_idx-1][x_or_y][reg_idx];
                    are_points_equal[coord_idx][batch_idx-1].b[x_or_y][reg_idx] <==
                        multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx];
                }
            }

            // Compute the prev partial sum + current multiplexer output (note: not always used)
            adders[coord_idx][batch_idx-1] = Secp256k1AddUnequal(n, k);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    adders[coord_idx][batch_idx-1].a[x_or_y][reg_idx] <==
                        are_points_equal[coord_idx][batch_idx-1].out * (dummy2[x_or_y][reg_idx] - partial[coord_idx][batch_idx-1][x_or_y][reg_idx])
                        + partial[coord_idx][batch_idx-1][x_or_y][reg_idx];
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


                    // IF THERE WAS NO PREV NON ZERO SELECTOR => partial = 0
                    // IF THERE WAS NO PREV NON ZERO SELECTOR => partial = dummy
                    // Case 2: there is not prev non-zero selector
                    intermed2[coord_idx][batch_idx-1][x_or_y][reg_idx] <==
                        iszero[batch_idx][coord_idx].out * (dummy[x_or_y][reg_idx] - multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx])
                        + multiplexers[batch_idx][coord_idx][x_or_y].out[reg_idx];
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
        if (coord_idx == num_coordinates - 1) {
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    acc[coord_idx][x_or_y][reg_idx] <==
                        (1 - has_prev_nonzero[b-1][coord_idx].out) * (dummy[x_or_y][reg_idx] - partial[coord_idx][b-1][x_or_y][reg_idx])
                        + partial[coord_idx][b-1][x_or_y][reg_idx];
                }
            }
        } else {
            final_adder[coord_idx] = Secp256k1AddUnequal(n, k);
            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    final_adder[coord_idx].a[x_or_y][reg_idx] <== doublers[coord_idx].out[x_or_y][reg_idx];
                    final_adder[coord_idx].b[x_or_y][reg_idx] <== partial[coord_idx][b-1][x_or_y][reg_idx];
                }
            }

            for (var reg_idx = 0; reg_idx < k; reg_idx++) {
                for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
                    /*
                    Case 1: has_prev_coordinate_nonzero[coord_idx] = 1, has_prev_nonzero[b-1][coord_idx] = 1
                    acc = final_addr = doublers + partial (result from the past + current result)
                    Case 2: has_prev_coordinate_nonzero[coord_idx] = 1, has_prev_nonzero[b-1][coord_idx] = 0
                    acc = doublers (result from the past)
                    Case 3:  has_prev_coordinate_nonzero[coord_idx] = 0, has_prev_nonzero[b-1][coord_idx] = 0
                    acc = dummy_point
                    Case 4: has_prev_coordinate_nonzero[coord_idx] = 0, has_prev_nonzero[b-1][coord_idx] = 1
                    acc = partial (current result)
                    */
                    intermed3[coord_idx][x_or_y][reg_idx] <== has_prev_nonzero[b-1][coord_idx].out * (final_adder[coord_idx].out[x_or_y][reg_idx] - doublers[coord_idx].out[x_or_y][reg_idx])
                        + doublers[coord_idx].out[x_or_y][reg_idx];
                    intermed4[coord_idx][x_or_y][reg_idx] <== (1-has_prev_nonzero[b-1][coord_idx].out) * (dummy[x_or_y][reg_idx])
                        + (has_prev_nonzero[b-1][coord_idx].out) * (partial[coord_idx][b-1][x_or_y][reg_idx]);

                    acc[coord_idx][x_or_y][reg_idx] <== has_prev_coordinate_nonzero[coord_idx].out * (intermed3[coord_idx][x_or_y][reg_idx] - intermed4[coord_idx][x_or_y][reg_idx])
                        + intermed4[coord_idx][x_or_y][reg_idx];
                }
            }
        }
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
    // Assertions
    assert(k >= 2);
    assert(k <= 100);

    // Signals
    signal input r[b][k];
    signal input rprime[b][k];
    signal input s[b][k];
    signal input msghash[b][k];
    signal input pubkey[b][2][k];
    signal output result;

    // Variables
    var p[100] = get_secp256k1_prime(n, k);
    var order[100] = get_secp256k1_order(n, k);
    var sinv_comp[b][100];
    signal sinv[b][k];

    // Use poseidon hash to get a random t for summations
    component MultiHasher[b][k];
    for (var i=0; i < b; i++) {
        for (var j=0; j < k; j++) {
            MultiHasher[i][j] = Poseidon(6);
            MultiHasher[i][j].inputs[0] <== r[i][j];
            MultiHasher[i][j].inputs[1] <== s[i][j];
            MultiHasher[i][j].inputs[2] <== msghash[i][j];
            MultiHasher[i][j].inputs[3] <== pubkey[i][0][j];
            MultiHasher[i][j].inputs[4] <== pubkey[i][1][j];
            if (i == 0 && j == 0 ) {
                MultiHasher[i][j].inputs[5] <== 0;
            } else if (j == 0) {
                MultiHasher[i][j].inputs[5] <== MultiHasher[i-1][j].out;
            } else {
                MultiHasher[i][j].inputs[5] <== MultiHasher[i][j-1].out;
            }
        }
    }

    // Compute powers of t
    signal t;
    t <== MultiHasher[b-1][k-1].out;
    signal TPowersBits[b][k];
    component tToBigInt;
    component TPowersBigMult[b-2];
    tToBigInt = ConvertBigInt(n, k);
    tToBigInt.in <== t;
    for (var i=0; i < b; i++) {
        if (i == 0) {
            TPowersBits[0][0] <== 1;
            for (var j=1; j < k; j++) {
                TPowersBits[0][j] <== 0;
            }
        } else if (i == 1) {
            for (var j=0; j < k; j++) {
                TPowersBits[1][j] <== tToBigInt.out[j];
            }
        } else {
            TPowersBigMult[i-2] = BigMultModP(n,k);
            for (var j=0; j < k; j++) {
                TPowersBigMult[i-2].a[j] <== tToBigInt.out[j];
                TPowersBigMult[i-2].b[j] <== TPowersBits[i-1][j];
                TPowersBigMult[i-2].p[j] <== order[j];
            }
            for (var j=0; j < k; j++) {
                TPowersBits[i][j] <== TPowersBigMult[i-2].out[j];
            }
        }
    }

    // Compute s^-1 mod n for each signature
    component sinv_range_checks[b][k];
    component sinv_check[b];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        sinv_comp[batch_idx] = mod_inv(n, k, s[batch_idx], order);
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            sinv[batch_idx][reg_idx] <-- sinv_comp[batch_idx][reg_idx];
            sinv_range_checks[batch_idx][reg_idx] = Num2Bits(n);
            sinv_range_checks[batch_idx][reg_idx].in <== sinv[batch_idx][reg_idx];
        }

        sinv_check[batch_idx] = BigMultModP(n, k);
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            sinv_check[batch_idx].a[reg_idx] <== sinv[batch_idx][reg_idx];
            sinv_check[batch_idx].b[reg_idx] <== s[batch_idx][reg_idx];
            sinv_check[batch_idx].p[reg_idx] <== order[reg_idx];
        }

        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            if (reg_idx > 0) {
                sinv_check[batch_idx].out[reg_idx] === 0;
            }
            if (reg_idx == 0) {
                sinv_check[batch_idx].out[reg_idx] === 1;
            }
        }
    }

    // Compute (h * sinv) mod n for each signature
    component g_coeff1[b];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        g_coeff1[batch_idx] = BigMultModP(n, k);
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            g_coeff1[batch_idx].a[reg_idx] <== sinv[batch_idx][reg_idx];
            g_coeff1[batch_idx].b[reg_idx] <== msghash[batch_idx][reg_idx];
            g_coeff1[batch_idx].p[reg_idx] <== order[reg_idx];
        }
    }

    // Compute t^i (h * sinv) mod n for each signature
    component g_coeff2[b];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        g_coeff2[batch_idx] = BigMultModP(n, k);
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            g_coeff2[batch_idx].a[reg_idx] <== g_coeff1[batch_idx].out[reg_idx];
            g_coeff2[batch_idx].b[reg_idx] <== TPowersBits[batch_idx][reg_idx];
            g_coeff2[batch_idx].p[reg_idx] <== order[reg_idx];
        }
    }

    // compute sum_i t^i (h * sinv) mod n
    component g_coeff_sums[b];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        g_coeff_sums[batch_idx] = BigAddModP(n, k);
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            if (batch_idx == 0) {
                g_coeff_sums[batch_idx].a[reg_idx] <== 0;
            } else {
                g_coeff_sums[batch_idx].a[reg_idx] <== g_coeff_sums[batch_idx-1].out[reg_idx];
            }
            g_coeff_sums[batch_idx].b[reg_idx] <== g_coeff2[batch_idx].out[reg_idx];
            g_coeff_sums[batch_idx].p[reg_idx] <== order[reg_idx];
        }
    }

    // compute (r * sinv) mod n for each signature
    component pubkey_coeff1[b];
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        pubkey_coeff1[batch_idx] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff1[batch_idx].a[j] <== sinv[batch_idx][j];
            pubkey_coeff1[batch_idx].b[j] <== r[batch_idx][j];
            pubkey_coeff1[batch_idx].p[j] <== order[j];
        }
    }

    // compute - (r * sinv) mod n for each signature
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
    component pubkey_coeff3[b];
    for (var i = 0; i < b; i++) {
        pubkey_coeff3[i] = BigMultModP(n, k);
        for (var j = 0; j < k; j++) {
            pubkey_coeff3[i].a[j] <== pubkey_coeff2[i].out[j];
            pubkey_coeff3[i].b[j] <== TPowersBits[i][j];
            pubkey_coeff3[i].p[j] <== order[j];
        }
    }

    // \sum_i t^i (R_i - (r_i s_i^{-1}) Q_i)
    component linear_combiner = Secp256k1LinearCombination(n, k, 2 * b);
    for (var batch_idx = 0; batch_idx < b; batch_idx++) {
        for (var reg_idx = 0; reg_idx < k; reg_idx++) {
            // - t^i * (r_i s_i^{-1}) * Q_i
            linear_combiner.coeffs[batch_idx*2][reg_idx] <== pubkey_coeff3[batch_idx].out[reg_idx];
            linear_combiner.points[batch_idx*2][0][reg_idx] <== pubkey[batch_idx][0][reg_idx];
            linear_combiner.points[batch_idx*2][1][reg_idx] <== pubkey[batch_idx][1][reg_idx];
            // t^i * R_i
            linear_combiner.coeffs[batch_idx*2+1][reg_idx] <== TPowersBits[batch_idx][reg_idx];
            linear_combiner.points[batch_idx*2+1][0][reg_idx] <== r[batch_idx][reg_idx];
            linear_combiner.points[batch_idx*2+1][1][reg_idx] <== rprime[batch_idx][reg_idx];
        }
    }

    // compute (\sum_i t^i (h * sinv)) * G
    component generator_term = ECDSAPrivToPub(n, k);
    for (var j = 0; j < k; j++) {
        generator_term.privkey[j] <== g_coeff_sums[b-1].out[j];
    }

    component compare[2][k];
    signal num_equal[k];
    for (var reg_idx = 0; reg_idx < k; reg_idx++) {
        for (var x_or_y = 0; x_or_y < 2; x_or_y++) {
            compare[x_or_y][reg_idx] = IsEqual();
            compare[x_or_y][reg_idx].in[0] <== linear_combiner.out[x_or_y][reg_idx];
            compare[x_or_y][reg_idx].in[1] <== generator_term.pubkey[x_or_y][reg_idx];
        }
        if (reg_idx == 0) {
            num_equal[0] <== compare[0][reg_idx].out + compare[1][reg_idx].out;
        } else {
            num_equal[reg_idx] <== num_equal[reg_idx-1] + compare[0][reg_idx].out + compare[1][reg_idx].out;
        }
    }
    component SumsEqual = IsZero();
    SumsEqual.in <== num_equal[k-1] - 2*k;
    result <== SumsEqual.out;
}