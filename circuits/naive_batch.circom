pragma circom 2.0.3;

include "../node_modules/circomlib/circuits/poseidon.circom";
include "ecdsa.circom";

// use Poseidon to compute merkle root of binary merkle tree 
// pad with 0s so binary tree has `depth = ceil(log_2(numLeaves))` 
template merkleTreeRoot(numLeaves) {
    assert(numLeaves != 0);
    assert(numLeaves < (1<<251));
    signal input leaf[numLeaves];
    signal output out;

    var depth = 0;
    for(var i=0; i<250; i++) {
        if(numLeaves > (1 << i)) depth = i;
    }
    depth++;

    // hashing the 0 leaves for now, can be optimized with precomputes if necessary
    component hashers[depth][1 << (depth-1)];
    if (numLeaves == 1) depth = 0; // didn't do this above so we don't have size 0 array

    for(var i=depth-1; i>=0; i--){
        for(var j=0; j<(1<<i); j++){
            hashers[i][j] = Poseidon(2);
            if (i == depth-1) {
                hashers[i][j].inputs[0] <== 2*j < numLeaves ? leaf[2*j] : 0;
                hashers[i][j].inputs[1] <== 2*j+1 < numLeaves ? leaf[2*j+1] : 0;
            } else {
                hashers[i][j].inputs[0] <== hashers[i+1][2*j].out; 
                hashers[i][j].inputs[1] <== hashers[i+1][2*j+1].out; 
            }
        }
    }

    out <== numLeaves == 1 ? leaf[0] : hashers[0][0].out;
}

// sig_i = (r_i, s_i) 
// msgHash_i, r_i, s_i, addr_i are BigInts with k registers of n bits each
// batchSize is number of signatures 
template naiveBatchVerify(n, k, batchSize) {
    signal input msgHash[batchSize][k];
    signal input sig[batchSize][2][k];
    signal input addr[batchSize][k];

    signal output merkleRoot; 

    component inputRoot = merkleTreeRoot(batchSize * 2 * k); 
    var index = 0;
    for(var i=0; i<batchSize; i++) {
        for(var j=0; j<k; j++) {
            inputRoot.leaf[index] <== msgHash[i][j];
            inputRoot.leaf[index + 1] <== addr[i][j];
            index += 2;
        }
    }
    merkleRoot <== inputRoot.out; 
}