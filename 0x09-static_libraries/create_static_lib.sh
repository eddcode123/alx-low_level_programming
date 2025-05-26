#!/usr/bin/bash
gcc -c *.c -o lib.o
ar rc liball.a lib.o
