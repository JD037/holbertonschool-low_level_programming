#!/bin/bash
#creates a static library called liball.a from all .c files
#in current directory.
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar rc liball.a *.o
ranlib liball.a
