
program: ageCalculator.o getdouble.o
	gcc ageCalculator.o getdouble.o -o program -lm

ageCalculator.o: ageCalculator.c getdouble.h
	gcc -c ageCalculator.c

getdouble.o: getdouble.c getdouble.h
	gcc -c getdouble.c
