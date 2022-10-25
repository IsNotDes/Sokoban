BINAIRE = prog

OBJETS = compil/sierpinsky.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/sierpinsky.o: src/sierpinsky.c 
	$(CC) -o compil/sierpinsky.o -c src/sierpinsky.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog