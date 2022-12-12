#!/bin/bash
wget -P /tmp https://github.com/yoyogold-a11/holbertonschool-low_level_programming/blob/main/0x18-dynamic_libraries/numbers.so
export LD_PRELOAD=/tmp/numbers.so
