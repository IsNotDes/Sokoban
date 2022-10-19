BINAIRE = prog

OBJETS = compil/fibo_recursif.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/fibo_recursif.o: src/fibo_recursif.c 
	$(CC) -o compil/fibo_recursif.o -c src/fibo_recursif.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog