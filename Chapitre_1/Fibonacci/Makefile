BINAIRE = prog

OBJETS = compil/fibonacci.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/fibonacci.o: src/fibonacci.c
	$(CC) -o compil/fibonacci.o -c src/fibonacci.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog