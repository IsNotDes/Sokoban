#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "game_loop.h"
#include "io.h"

int main() { // Fonction main.
    int nb_lignes = 0; // Initialisation du nombre de lignes.
    int nb_colonnes = 0; // Initialisation du nombre de colonnes.
    game_loop(&nb_lignes, &nb_colonnes); // Appel de la fonction game_loop pour lancer la boucle du jeu.
    return 0; // Fin du programme.
}