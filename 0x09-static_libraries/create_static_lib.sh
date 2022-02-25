#!/bin/bash
gcc -c *.c
ar rc libamy.a *.o
ranlib libmy.a
