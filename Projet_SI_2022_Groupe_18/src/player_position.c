#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "player_position.h"
#include "affichage.h"

int x;
int y;
int nombre_lignes;
int nombre_colonnes;

int trouver_position_x(int numero_map, char** tab) { // Trouve la ligne sur laquelle est le personnage.
    nombre_lignes = initialisation_tableau_lignes(numero_map);
    nombre_colonnes = initialisation_tableau_colonnes(numero_map);
    for (int i = 0; i < (nombre_lignes); i++) { 
        for (int j = 0; j < (nombre_colonnes); j++) {
            if (tab[i][j] == '@' || tab[i][j] == 'a') {
                x = i;
            }
        }
    }
    return x;
}

int trouver_position_y(int numero_map, char** tab) { // Trouve la colonne sur laquelle est le personnage.
    nombre_lignes = initialisation_tableau_lignes(numero_map);
    nombre_colonnes = initialisation_tableau_colonnes(numero_map);
    for (int i = 0; i < (nombre_lignes); i++) { 
        for (int j = 0; j < (nombre_colonnes); j++) {
            if (tab[i][j] == '@' || tab[i][j] == 'a') {
                y = j;
            }
        }
    }
    return y;
}
