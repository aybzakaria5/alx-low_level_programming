#!/bin/bash
wget -q --output-document=$PWD/librandom.so https://github.com/aybzakaria5/alx-low_level_programming/raw/main/0x18-dynamic_libraries/librandom.so
export LD_PRELOAD=$PWD/librandom.so
