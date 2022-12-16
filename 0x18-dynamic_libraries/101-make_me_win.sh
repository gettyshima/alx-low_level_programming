#!/bin/bash
wget -P . https://github.com/gettyshima/alx-low_level_programming/blob/830fee829d20d93fdc8237347279594a8424c691/0x18-dynamic_libraries/testlib.so 
export LD_PRELOAD=/$PWD/testlib.so
