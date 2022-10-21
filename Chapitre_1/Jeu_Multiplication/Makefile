BINAIRE = prog

OBJETS = compil/multiplication.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/multiplication.o: src/multiplication.c
	$(CC) -o compil/multiplication.o -c src/multiplication.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog