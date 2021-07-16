#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
ar -crs *.o
ranlib liball.a
