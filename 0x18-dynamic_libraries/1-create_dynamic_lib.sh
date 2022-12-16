#!/bin/bash

# Compile source file to object file
gcc -c -fPIC *.c

# Create dynamic library from object file
gcc -shared *.o -o libdynamic.so

# Clean up object file
rm *.o
