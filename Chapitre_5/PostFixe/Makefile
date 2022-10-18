BINAIRE = prog

OBJETS = compil/main.o compil/pile.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99 

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/main.o: src/main.c src/pile.h
	$(CC) -o compil/main.o -c src/main.c $(CFLAGS)

compil/pile.o: src/pile.c src/pile.h
	$(CC) -o compil/pile.o -c src/pile.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog