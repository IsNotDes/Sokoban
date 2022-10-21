CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog1: compil/appreciation.o
	$(CC) -o prog1 compil/appreciation.o $(CFLAGS)

prog2: compil/appreciation_2.o
	$(CC) -o prog2 compil/appreciation_2.o $(CFLAGS)

prog3: compil/appreciation_3.o
	$(CC) -o prog3 compil/appreciation_3.o $(CFLAGS)

compil/appreciation.o: src/appreciation.c
	$(CC) -o compil/appreciation.o -c src/appreciation.c $(CFLAGS)

compil/appreciation_2.o: src/appreciation_2.c
	$(CC) -o compil/appreciation_2.o -c src/appreciation_2.c $(CFLAGS)

compil/appreciation_3.o: src/appreciation_3.c
	$(CC) -o compil/appreciation_3.o -c src/appreciation_3.c $(CFLAGS)

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