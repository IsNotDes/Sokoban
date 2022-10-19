BINAIRE = prog

OBJETS = compil/pgcd_rec.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/pgcd_rec.o: src/pgcd_rec.c 
	$(CC) -o compil/pgcd_rec.o -c src/pgcd_rec.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog