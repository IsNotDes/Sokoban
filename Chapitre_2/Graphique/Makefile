BINAIRE = prog

OBJETS = main.o dessine.o graphlib.o 

CFLAGS = -Wall -ansi -pedantic

GRAPH = -lX11 -L/user/include/X11

CC = gcc

all: $(OBJETS)
	$(CC) $(CFLAGS) -o $(BINAIRE) main.o dessine.o graphlib.o $(GRAPH)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c $(GRAPH)

dessine.o: dessine.c dessine.h graphlib.h
	$(CC) $(CFLAGS) -c dessine.c $(GRAPH)

graphlib.o: graphlib.c graphlib.h
	$(CC) $(CFLAGS) -c graphlib.c $(GRAPH)

make:
	make all
	rm -rf *.o

run:
	make all
	rm -rf *.o
	./prog