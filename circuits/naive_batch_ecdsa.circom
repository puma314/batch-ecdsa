pragma circom 2.0.4;

include "circom-ecdsa/circuits/ecdsa.circom";

template NaiveBatchECDSAVerifyNoPubkeyCheck(n, k, b) {
    signal input r[b][k];
    signal input rprime[b][k];
    signal input s[b][k];
    signal input msghash[b][k];
    signal input pubkey[b][2][k];
    signal output result;

    component verifiers[b];
    for (var i = 0; i < b; i++) {
      verifiers[i] = ECDSAVerifyNoPubkeyCheck(n, k);
      for (var j = 0; j < k; j++) {
        verifiers[i].r[j] <== r[i][j];
        verifiers[i].s[j] <== s[i][j];
        verifiers[i].msghash[j] <== msghash[i][j];
        verifiers[i].pubkey[0][j] <== pubkey[i][0][j];
        verifiers[i].pubkey[1][j] <== pubkey[i][1][j];
      }
    }

  signal acc[b];
  acc[0] <== verifiers[0].result;
  for (var i = 1; i < b; i++) {
    acc[i] <== acc[i-1] + verifiers[i].result;
  }

  component iszero = IsZero();
  iszero.in <== acc[b-1] - b;
  result <== iszero.out;
}