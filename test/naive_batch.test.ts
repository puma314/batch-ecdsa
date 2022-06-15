import path = require('path');

import { expect, assert } from 'chai';
import * as secp from '@noble/secp256k1';
const circom_tester = require('circom_tester');
const wasm_tester = circom_tester.wasm;

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

function Uint8Array_to_array(n: number, k: number, x: Uint8Array) {
  return bigint_to_array(n, k, Uint8Array_to_bigint(x));
}

describe('Generate input', async function () {
  this.timeout(1000 * 1000);

  let batchSize = 4;
  let msgHash = [];
  let sig = [];
  let pubkey = [];

  for (let i = 0; i < batchSize; i++) {
    let messageHash = await secp.utils.sha256(secp.utils.randomBytes());
    msgHash.push(Uint8Array_to_array(64, 4, messageHash));

    let privateKey = secp.utils.randomPrivateKey();
    let publicKey = secp.getPublicKey(privateKey);
    pubkey.push(Uint8Array_to_array(64, 4, publicKey));

    let signatureDER = await secp.sign(messageHash, privateKey);
    let signature = secp.Signature.fromDER(signatureDER);
    // console.log(signature.r.toString(2).length);
    sig.push([bigint_to_array(64, 4, signature.r), bigint_to_array(64, 4, signature.s)]);
  }

  let input = {
    msgHash: msgHash,
    sig: sig,
    pubkey: pubkey,
  };

  console.log(JSON.stringify(input, null, 2));
});
