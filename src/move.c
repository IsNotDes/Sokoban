#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "move.h"
#include "move_player.h"
#include "move_box.h"
#include "level_end.h"
#include "doit.h"

void move(int direction, int x, int y, int *nb_lignes, int *nb_colonnes, char** tab, unsigned int* compteur_mouvements, unsigned int* compteur_poussees) { // Fonction permettant tout les déplacements.
    switch (direction) {
        case 1 : // Cas de la touche Haut.
            *compteur_poussees += move_box_up(x, y, tab); // Essai de déplacement d'une caisse éventuelle vers le haut.. OU..
            *compteur_mouvements += move_player_up(x, y, tab); // ..Essai de déplacement du personnage vers le haut.
            level_end(nb_lignes, nb_colonnes, tab); // Vérifie si le niveau est terminé après le mouvement.
            clear(); // Laisse de la place pour le prochain affichage du tableau.
            break;
        case 2 : // Cas de la touche Bas.
            *compteur_poussees += move_box_down(x, y, nb_lignes, tab); // Essai de déplacement d'une caisse éventuelle vers le bas.. OU..
            *compteur_mouvements += move_player_down(x, y, nb_lignes, tab); // ..Essai de déplacement du personnage vers le bas.
            level_end(nb_lignes, nb_colonnes, tab); // Vérifie si le niveau est terminé après le mouvement.
            clear(); // Laisse de la place pour le prochain affichage du tableau.
            break;
        case 3 : // Cas de la touche Droite.
            *compteur_poussees += move_box_right(x, y, nb_colonnes, tab); // Essai de déplacement d'une caisse éventuelle vers la droite.. OU..
            *compteur_mouvements += move_player_right(x, y, nb_colonnes, tab); // ..Essai de déplacement du personnage vers la droite.
            level_end(nb_lignes, nb_colonnes, tab); // Vérifie si le niveau est terminé après le mouvement.
            clear(); // Laisse de la place pour le prochain affichage du tableau.
            break; 
        case 4 : // Cas de la touche Gauche.
            *compteur_poussees += move_box_left(x, y, tab); // Essai de déplacement d'une caisse éventuelle vers la gauche.. OU..
            *compteur_mouvements += move_player_left(x, y, tab); // ..Essai de déplacement du personnage vers la gauche.
            level_end(nb_lignes, nb_colonnes, tab); // Vérifie si le niveau est terminé après ce mouvement.
            clear(); // Laisse de la place pour le prochain affichage du tableau.
            break;
    }
}