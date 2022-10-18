#include <stdio.h>
#include <stdlib.h>
#include "graphlib.h"

void ligne(int x, int y, int x2, int y2) {
    line(x, y, x+x2, y+y2);
}

void dessineCarre(int x, int y, int taille) {
    ligne(x, y, -taille / 2, -taille / 2); 
    ligne(x, y - taille, taille / 2, taille / 2); 
    ligne(x, y, taille / 2, -taille / 2); 
    ligne(x, y - taille, -taille / 2, taille / 2); 
}

void dessineCarreDiagonale(int x, int y, int taille) {
    dessineCarre(x, y, taille);
    ligne(x - taille / 2, y - taille / 2, taille, 0); 
    ligne(x, y, 0, -taille);                          
}

void dessineMosaique(int taille, int x, int y, int largeur, int hauteur) {
    int i, j;
    for (i = 0; i <= largeur; i++) {
        for (j = 0; j <= hauteur; j++) {
            if ((j + i) % 2 == 0) {
                set_blue();
            }
            else {
                set_black();
            }
            dessineCarre(x + taille / 2 + i * taille, y - j * taille, taille);
        }
    }
}

void dessineMosaiqueAvecSouris(int taille, int largeur, int hauteur) {
    int x, y;
    cliquer_xy(&x, &y);
    dessineMosaique(taille, x, y, largeur, hauteur);
}