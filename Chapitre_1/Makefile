BINAIRE = all

CC = gcc

CFLAGS = -Wall -ansi -pedantic

OBJETS = compil/multiplication_jeuMulti.o compil/multiplication_jeuMulti_points.o compil/multiplication_main.o

all: $(OBJETS)
	$(CC) -o all $(OBJETS)

compil/multiplication_jeuMulti.o: src/multiplication_jeuMulti.c src/multiplication_jeuMulti.h
	$(CC) -o compil/multiplication_jeuMulti.o -c src/multiplication_jeuMulti.c $(CFLAGS)
	
compil/multiplication_jeuMulti_points.o: src/multiplication_jeuMulti_points.c src/multiplication_jeuMulti_points.h
	$(CC) -o compil/multiplication_jeuMulti_points.o -c src/multiplication_jeuMulti_points.c $(CFLAGS)

compil/multiplication_main.o: src/multiplication_main.c
	$(CC) -o compil/multiplication_main.o -c src/multiplication_main.c $(CFLAGS)
	
run:
	make all
	clear
	./all
