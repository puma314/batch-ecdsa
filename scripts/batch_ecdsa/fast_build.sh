#!/bin/bash

PHASE1=../../circuits/pot20_final.ptau
BUILD_DIR=../../build/batch_ecdsa
CIRCUIT_NAME=batch_ecdsa
OUTPUT_DIR="$BUILD_DIR"/"$CIRCUIT_NAME"_cpp

if [ ! -d "$BUILD_DIR" ]; then
    echo "No build directory found. Creating build directory..."
    mkdir -p "$BUILD_DIR"
fi

echo "****COMPILING CIRCUIT****"
start=`date +%s`
circom "$CIRCUIT_NAME".circom --r1cs --sym --c --output "$BUILD_DIR"
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****Running make to make witness generation binary****"
start=`date +%s`
make -C "$OUTPUT_DIR"
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****Executing witness generation****"
start=`date +%s`
./"$OUTPUT_DIR"/"$CIRCUIT_NAME" input_batch_ecdsa_rprime.json "$OUTPUT_DIR"/witness.wtns
end=`date +%s`
echo "DONE ($((end-start))s)"

# echo "****Converting witness to json****"
# start=`date +%s`
# npx snarkjs wej "$OUTPUT_DIR"/witness.wtns "$OUTPUT_DIR"/witness.json
# end=`date +%s`
# echo "DONE ($((end-start))s)"

# echo "****GENERATING ZKEY 0****"
# start=`date +%s`
# npx --trace-gc --trace-gc-ignore-scavenger --max-old-space-size=2048000 --initial-old-space-size=2048000 --no-global-gc-scheduling --no-incremental-marking --max-semi-space-size=1024 --initial-heap-size=2048000 --expose-gc snarkjs zkey new "$BUILD_DIR"/"$CIRCUIT_NAME".r1cs "$PHASE1" "$OUTPUT_DIR"/"$CIRCUIT_NAME".zkey -v

# end=`date +%s`
# echo "DONE ($((end-start))s)"

# echo "****CONTRIBUTE TO PHASE 2 CEREMONY****"
# start=`date +%s`
# npx snarkjs zkey contribute -verbose "$OUTPUT_DIR"/"$CIRCUIT_NAME"_0.zkey "$OUTPUT_DIR"/"$CIRCUIT_NAME".zkey -n="First phase2 contribution" -e="some random text for entropy"
# end=`date +%s`
# echo "DONE ($((end-start))s)"

# echo "****VERIFYING FINAL ZKEY****"
# start=`date +%s`
# npx --trace-gc --trace-gc-ignore-scavenger --max-old-space-size=2048000 --initial-old-space-size=2048000 --no-global-gc-scheduling --no-incremental-marking --max-semi-space-size=1024 --initial-heap-size=2048000 --expose-gc $SNARKJS_PATH zkey verify -verbose "$BUILD_DIR"/"$CIRCUIT_NAME".r1cs "$PHASE1" "$OUTPUT_DIR"/"$CIRCUIT_NAME".zkey
# end=`date +%s`
# echo "DONE ($((end-start))s)"

echo "****EXPORTING VKEY****"
start=`date +%s`
npx snarkjs zkey export verificationkey "$OUTPUT_DIR"/"$CIRCUIT_NAME".zkey "$OUTPUT_DIR"/"$CIRCUIT_NAME"_vkey.json -v
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****GENERATING PROOF FOR SAMPLE INPUT****"
start=`date +%s`
$RAPIDSNARK_PATH "$OUTPUT_DIR"/"$CIRCUIT_NAME".zkey "$OUTPUT_DIR"/witness.wtns "$OUTPUT_DIR"/"$CIRCUIT_NAME"_vkey.json "$OUTPUT_DIR"/"$CIRCUIT_NAME"_public.json
end=`date +%s`
echo "DONE ($((end-start))s)"

echo "****VERIFYING PROOF FOR SAMPLE INPUT****"
start=`date +%s`
npx snarkjs groth16 verify "$OUTPUT_DIR"/"$CIRCUIT_NAME"_vkey.json "$OUTPUT_DIR"/"$CIRCUIT_NAME"_public.json "$OUTPUT_DIR"/"$CIRCUIT_NAME"_proof.json -v
end=`date +%s`
echo "DONE ($((end-start))s)"