#!/bin/bash

# Compile source file to object file
gcc -c -Wall -Werror -fPIC *.c
gcc -shared -o liball.so *.o
rm *.o
