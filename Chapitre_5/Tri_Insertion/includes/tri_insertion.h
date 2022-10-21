#include <stdio.h>

#define TAILLEMAX 100

typedef struct {
	int valeur;
	int suivant;
} element;

typedef element* liste;