BINAIRE = prog

OBJETS = compil/matrice_creuse.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99 -fsanitize=address

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)	

compil/matrice_creuse.o: src/matrice_creuse.c includes/matrice_creuse.h
	$(CC) -o compil/matrice_creuse.o -c src/matrice_creuse.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog