BINAIRE = prog

OBJETS = compil/param_adresse.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/param_adresse.o: src/param_adresse.c 
	$(CC) -o compil/param_adresse.o -c src/param_adresse.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog