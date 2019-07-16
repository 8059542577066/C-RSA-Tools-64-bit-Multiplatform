#!/bin/bash
gcc rsa.c -O3 -ansi -Wall -c
gcc encoding.c -O3 -ansi -Wall -c
gcc rsa.o encoding.o main.c -O3 -ansi -Wall -o genrsa