BINAIRE = prog

OBJETS = compil/drapeau.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/drapeau.o: src/drapeau.c 
	$(CC) -o compil/drapeau.o -c src/drapeau.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog