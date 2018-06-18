all: Convert
Convert: conversion.o Binary_func.o Decimal_func.o Hexadecimal_func.o Octal_func.o
	gcc conversion.o Binary_func.o conversion.h Decimal_func.o Hexadecimal_func.o Octal_func.o -o Convert
conversion.o: conversion.c
	gcc -c conversion.c
Binary_func.o: Binary_func.c
	gcc -c Binary_func.c		
Decimal_func.o: Decimal_func.c
	gcc -c Decimal_func.c
Hexadecimal_func.o: Hexadecimal_func.c
	gcc -c Hexadecimal_func.c       
Octal_func.o: Octal_func.c
	gcc -c Octal_func.c
clean:
	rm -rf *o Convert                   
	
