import path = require('path');
import { interpretWitness } from './linear_combiner'
import { expect, assert } from 'chai';
import { getPublicKey, Point } from '@noble/secp256k1';
import fs from 'fs';
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

describe('Secp256k1LinearCombination', function () {
  this.timeout(1000 * 1000);

  // runs circom compilation
  let circuit: any;
  before(async function () {
    circuit = await wasm_tester(
      path.join(__dirname, 'circuits', 'test_secp256k1_linear_combination.circom')
    );
  });

  var BATCH_SZ = 2
  var test_cases: any = []; // coeff[0], coeff[1], points[0].x, points[0].y, points[1].x, points[1].y, sum.x, sum.y

  var privkeys: Array<bigint> = [1n, 2n, 3n, 4n]; // 4 randomly chosen private keys
  var points: Array<Point> = [];
  for (var idx = 0; idx < BATCH_SZ; idx++) {
    var point: Point = Point.fromPrivateKey(privkeys[idx]);
    points.push(point);
  }

  var coeffs: Array<bigint> = [];
  for (var idx = 0; idx < BATCH_SZ; idx++) {
    var coeff = BigInt(idx + 20);
    coeffs.push(coeff);
  }

  let test_case: any = []
  test_case.push(coeffs)
  test_case.push(points.map((point) => [point.x, point.y]))

  let sum = Point.ZERO
  for (var idx = 0; idx < BATCH_SZ; idx++) {
    sum = sum.add(points[idx].multiply(coeffs[idx]))
  }
  test_case.push([sum.x, sum.y])
  test_cases.push(test_case)

  var test_secp256k1_linear_combination_instance = function (
    test_case: any
  ) {
    let coeffs = test_case[0]
    let points_x_and_y = test_case[1]
    let sum_x_and_y = test_case[2]

    it('Secp256k1LinearCombination', async function () {
      let witness = await circuit.calculateWitness({
        coeffs: coeffs.map((coeff: any) => bigint_to_array(64, 4, coeff)),
        points: points_x_and_y.map((point_x_and_y: any) => [bigint_to_array(64, 4, point_x_and_y[0]), bigint_to_array(64, 4, point_x_and_y[1])])
      });
      let {out, aux1, aux2, aux2Scalar, normalizedPoint} = interpretWitness(witness)
      expect(out.x).to.equal(test_case[2][0])
      expect(out.y).to.equal(test_case[2][1])
       await circuit.checkConstraints(witness);
    });
  };

  test_cases.forEach(test_secp256k1_linear_combination_instance);
});