BINAIRE = prog

OBJETS = compil/tri_insertion.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/tri_insertion.o: src/tri_insertion.c 
	$(CC) -o compil/tri_insertion.o -c src/tri_insertion.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog