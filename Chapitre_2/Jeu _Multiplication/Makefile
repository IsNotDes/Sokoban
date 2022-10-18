all: compil/multiplication_jeuMulti.o compil/multiplication_jeuMulti_points.o compil/multiplication_main.o
	gcc -o all compil/multiplication_jeuMulti.o compil/multiplication_jeuMulti_points.o compil/multiplication_main.o

compil/multiplication_jeuMulti.o: src/multiplication_jeuMulti.c src/multiplication_jeuMulti.h
	gcc -o compil/multiplication_jeuMulti.o -c src/multiplication_jeuMulti.c -Wall -ansi -pedantic
	
compil/multiplication_jeuMulti_points.o: src/multiplication_jeuMulti_points.c src/multiplication_jeuMulti_points.h
	gcc -o compil/multiplication_jeuMulti_points.o -c src/multiplication_jeuMulti_points.c -Wall -ansi -pedantic

compil/multiplication_main.o: src/multiplication_main.c
	gcc -c src/multiplication_main.c -o compil/multiplication_main.o -Wall -ansi -pedantic
	
run:
	make all
	clear
	./all
