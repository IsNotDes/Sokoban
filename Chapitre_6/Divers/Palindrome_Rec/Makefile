BINAIRE = prog

OBJETS = compil/palindrome_rec.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/palindrome_rec.o: src/palindrome_rec.c 
	$(CC) -o compil/palindrome_rec.o -c src/palindrome_rec.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog