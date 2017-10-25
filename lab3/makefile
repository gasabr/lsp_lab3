FLAGS= -std=c99 -ansi -pedantic-errors -Wall -Werror

all: main

main: main.o prime_check.o scalar_mult.o
	gcc main.o prime_check.o scalar_mult.o -o main

main.o: main.c
	gcc -c $(FLAGS) main.c -o main.o

prime_check.o: prime_check.c
	gcc -c $(FLAGS) prime_check.c -o prime_check.o

scalar_mult.o: scalar_mult.c
	gcc -c $(FLAGS) scalar_mult.c -o scalar_mult.o

clean:
	rm -f main.o
	rm -f main
	rm -f scalar_mult.o
	rm -f prime_check.o
