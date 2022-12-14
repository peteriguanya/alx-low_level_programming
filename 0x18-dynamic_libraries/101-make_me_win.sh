#!/bin/bash
wget -P .. https://raw.peteriguanyacontent.com/peteriguanya/alx-low_level_programming/master/0x18-dynamic_libraries/libdynamic.so
export LD_PRELOAD="$PWD/../libdynamic.so"
