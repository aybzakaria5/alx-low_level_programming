#!/usr/bin/
wget -P /tmp https://github.com/aybzakaria5/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librandom.so
export LD_PRELOAD="/tmp/librandom.so"
