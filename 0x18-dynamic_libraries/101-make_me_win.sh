#!/bin/bash
gcc -shared  -o librandom.so random.o
export LD_PRELOAD=$(pwd)/librandom.s ./gm 9 8 10 24 75 9
