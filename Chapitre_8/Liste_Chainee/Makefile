BINAIRE = prog

OBJETS = compil/liste_chainee.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/liste_chainee.o: src/liste_chainee.c 
	$(CC) -o compil/liste_chainee.o -c src/liste_chainee.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog