#!/bin/bash
wget -P /tmp https://github.com/ictee7/alx-low_level_programming/raw/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/tmp/win.so
