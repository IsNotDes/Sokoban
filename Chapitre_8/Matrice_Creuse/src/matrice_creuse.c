#include <stdio.h>
#include <stdlib.h>
#include "../includes/matrice_creuse.h"

int fonction() {
    
}

void afficherListe(Element* liste) {
    Element* e = liste;
    while (e -> suivant != NULL) {
        e = e -> suivant;
        printf("%d", e -> valeur);
    }
    printf("\n");
}

void insertListe(int n, Element* liste) {
    Element* Base = liste;
    Element* e;
    while ((Base -> suivant) != NULL) {
        Base = Base -> suivant;
    }
    e = malloc(sizeof(Element)/sizeof(char));
    e -> suivant = NULL;
    e -> valeur = n;
    Base -> suivant = e;
}

void deleteListe(int pos, Element* liste) {
    int index = 0;    
    Element* Prev = liste;
    Element* Next = Prev -> suivant;
    while (Next -> suivant != NULL && index < pos) {
        index++;
        Prev = Next;
        Next = Next -> suivant;
    }
    if (index == pos) {
        Prev -> suivant = Next -> suivant;
        free(Next);
    }
}

void freeListe(Element* liste) {
    Element* Suivant = liste;
    Element* Actuel = liste;
    while (Actuel != NULL) {
        Suivant = Actuel -> suivant;
        free(Actuel);
        Actuel = Suivant;
    }
}

int main() {
    Element* e = malloc(sizeof(Element)/sizeof(char));
    e -> suivant = NULL;
    e -> valeur = 0;
    afficherListe(e);
    for(int i = 0; i < 10; i++) {
        insertListe(i,e);
        afficherListe(e);
    }
    for (int i = 9; i > -1; i--) {
        deleteListe(i,e);
        afficherListe(e);
    }
    freeListe(e);
    return 0;
}