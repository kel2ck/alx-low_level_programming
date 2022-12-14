#!/bin/bash
wget -q -O /tmp/winwin.so https://github.com/kel2ck/alx-low_level_programming/raw/master/0x18-dynamic_libraries/all_winwin.so
export LD_PRELOAD=/tmp/all_winwin.so
