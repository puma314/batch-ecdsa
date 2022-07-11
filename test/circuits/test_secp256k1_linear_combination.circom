pragma circom 2.0.2;

include "../../circuits/batch_ecdsa.circom";

component main {public [coeffs, points]} = Secp256k1LinearCombination(64, 4, 2);
