#!/bin/bash

PHASE1=../../circuits/pot20_final.ptau
BUILD_DIR=../../build/batch_ecdsa
CIRCUIT_NAME=batch_ecdsa

if [ ! -d "$BUILD_DIR" ]; then
    echo "No build directory found. Creating build directory..."
    mkdir -p "$BUILD_DIR"
fi

echo "****COMPILING CIRCUIT****"
start=`date +%s`
circom "$CIRCUIT_NAME".circom --sym --c --output "$BUILD_DIR"
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****Running make to make witness generation binary****"
start=`date +%s`
make -C "$BUILD_DIR"/"$CIRCUIT_NAME"_cpp
cp "$BUILD_DIR"/"$CIRCUIT_NAME"_cpp/"$CIRCUIT_NAME" "$BUILD_DIR"
cp "$BUILD_DIR"/"$CIRCUIT_NAME"_cpp/"$CIRCUIT_NAME".dat "$BUILD_DIR"
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****Executing witness generation****"
start=`date +%s`
./"$BUILD_DIR"/"$CIRCUIT_NAME" input_batch_ecdsa_rprime.json "$BUILD_DIR"/witness.wtns
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****Converting witness to json****"
start=`date +%s`
npx snarkjs wej "$BUILD_DIR"/witness.wtns "$BUILD_DIR"/witness.json
end=`date +%s`
echo "DONE ($((end-start))s)"