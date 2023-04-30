#!/bin/bash
gcc -Wall -Werror -shared -fPIC  -o librandom.so ramdom.c
export LD_PRELOAD=./librandom.so
