#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
LD_LIBRARY_PATH=0x18-dynamic_libraries
