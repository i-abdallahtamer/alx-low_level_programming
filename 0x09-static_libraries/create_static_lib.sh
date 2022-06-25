#!/bin/bash
gcc -Wall -pendatic -Werror -Wextra -c *.c
gcc -c *.c
ar -rc libmy.al *.o
ranlib liball.a
