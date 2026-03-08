#!/bin/bash
cd ~/GhosTune/backend/freediag || exit
rm -rf build
mkdir build
cd build || exit
cmake .. -DCMAKE_C_FLAGS="-Wall -Wextra -std=gnu99 -Wno-strict-prototypes -Wno-unused-const-variable"
make -j$(nproc)