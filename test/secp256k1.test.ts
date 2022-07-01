import path = require('path');
import { interpretWitness } from './linearCombiner'
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

describe('Secp256k1AddUnequal', function () {
  this.timeout(1000 * 1000);

  // runs circom compilation
  let circuit: any;
  before(async function () {
    circuit = await wasm_tester(path.join(__dirname, 'circuits', 'test_secp256k1_add.circom'));
  });

  // pub0x, pub0y, pub1x, pub0y, sumx, sumy
  var test_cases: Array<[bigint, bigint, bigint, bigint, bigint, bigint]> = [];

  // 4 randomly chosen private keys
  var privkeys: Array<bigint> = [
    88549154299169935420064281163296845505587953610183896504176354567359434168161n,
    37706893564732085918706190942542566344879680306879183356840008504374628845468n,
    90388020393783788847120091912026443124559466591761394939671630294477859800601n,
    110977009687373213104962226057480551605828725303063265716157300460694423838923n,
  ];
  var pubkeys: Array<Point> = [];
  for (var idx = 0; idx < 4; idx++) {
    var pubkey: Point = Point.fromPrivateKey(privkeys[idx]);
    pubkeys.push(pubkey);
  }

  for (var idx = 0; idx < 4; idx++) {
    for (var idx2 = idx + 1; idx2 < 4; idx2++) {
      var sum: Point = pubkeys[idx].add(pubkeys[idx2]);
      test_cases.push([
        pubkeys[idx].x,
        pubkeys[idx].y,
        pubkeys[idx2].x,
        pubkeys[idx2].y,
        sum.x,
        sum.y,
      ]);
    }
  }

  var test_secp256k1_add_instance = function (
    test_case: [bigint, bigint, bigint, bigint, bigint, bigint]
  ) {
    let pub0x = test_case[0];
    let pub0y = test_case[1];
    let pub1x = test_case[2];
    let pub1y = test_case[3];
    let sumx = test_case[4];
    let sumy = test_case[5];

    var pub0x_array: bigint[] = bigint_to_array(64, 4, pub0x);
    var pub0y_array: bigint[] = bigint_to_array(64, 4, pub0y);
    var pub1x_array: bigint[] = bigint_to_array(64, 4, pub1x);
    var pub1y_array: bigint[] = bigint_to_array(64, 4, pub1y);
    var sumx_array: bigint[] = bigint_to_array(64, 4, sumx);
    var sumy_array: bigint[] = bigint_to_array(64, 4, sumy);

    it(
      'Testing pub0x: ' +
        pub0x +
        ' pub0y: ' +
        pub0y +
        ' pub1x: ' +
        pub1x +
        ' pub1y: ' +
        pub1y +
        ' sumx: ' +
        sumx +
        ' sumy: ' +
        sumy,
      async function () {
        let witness = await circuit.calculateWitness({
          a: [pub0x_array, pub0y_array],
          b: [pub1x_array, pub1y_array],
        });
        expect(witness[1]).to.equal(sumx_array[0]);
        expect(witness[2]).to.equal(sumx_array[1]);
        expect(witness[3]).to.equal(sumx_array[2]);
        expect(witness[4]).to.equal(sumx_array[3]);
        expect(witness[5]).to.equal(sumy_array[0]);
        expect(witness[6]).to.equal(sumy_array[1]);
        expect(witness[7]).to.equal(sumy_array[2]);
        expect(witness[8]).to.equal(sumy_array[3]);
        await circuit.checkConstraints(witness);
      }
    );
  };

  test_cases.forEach(test_secp256k1_add_instance);
});

describe('Secp256k1Double', function () {
  this.timeout(1000 * 1000);

  // runs circom compilation
  let circuit: any;
  before(async function () {
    circuit = await wasm_tester(path.join(__dirname, 'circuits', 'test_secp256k1_double.circom'));
  });

  // pubx, puby, doublex, doubley
  var test_cases: Array<[bigint, bigint, bigint, bigint]> = [];

  // 4 randomly chosen private keys
  var privkeys: Array<bigint> = [
    88549154299169935420064281163296845505587953610183896504176354567359434168161n,
    37706893564732085918706190942542566344879680306879183356840008504374628845468n,
    90388020393783788847120091912026443124559466591761394939671630294477859800601n,
    110977009687373213104962226057480551605828725303063265716157300460694423838923n,
  ];
  var pubkeys: Array<Point> = [];
  for (var idx = 0; idx < 4; idx++) {
    var pubkey: Point = Point.fromPrivateKey(privkeys[idx]);
    pubkeys.push(pubkey);
  }

  for (var idx = 0; idx < 4; idx++) {
    var double: Point = pubkeys[idx].add(pubkeys[idx]);
    test_cases.push([pubkeys[idx].x, pubkeys[idx].y, double.x, double.y]);
  }

  var test_secp256k1_double_instance = function (test_case: [bigint, bigint, bigint, bigint]) {
    let pubx = test_case[0];
    let puby = test_case[1];
    let doublex = test_case[2];
    let doubley = test_case[3];

    var pubx_array: bigint[] = bigint_to_array(64, 4, pubx);
    var puby_array: bigint[] = bigint_to_array(64, 4, puby);
    var doublex_array: bigint[] = bigint_to_array(64, 4, doublex);
    var doubley_array: bigint[] = bigint_to_array(64, 4, doubley);

    it(
      'Testing pubx: ' + pubx + ' puby: ' + puby + ' doublex: ' + doublex + ' doubley: ' + doubley,
      async function () {
        let witness = await circuit.calculateWitness({ in: [pubx_array, puby_array] });
        expect(witness[1]).to.equal(doublex_array[0]);
        expect(witness[2]).to.equal(doublex_array[1]);
        expect(witness[3]).to.equal(doublex_array[2]);
        expect(witness[4]).to.equal(doublex_array[3]);
        expect(witness[5]).to.equal(doubley_array[0]);
        expect(witness[6]).to.equal(doubley_array[1]);
        expect(witness[7]).to.equal(doubley_array[2]);
        expect(witness[8]).to.equal(doubley_array[3]);
        await circuit.checkConstraints(witness);
      }
    );
  };

  test_cases.forEach(test_secp256k1_double_instance);
});

describe('Secp256k1ScalarMult', function () {
  this.timeout(1000 * 1000);

  // runs circom compilation
  let circuit: any;
  before(async function () {
    circuit = await wasm_tester(
      path.join(__dirname, 'circuits', 'test_secp256k1_scalarmult.circom')
    );
  });

  // pubx, puby, scalarx, scalary
  var test_cases: Array<[bigint, bigint, bigint, bigint, bigint]> = [];

  // 4 randomly chosen private keys
  var privkeys: Array<bigint> = [
    88549154299169935420064281163296845505587953610183896504176354567359434168161n,
    37706893564732085918706190942542566344879680306879183356840008504374628845468n,
    90388020393783788847120091912026443124559466591761394939671630294477859800601n,
    110977009687373213104962226057480551605828725303063265716157300460694423838923n,
  ];
  var scalars: Array<bigint> = [
    49162213912846590284921918007854216316029616890568331838502149777137252900653n,
    76140377069448461768020097386275705201902774674727812489842341759686817688095n,
    110598305201199016801761605786356726057447763277828986929716844671829352701135n,
    89529513800538853223820080909500512684436497357931942181483678921439822888771n,
  ];
  var pubkeys: Array<Point> = [];
  for (var idx = 0; idx < 4; idx++) {
    var pubkey: Point = Point.fromPrivateKey(privkeys[idx]);
    pubkeys.push(pubkey);
  }

  for (var idx = 0; idx < 4; idx++) {
    var scalar: bigint = scalars[idx];
    var scalar_point: Point = pubkeys[idx].multiply(scalar);
    test_cases.push([scalar, pubkeys[idx].x, pubkeys[idx].y, scalar_point.x, scalar_point.y]);
  }

  var test_secp256k1_scalar_instance = function (
    test_case: [bigint, bigint, bigint, bigint, bigint]
  ) {
    let scalar = test_case[0];
    let pubx = test_case[1];
    let puby = test_case[2];
    let scalarx = test_case[3];
    let scalary = test_case[4];

    var scalar_array: bigint[] = bigint_to_array(64, 4, scalar);
    var pubx_array: bigint[] = bigint_to_array(64, 4, pubx);
    var puby_array: bigint[] = bigint_to_array(64, 4, puby);
    var scalarx_array: bigint[] = bigint_to_array(64, 4, scalarx);
    var scalary_array: bigint[] = bigint_to_array(64, 4, scalary);

    it(
      'Testing scalar: ' +
        scalar +
        ' pubx: ' +
        pubx +
        ' puby: ' +
        puby +
        ' scalarx: ' +
        scalarx +
        ' scalary: ' +
        scalary,
      async function () {
        let witness = await circuit.calculateWitness({
          scalar: scalar_array,
          point: [pubx_array, puby_array],
        });
        expect(witness[1]).to.equal(scalarx_array[0]);
        expect(witness[2]).to.equal(scalarx_array[1]);
        expect(witness[3]).to.equal(scalarx_array[2]);
        expect(witness[4]).to.equal(scalarx_array[3]);
        expect(witness[5]).to.equal(scalary_array[0]);
        expect(witness[6]).to.equal(scalary_array[1]);
        expect(witness[7]).to.equal(scalary_array[2]);
        expect(witness[8]).to.equal(scalary_array[3]);
        await circuit.checkConstraints(witness);
      }
    );
  };

  test_cases.forEach(test_secp256k1_scalar_instance);
});

// TODO: figure out some way to test that if point is not on curve, pf gen should fail
describe('Secp256k1PointOnCurve', function () {
  this.timeout(1000 * 1000);

  // runs circom compilation
  let circuit: any;
  before(async function () {
    circuit = await wasm_tester(path.join(__dirname, 'circuits', 'test_secp256k1_poc.circom'));
  });

  // x, y, on/off
  var test_cases: Array<[bigint, bigint, boolean]> = [];

  // base point G on curve
  test_cases.push([
    55066263022277343669578718895168534326250603453777594175500187360389116729240n,
    32670510020758816978083085130507043184471273380659243275938904335757337482424n,
    true,
  ]);

  // modified point not on curve
  test_cases.push([
    45066263022277343669578718895168534326250603453777594175500187360389116729240n,
    22670510020758816978083085130507043184471273380659243275938904335757337482424n,
    false,
  ]);

  var test_secp256k1_poc_instance = function (test_case: [bigint, bigint, boolean]) {
    let x = test_case[0];
    let y = test_case[1];
    let on_curve = test_case[2];

    var x_array: bigint[] = bigint_to_array(64, 4, x);
    var y_array: bigint[] = bigint_to_array(64, 4, y);

    it('Testing x: ' + x + ' y: ' + y + ' on_curve: ' + on_curve, async function () {
      if (on_curve) {
        let witness = await circuit.calculateWitness({
          x: x_array,
          y: y_array,
        });
        await circuit.checkConstraints(witness);
      } else {
        let witnessCalcSucceeded = true;
        try {
          // witness generation should fail
          await circuit.calculateWitness({
            x: x_array,
            y: y_array,
          });
        } catch (e) {
          witnessCalcSucceeded = false;
          console.log('point not on curve');
        }
        expect(witnessCalcSucceeded).to.equal(false);
      }
    });
  };

  test_cases.forEach(test_secp256k1_poc_instance);
});

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

  // coeff[0], coeff[1], points[0].x, points[0].y, points[1].x, points[1].y, sum.x, sum.y
  var test_cases = [];

  // 4 randomly chosen private keys
  var privkeys: Array<bigint> = [1n, 2n];
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

  let test_case = []
  test_case.push(coeffs)
  test_case.push(points.map((point) => [point.x, point.y]))

  let sum = Point.ZERO
  for (var idx = 0; idx < BATCH_SZ; idx++) {
    sum = sum.add(points[idx].multiply(coeffs[idx]))
  }
  test_case.push([sum.x, sum.y])
  test_cases.push(test_case)

  // logging lookup table, this seems right
  // for (var i = 1; i  < 8; i++) {
  //   var wP = points[0].multiply(i)
  //   console.log(bigint_to_array(64, 4, wP.x))
  //   console.log(bigint_to_array(64, 4, wP.y))
  // }

  // console.log("LOOKUP TABLE")

  // test_case = [coeffs_arr, [[point0.x, point0.y], [point1.x, point1.y], ...]]


  var test_secp256k1_linear_combination_instance = function (
    test_case: any
  ) {
    // let coeff0 = test_case[0];
    // let coeff1 = test_case[1];
    // let point0x = test_case[2];
    // let point0y = test_case[3];
    // let point1x = test_case[4];
    // let point1y = test_case[5];
    // let sumx = test_case[6];
    // let sumy = test_case[7];

    // let coeff0_array: bigint[] = bigint_to_array(64, 4, coeff0);
    // let coeff1_array: bigint[] = bigint_to_array(64, 4, coeff1);
    // var point0x_array: bigint[] = bigint_to_array(64, 4, point0x);
    // var point0y_array: bigint[] = bigint_to_array(64, 4, point0y);
    // var point1x_array: bigint[] = bigint_to_array(64, 4, point1x);
    // var point1y_array: bigint[] = bigint_to_array(64, 4, point1y);
    // var sumx_array: bigint[] = bigint_to_array(64, 4, sumx);
    // var sumy_array: bigint[] = bigint_to_array(64, 4, sumy);

    // console.log(
    //   coeff0_array,
    //   coeff1_array,
    //   point0x_array,
    //   point0y_array,
    //   point1x_array,
    //   point1y_array,
    //   sumx_array,
    //   sumy_array
    // );

    // console.log(
    //   JSON.stringify({
    //     coeffs: [coeff0_array, coeff1_array],
    //     points: [
    //       [point0x_array, point0y_array],
    //       [point1x_array, point1y_array],
    //     ],
    //   })
    // );
    let coeffs = test_case[0]
    let points_x_and_y = test_case[1]
    let sum_x_and_y = test_case[2]
    // console.log(coeffs)
    // console.log(points_x_and_y)
    // console.log(sum_x_and_y)
    // console.log(JSON.stringify(
    // {
    //   coeffs: coeffs.map((coeff: any) => bigint_to_array(64, 4, coeff)),
    //   points: points_x_and_y.map((point_x_and_y: any) => [bigint_to_array(64, 4, point_x_and_y[0]), bigint_to_array(64, 4, point_x_and_y[1])])
    // }))

    // console.log(sumx_array);
    // console.log(sumy_array);

    it('testing linear combination', async function () {
      let witness1 = {"a": 0}
      fs.writeFileSync('LinearCombinerWitnessFake.json', JSON.stringify(witness1));
      let witness = await circuit.calculateWitness({
        coeffs: coeffs.map((coeff: any) => bigint_to_array(64, 4, coeff)),
        points: points_x_and_y.map((point_x_and_y: any) => [bigint_to_array(64, 4, point_x_and_y[0]), bigint_to_array(64, 4, point_x_and_y[1])])
      });
      fs.writeFileSync('LinearCombinerWitness.json', JSON.stringify(witness));
      let {out, aux1, aux2, aux2Scalar, normalizedPoint} = interpretWitness(witness)
      // console.log('out')
      // console.log(out)
      // console.log("Expected sum")
      // console.log(test_case[2])
      expect(out.x).to.equal(test_case[2][0])
      expect(out.y).to.equal(test_case[2][1])

      // console.log('aux1')
      // console.log(aux1)
      // console.log('aux2')
      // console.log(aux2)
      // console.log('aux2 scalar')
      // console.log(aux2Scalar)
      // console.log(normalizedPoint)

      // expect(witness[1]).to.equal(sumx_array[0]);
      // expect(witness[2]).to.equal(sumx_array[1]);
      // expect(witness[3]).to.equal(sumx_array[2]);
      // expect(witness[4]).to.equal(sumx_array[3]);
      // expect(witness[5]).to.equal(sumy_array[0]);
      // expect(witness[6]).to.equal(sumy_array[1]);
      // expect(witness[7]).to.equal(sumy_array[2]);
      // expect(witness[8]).to.equal(sumy_array[3]);
      await circuit.checkConstraints(witness);
    });


  };

  test_cases.forEach(test_secp256k1_linear_combination_instance);
});
