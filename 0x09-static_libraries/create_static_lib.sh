#!/bin/bash
gcc -c *.c
ar -rc libmy.al *.o
ranlib liball.a
