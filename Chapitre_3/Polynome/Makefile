BINAIRE = prog

OBJETS = compil/polynome.o

CFLAGS = -Wall -ansi -pedantic -lm

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/polynome.o: src/polynome.c 
	$(CC) -o compil/polynome.o -c src/polynome.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog