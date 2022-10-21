BINAIRE = prog

OBJETS = compil/operateurs_binaires.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/operateurs_binaires.o: src/operateurs_binaires.c
	$(CC) -o compil/operateurs_binaires.o -c src/operateurs_binaires.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog