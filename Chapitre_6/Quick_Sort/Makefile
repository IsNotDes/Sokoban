BINAIRE = prog

OBJETS = compil/quick_sort.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/quick_sort.o: src/quick_sort.c 
	$(CC) -o compil/quick_sort.o -c src/quick_sort.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog