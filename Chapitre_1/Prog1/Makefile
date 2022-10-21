BINAIRE = prog

OBJETS = compil/prog1.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/prog1.o: src/prog1.c
	$(CC) -o compil/prog1.o -c src/prog1.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog