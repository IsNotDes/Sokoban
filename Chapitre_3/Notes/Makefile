BINAIRE = prog

OBJETS = compil/notes.o

CFLAGS = -Wall -ansi -pedantic -lm

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/notes.o: src/notes.c 
	$(CC) -o compil/notes.o -c src/notes.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog