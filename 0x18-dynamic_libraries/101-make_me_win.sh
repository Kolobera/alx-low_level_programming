#!/bin/bash
wget -P .. https://github.com/Kolobera/alx-low_level_programming/tree/master/0x18-dynamic_libraries/libinjection.so
export LD_PRELOAD="$PWD/../libinjection.so"
