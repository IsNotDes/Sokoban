#include <stdio.h>
#include <stdlib.h>
#include "../includes/tri_insertion.h"

void triInsertion(liste l) {
    element* Prev = l;
    element* Next = Prev -> suivant;
    for (int i = 1; i < 8; i++) {
        printf("%d", Prev);
        if (Next -> valeur < Prev -> valeur) {
            int tmp = Next -> valeur;
            Next -> valeur = Prev -> valeur;
            Prev -> valeur = tmp;
        }
    }
    printf("%d", Prev);
}

int main() {
    int tab[8] = {6, 5, 3, 1, 8, 7, 2, 4};
    element* e = malloc(sizeof(element)/sizeof(char));
    e -> suivant = NULL;
    e -> valeur = 0;
    for(int i = 0; i < 9; i++) {
        e -> suivant = tab[i];
    }
    triInsertion(e);
    return 0;
}