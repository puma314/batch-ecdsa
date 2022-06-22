# batch-ecdsa

Implementation of batch ECDSA verification in circom.

## Project overview

This repository provides a proof-of-concept implementation of batch ECDSA verification in circom. **These implementations are for demonstration purposes only**. These circuits are not audited, and this is not intended to be used as a library for production-grade applications. The directory structure is as follows
- `circuits` contains the circuits
- `scripts` contains scripts for compiling circuits and generating proofs
- `test` contains unit tests for the new circuits that we introduce, only useful for verifying the witness generated correctly

## Install dependencies

- Run `yarn` at the top level to install npm dependencies (`snarkjs` and `circomlib`).
- You'll also need `circom` version `>= 2.0.2` on your system. Installation instructions [here](https://docs.circom.io/getting-started/installation/).

### Install submodules

We use submodules to install circuits we depend on. Run the following to install the submodule correctly
```
git submodule init
git submodule update
yarn --cwd circuits/circom-ecdsa
```

If you want to build the circuits, you'll need to download a Powers of Tau file with `2^20` constraints and copy it into the `circuits` subdirectory of the project, with the name `pot20_final.ptau`. We do not provide such a file in this repo due to its large size. You can download and copy Powers of Tau files from the Hermez trusted setup from [this repository](https://github.com/iden3/snarkjs#7-prepare-phase-2).

## Building batch ECDSA circuit

Run the following commands to compile the circuits
- `yarn build:c`: Build the circuit in C++
- `yarn build:wasm`: Build the circuit in wasm

These commands will run inside a `build/batch_ecdsa` directory at the top level (which will be created if it doesn't already exist). This process might take several minutes and requires a reasonably-specced machine.

## Benchmarks

### TODO 

All benchmarks were run on a 16-core 3.0GHz, 32G RAM machine (AWS c5.4xlarge instance).

|                                      | yarn build:c | yarn build:wasm |
| ------------------------------------ | --------- | -------- | 
| Constraints                          | x     | x |
| Circuit compilation                  | x       | x   | 
| Witness generation                   | x       | x    | 
| Trusted setup phase 2 key generation | x       | x   | 
| Trusted setup phase 2 contribution   | x      | x    | 
| Proving key size                     | x    | x    |
| Proving key verification             | x     | x   | 
| Proving time                         | x       | x  | 
| Proof verification time              | x       | x   | 

## Testing

Run `yarn test` at the top level to run tests. Note that these tests only test correctness of witness generation. They do not check that circuits are properly constrained, i.e. that only valid witnesses satisfy the constraints. This is a much harder problem that we're currently working on!

Circuit unit tests are written in typescript, in the `test` directory using `chai`, `mocha`, and `circom_tester`. To run a subset of the tests, use `yarn test --grep [test_str]` to run all tests whose description matches `[test_str]`.

## Demo

TODO

## Acknowledgments

This project was built during [0xPARC](http://0xparc.org/)'s Summer Residency. We use a lot of the utilities created by [circom-ecdsa](https://github.com/0xparc/circom-ecdsa).
