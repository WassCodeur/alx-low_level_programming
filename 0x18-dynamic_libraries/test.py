# test.py

import ctypes

# Load the dynamic library
add_lib = ctypes.CDLL('./libadd.so')

# Call the "add" function from the library
result = add_lib.add(2, 3)

print(result)  # Output: 5

