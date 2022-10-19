#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element {
    int valeur; /* valeur de l’élément */
    element* suivant; /* adresse du successeur */
};

typedef element* liste ;

void afficherListe(liste *L) {
    element *e = (element*) malloc(sizeof(element));
    while (e -> suivant != NULL) {
        printf(e -> valeur);
        e -> suivant;
    }
}

int main() {
    liste *l = {0, 1, 8, 3};
    printf("Oui", afficherListe(l));
}

/* 

liste L = NULL;
element *e = (element*) malloc(sizeof(element));
e -> valeur = 12;
e -> suivant = NULL;

*/