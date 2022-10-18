BINAIRE = prog

OBJETS = compil/matrices.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/matrices.o: src/matrices.c 
	$(CC) -o compil/matrices.o -c src/matrices.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog