import { sign, Point, CURVE } from '@noble/secp256k1';
import _ from 'lodash';
import fs from 'fs';

const F1Field = require('ffjavascript').F1Field;
const Scalar = require('ffjavascript').Scalar;
exports.p = Scalar.fromString(
  '21888242871839275222246405745257275088548364400416034343698204186575808495617'
);

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

// Mod n operators from @noble-secp256k1

const _0n = BigInt(0);
const _1n = BigInt(1);
const _2n = BigInt(2);
const _3n = BigInt(3);
const _8n = BigInt(8);

// Calculates a modulo b
function mod(a: bigint, b: bigint = CURVE.P): bigint {
  const result = a % b;
  return result >= _0n ? result : b + result;
}

// Inverses number over modulo
function invert(number: bigint, modulo: bigint = CURVE.P): bigint {
  if (number === _0n || modulo <= _0n) {
    throw new Error(`invert: expected positive integers, got n=${number} mod=${modulo}`);
  }
  // Eucledian GCD https://brilliant.org/wiki/extended-euclidean-algorithm/
  let a = mod(number, modulo);
  let b = modulo;
  // prettier-ignore
  let x = _0n, y = _1n, u = _1n, v = _0n;
  while (a !== _0n) {
    const q = b / a;
    const r = b % a;
    const m = x - u * q;
    const n = y - v * q;
    // prettier-ignore
    b = a, a = r, x = u, y = v, u = m, v = n;
  }
  const gcd = b;
  if (gcd !== _1n) throw new Error('invert: does not exist');
  return mod(x, modulo);
}

export function interpretWitness(witness: string[]) {
    var out
    var aux1
    var aux2
    var aux2Scalar

    let index = 1
    let k = 4
    let n = 64

    let outarr: any = []
    for (var j = 0; j < 2; j++) {
        let inter = BigInt(0)
        for (var i = 0; i < k; i++) {
            inter += BigInt(witness[index]) * BigInt(2**(n*i))
            index += 1
        }
        outarr.push(inter)
    }
    out = new Point(outarr[0], outarr[1])

    let aux1arr: any = []
    for (var j = 0; j < 2; j++) {
        let inter = BigInt(0)
        for (var i = 0; i < k; i++) {
            inter += BigInt(witness[index]) * BigInt(2**(n*i))
            index += 1
        }
        aux1arr.push(inter)
    }
    aux1 = new Point(aux1arr[0], aux1arr[1])


    let aux2arr: any = []
    for (var j = 0; j < 2; j++) {
        let inter = BigInt(0)
        for (var i = 0; i < k; i++) {
            inter += BigInt(witness[index]) * BigInt(2**(n*i))
            index += 1
        }
        aux2arr.push(inter)
    }
    aux2 = new Point(aux2arr[0], aux2arr[1])

    aux2Scalar = BigInt(witness[index])

    let normalizedPoint = out.subtract(aux1.add(aux2.multiply(aux2Scalar)))
    return {out, aux1, aux2, aux2Scalar, normalizedPoint}
}