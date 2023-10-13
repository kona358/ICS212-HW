program: 5Functions.o getdouble.o
	gcc 5Functions.o getdouble.o  -o program -lm

5Functions.o: 5Functions.c getdouble.h
	gcc -c 5Functions.c

getdouble.o: getdouble.c getdouble.h
	gcc -c getdouble.c