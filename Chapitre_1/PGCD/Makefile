BINAIRE = prog

OBJETS = compil/pgcd.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/pgcd.o: src/pgcd.c
	$(CC) -o compil/pgcd.o -c src/pgcd.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog