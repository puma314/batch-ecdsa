pragma circom 2.0.3;

// Given an input `in`, converts to a BigInt of k registers of n-bits
template ConvertBigInt(n,k) {
    signal input in;
    signal output out[k];

    signal sumOut[k];
    // TODO add RangeCheck here
    component rangeCheck[k];
    var mod = 2**n;
    var xTemp[k];
    for (var i=0; i < k; i++) {
        if (i == 0) {
            xTemp[i] = in;
        } else {
            xTemp[i] = xTemp[i-1] \ mod;
        }
        out[i] <-- xTemp[i] % mod;
        if (i == 0) {
            sumOut[i] <== out[i];
        } else {
            sumOut[i] <== out[i] * (1 << (n*i)) + sumOut[i-1];
        }
    }
    // Constraint to check that t = sum_i tBits[i] * 2^(n*i)
    sumOut[k-1] === in;
}

template BigAddModP(n, k){
    assert(n <= 252);
    signal input a[k];
    signal input b[k];
    signal input p[k];
    signal output out[k];

    component add = BigAdd(n,k);
    for (var i = 0; i < k; i++) {
        add.a[i] <== a[i];
        add.b[i] <== b[i];
    }
    component lt = BigLessThan(n, k+1);
    for (var i = 0; i < k; i++) {
        lt.a[i] <== add.out[i];
        lt.b[i] <== p[i];
    }
    lt.a[k] <== add.out[k];
    lt.b[k] <== 0;

    component sub = BigSub(n,k+1);
    for (var i = 0; i < k; i++) {
        sub.a[i] <== add.out[i];
        sub.b[i] <== (1-lt.out) * p[i];
    }
    sub.a[k] <== add.out[k];
    sub.b[k] <== 0;

    // sub.out[k] === 0;
    for (var i = 0; i < k; i++) {
        out[i] <== sub.out[i];
    }
}