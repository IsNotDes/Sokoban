BINAIRE = prog

OBJETS = compil/main.o compil/listeTableau.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/main.o: src/main.c includes/listeTableau.h
	$(CC) -o compil/main.o -c src/main.c $(CFLAGS)

compil/listeTableau.o: src/listeTableau.c includes/listeTableau.h
	$(CC) -o compil/listeTableau.o -c src/listeTableau.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog