# Batch ECDSA Verification

Implementation of batch ECDSA verification in circom. The code in this repo allows you to prove that you know valid ECDSA signatures for n messages and n corresponding public keys. **Warning** this code is highly experimental and unaudited. Please use at your own risk.

## Project overview

This repository provides a proof-of-concept implementation of batch ECDSA verification in circom. **These implementations are for demonstration purposes only**. These circuits are not audited, and this is not intended to be used as a library for production-grade applications. The directory structure is as follows
- `circuits` contains the circuits
- `scripts` contains scripts for compiling circuits and generating proofs
- `test` contains unit tests for the new circuits that we introduce, only useful for verifying the witness generated correctly

## Install dependencies

- Run `yarn` at the top level to install npm dependencies (`snarkjs` and `circomlib`).
- You'll also need `circom` version `>= 2.0.2` on your system. Installation instructions [here](https://docs.circom.io/getting-started/installation/).
- To get the C++ witness generator working, follow the steps [here](https://hackmd.io/V-7Aal05Tiy-ozmzTGBYPA?view#Witness-generation-debugging).

### Install submodules

We use submodules to install circuits we depend on. Run the following to install the submodule correctly
```
git submodule init
git submodule update
yarn --cwd circuits/circom-ecdsa
```

If you want to build the circuits, you'll need to download a Powers of Tau file with `2^20` constraints and copy it into the `circuits` subdirectory of the project, with the name `pot20_final.ptau`. We do not provide such a file in this repo due to its large size. You can download and copy Powers of Tau files from the Hermez trusted setup from [this repository](https://github.com/iden3/snarkjs#7-prepare-phase-2).

## Building the circuit

Run the following commands to compile the circuits
- `yarn build:c`: Build the circuit in C++
- `yarn build:wasm`: Build the circuit in wasm

These commands will run inside a `build/batch_ecdsa` directory at the top level (which will be created if it doesn't already exist). This process might take several minutes and requires a reasonably-specced machine.

## Benchmarks

All benchmarks were run on a 32-core 250GB RAM machine (AWS r5.8xlarge) using the C++ witness generator with the rapidsnark prover.

|                                      | naive1  |  verify2 | verify4 | verify8  | verify16  | verify32 |
|--------------------------------------|---------| ---------|---------|----------|-----------|----------|
| Constraints                          | 1.5M    | 1.9M     | 2.8M    | 4.6M     | 8.1M      | 15.3M    |
| Circuit compilation                  | 91s     | 162s     | 186s    | 345s     | 579s      | 1101s    |
| Witness generation                   |         | 44s      | 68s     | 130s     | 211s      | 436s     |
| Trusted setup phase 2 key generation |         | 641s     | 923s    | 1485s    | 2715s     | 5352s    |
| Trusted setup phase 2 contribution   |         | 120s     | 196s    | 366s     | 498s      | 987s     |
| Proving key size                     |         | 1.1GB    | 1.8GB   | 2.9GB    | 4.8GB     | 9.0GB    |
| Proving key verification             |         | 709s     | 1050s   | 1769s    | 3198s     | 6450s    |
| Proving time                         |         | 4s       | 7s      | 14s      | 40s       | 86s      |
| Proof verification time              |         | 1s       | 1s      | 1s       | 1s        | 1s       |

## Testing

Run `yarn test` at the top level to run tests. Note that these tests only test correctness of witness generation. They do not check that circuits are properly constrained, i.e. that only valid witnesses satisfy the constraints. This is a much harder problem that we're currently working on!

Circuit unit tests are written in typescript, in the `test` directory using `chai`, `mocha`, and `circom_tester`. To run a subset of the tests, use `yarn test --grep [test_str]` to run all tests whose description matches `[test_str]`.

## Acknowledgments

This project was built during [0xPARC](http://0xparc.org/)'s Summer Residency. We use a lot of the utilities created by [circom-ecdsa](https://github.com/0xparc/circom-ecdsa).
