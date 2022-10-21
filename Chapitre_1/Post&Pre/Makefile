BINAIRE = prog

OBJETS = compil/Post_Pre.o

CFLAGS = -g -Wall -lm -std=c99

CC = gcc

prog: $(OBJETS)
	$(CC) -o $(BINAIRE) $(OBJETS) $(CFLAGS)

compil/Post_Pre.o: src/Post_Pre.c
	$(CC) -o compil/Post_Pre.o -c src/Post_Pre.c $(CFLAGS)

make:
	rm -rf compil/*.o
	make prog

run:
	rm -rf compil/*.o
	make prog
	clear
	./prog