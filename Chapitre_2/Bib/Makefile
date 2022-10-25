BINAIRE = prog

OBJETS = compil/bib.o

CFLAGS = -g -Wall -ansi -pedantic -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/bib.o: src/bib.c 
	$(CC) -o compil/bib.o -c src/bib.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog