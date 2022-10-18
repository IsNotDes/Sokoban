#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "level_end.h"

bool level_end(int* nb_lignes, int* nb_colonnes, char** tab) { // Fonction vérifiant si le niveau est fini.
    for (int i = 0; i < (*nb_lignes); i++) { // Parcourt toutes les lignes du tableau.
        for (int j = 0; j < (*nb_colonnes); j++) { // Parcourt toutes les colonnes du tableau.
            if (tab[i][j] == 'a' || tab[i][j] == '.') { // S'il y a un personnage sur cible ou une cible...
                return false; // Alors la fonction level_end() retourne la valeur Faux...
            }
        }
    }
    return true; // ..Sinon elle retourne la valeur Vrai.
}