pragma circom 2.0.2;

include "../../circuits/naive_batch.circom";

component main = naiveBatchVerify(64, 4, 2);
