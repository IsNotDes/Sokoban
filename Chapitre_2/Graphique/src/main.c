#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"
#include "dessine.h"

int main() {
    int taille, largeur, hauteur;
    printf("Taille Largeur Hauteur: \n");
    scanf("%d %d %d", &taille, &largeur, &hauteur);
    gr_inits_w(500, 500, "MOSAIQUE");
    set_black();
    dessineMosaiqueAvecSouris(taille, largeur, hauteur);
    cliquer();
    return 0;
}