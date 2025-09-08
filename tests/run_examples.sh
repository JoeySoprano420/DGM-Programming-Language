#!/bin/bash
set -e

echo "[DGM] Building compiler..."
mkdir -p build
cd build
cmake ..
make -j4
cd ..

echo "[DGM] Running examples..."
for f in examples/*.dgm; do
    base=$(basename $f .dgm)
    ./build/dgmc $f -o $base --run
done
