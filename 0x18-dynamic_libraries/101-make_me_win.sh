#!/bin/bash
wget -P /tmp https://github.com/m453h/alx-low_level_programming/raw/master/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=/tmp/librand.so
