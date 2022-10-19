BINAIRE = prog

OBJETS = compil/mainPointeur.o

CFLAGS = -g -Wall -ansi -pedantic -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/mainPointeur.o: src/mainPointeur.c 
	$(CC) -o compil/mainPointeur.o -c src/mainPointeur.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog