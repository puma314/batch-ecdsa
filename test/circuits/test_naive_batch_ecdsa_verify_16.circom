pragma circom 2.0.3;

include "../../circuits/naive_batch_ecdsa.circom";

component main {public [r, rprime, s, msghash, pubkey]} = NaiveBatchECDSAVerifyNoPubkeyCheck(64, 4, 16);