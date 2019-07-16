@echo off
rem gcc 5.1.0 (tdm64) win10
gcc rsa.c -O3 -ansi -Wall -c
pause
gcc encoding.c -O3 -ansi -Wall -c
pause
gcc rsa.o encoding.o main.c -O3 -ansi -Wall -o genrsa.exe
pause