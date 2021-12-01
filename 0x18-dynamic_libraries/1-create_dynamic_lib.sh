#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
expert LD_LIBRARY_PATH=.
