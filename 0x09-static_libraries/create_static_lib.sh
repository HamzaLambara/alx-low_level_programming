#!/bin/bash

# compile all .c files in the current directory into object files
gcc -c *.c

# create the static library from the object files
ar rc liball.a *.o

# clean up the object files
rm *.o

