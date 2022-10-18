BINAIRE = prog

OBJETS = compil/fichier.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/fichier.o: src/fichier.c 
	$(CC) -o compil/fichier.o -c src/fichier.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog