BINAIRE = prog

OBJETS = compil/fraction.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/fraction.o: src/fraction.c 
	$(CC) -o compil/fraction.o -c src/fraction.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog