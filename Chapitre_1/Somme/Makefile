CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog1: compil/Somme.o
	$(CC) -o prog1 compil/Somme.o $(CFLAGS)

prog2: compil/Somme_do.o
	$(CC) -o prog2 compil/Somme_do.o $(CFLAGS)

prog3: compil/Somme_while.o
	$(CC) -o prog3 compil/Somme_while.o $(CFLAGS)

compil/Somme.o: src/Somme.c
	$(CC) -o compil/Somme.o -c src/Somme.c $(CFLAGS)

compil/Somme_do.o: src/Somme_do.c
	$(CC) -o compil/Somme_do.o -c src/Somme_do.c $(CFLAGS)

compil/Somme_while.o: src/Somme_while.c
	$(CC) -o compil/Somme_while.o -c src/Somme_while.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog1
	make prog2
	make prog3

run1:
	rm -rf compil/*.o
	make prog1
	clear
	./prog1

run2:
	rm -rf compil/*.o
	make prog2
	clear
	./prog2

run3:
	rm -rf compil/*.o
	make prog3
	clear
	./prog3