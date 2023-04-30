#!/bin/bash
gcc -Wall -Werror -shared -fPIC  -o librandom.so ramdom.c
export LD_PRELOAD=./librandom.s ./gm 9 8 10 24 75 9
