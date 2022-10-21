BINAIRE = prog

OBJETS = compil/factorielle.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/factorielle.o: src/factorielle.c
	$(CC) -o compil/factorielle.o -c src/factorielle.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog