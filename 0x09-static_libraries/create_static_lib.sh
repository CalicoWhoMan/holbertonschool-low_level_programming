#!/bin/bash
xargs -i gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fno-pie *.c
ar -cr liball.a *.o
