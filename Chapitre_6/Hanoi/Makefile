BINAIRE = prog

OBJETS = compil/hanoi.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/hanoi.o: src/hanoi.c 
	$(CC) -o compil/hanoi.o -c src/hanoi.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog