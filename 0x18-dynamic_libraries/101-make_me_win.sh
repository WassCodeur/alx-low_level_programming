#!/bin/bash
gcc -shared -o librandom.so random.o
export LD_PRELOAD=$(pwd)/librandom.so

