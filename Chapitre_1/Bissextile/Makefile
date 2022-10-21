BINAIRE = prog

OBJETS = compil/Bissextile.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/Bissextile.o: src/Bissextile.c
	$(CC) -o compil/Bissextile.o -c src/Bissextile.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog