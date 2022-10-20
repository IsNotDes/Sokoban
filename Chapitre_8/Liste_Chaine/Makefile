BINAIRE = prog

OBJETS = compil/liste_chaine.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99 -fsanitize=address

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)	

compil/liste_chaine.o: src/liste_chaine.c includes/liste_chaine.h
	$(CC) -o compil/liste_chaine.o -c src/liste_chaine.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog