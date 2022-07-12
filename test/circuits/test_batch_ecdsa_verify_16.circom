pragma circom 2.0.5;

include "../../circuits/batch_ecdsa.circom";

component main {public [r, rprime, s, msghash, pubkey]} = BatchECDSAVerifyNoPubkeyCheck(64, 4, 16);
