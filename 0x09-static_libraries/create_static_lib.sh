#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fno-pie *.c
ar -crs *.o
