import path = require('path');

import { getPublicKey, sign, Point } from '@noble/secp256k1';
import _ from 'lodash';

const F1Field = require('ffjavascript').F1Field;
const Scalar = require('ffjavascript').Scalar;
exports.p = Scalar.fromString(
  '21888242871839275222246405745257275088548364400416034343698204186575808495617'
);
const Fr = new F1Field(exports.p);


function bigint_to_array(n: number, k: number, x: bigint) {
  let mod: bigint = 1n;
  for (var idx = 0; idx < n; idx++) {
    mod = mod * 2n;
  }

  let ret: bigint[] = [];
  var x_temp: bigint = x;
  for (var idx = 0; idx < k; idx++) {
    ret.push(x_temp % mod);
    x_temp = x_temp / mod;
  }
  return ret;
}

// bigendian
function bigint_to_Uint8Array(x: bigint) {
  var ret: Uint8Array = new Uint8Array(32);
  for (var idx = 31; idx >= 0; idx--) {
    ret[idx] = Number(x % 256n);
    x = x / 256n;
  }
  return ret;
}

// bigendian
function Uint8Array_to_bigint(x: Uint8Array) {
  var ret: bigint = 0n;
  for (var idx = 0; idx < x.length; idx++) {
    ret = ret * 256n;
    ret = ret + BigInt(x[idx]);
  }
  return ret;
}


  // privkey, msghash, pub0, pub1
var test_cases: Array<[bigint, bigint, bigint, bigint]> = [];
var privkeys: Array<bigint> = [
  88549154299169935420064281163296845505587953610183896504176354567359434168161n,
  37706893564732085918706190942542566344879680306879183356840008504374628845468n,
  90388020393783788847120091912026443124559466591761394939671630294477859800601n,
  110977009687373213104962226057480551605828725303063265716157300460694423838923n,
];
for (var idx = 0; idx < privkeys.length; idx++) {
  var pubkey: Point = Point.fromPrivateKey(privkeys[idx]);
  var msghash_bigint: bigint = 1234n;
  test_cases.push([privkeys[idx], msghash_bigint, pubkey.x, pubkey.y]);
}

console.log(test_cases);

(BigInt.prototype as any).toJSON = function () {
  return this.toString();
};

Promise.all(test_cases.map(async (test_case) => {
  let privkey = test_case[0];
  let msghash_bigint = test_case[1];
  let pub0 = test_case[2];
  let pub1 = test_case[3];
  var msghash: Uint8Array = bigint_to_Uint8Array(msghash_bigint);

  var sig: Uint8Array = await sign(msghash, bigint_to_Uint8Array(privkey), {
    canonical: true,
    der: false,
  });
  var r: Uint8Array = sig.slice(0, 32);
  var r_bigint: bigint = Uint8Array_to_bigint(r);
  var s: Uint8Array = sig.slice(32, 64);
  var s_bigint: bigint = Uint8Array_to_bigint(s);

  var priv_array: bigint[] = bigint_to_array(64, 4, privkey);
  var r_array: bigint[] = bigint_to_array(64, 4, r_bigint);
  var s_array: bigint[] = bigint_to_array(64, 4, s_bigint);
  var msghash_array: bigint[] = bigint_to_array(64, 4, msghash_bigint);
  var pub0_array: bigint[] = bigint_to_array(64, 4, pub0);
  var pub1_array: bigint[] = bigint_to_array(64, 4, pub1);

  return [r_array, s_array, msghash_array, [pub0_array, pub1_array]];
})).then((collated_batch) => {
  var input = {
    r: _.map(collated_batch, (e: any) => e[0]),
    s: _.map(collated_batch, (e: any) => e[1]),
    msghash: _.map(collated_batch, (e: any) => e[2]),
    pubkey: _.map(collated_batch, (e: any) => e[3]),
  }
  console.log(JSON.stringify(input))
})



