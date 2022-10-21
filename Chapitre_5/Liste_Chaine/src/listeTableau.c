#include "listeTableau.h"

/* int elementLibre(liste l) {
    
}
 */

/* void creerListeVide(liste l) {
    element* Base = l;
    element* e;
    e -> suivant = NULL;
} */

void insererElement(int x, liste l) {
    element* Base = l;
    element* e;
    while ((Base -> suivant) != NULL) {
        Base = Base -> suivant;
    }
    e = malloc(sizeof(element)/sizeof(char));
    e -> suivant = NULL;
    e -> valeur = x;
    Base -> suivant = e;
}

void supprimerElement(int x, liste l) {
    int index = 0;    
    element* Prev = l;
    element* Next = Prev -> suivant;
    while (Next -> suivant != NULL && index < x) {
        index++;
        Prev = Next;
        Next = Next -> suivant;
    }
    if (index == x) {
        Prev -> suivant = Next -> suivant;
        free(Next);
    }
}

void afficherListe(liste l) {
    element* e = l;
    while (e -> suivant != NULL) {
        e = e -> suivant;
        printf("%d", e -> valeur);
    }
    printf("\n");
}

void freeListe(element* l) {
    element* Suivant = l;
    element* Actuel = l;
    while (Actuel != NULL) {
        Suivant = Actuel -> suivant;
        free(Actuel);
        Actuel = Suivant;
    }
}