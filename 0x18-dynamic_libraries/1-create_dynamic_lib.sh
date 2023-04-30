#!/bin/bash

# Compile source file to object file
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o libdynamic.so *.o
rm *.o
