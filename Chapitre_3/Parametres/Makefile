BINAIRE = prog

OBJETS = compil/parametres.o

CFLAGS = -Wall -ansi -pedantic -lm

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/parametres.o: src/parametres.c 
	$(CC) -o compil/parametres.o -c src/parametres.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog