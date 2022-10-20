#include <stdio.h>
#include <stdlib.h>

typedef struct element {
    int valeur;
    struct element* suivant;
} Element;

void afficherListe(Element* liste);
void insertListe(int n, Element* liste);
void deleteListe(int pos, Element* liste);
void freeListe(Element* liste);