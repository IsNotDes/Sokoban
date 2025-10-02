#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "free_memory.h"
#include "game_loop.h"
#include "move.h"
#include "io.h"
#include "doit.h"
#include "player_position.h"
#include "affichage.h"
#include "level_end.h"

void game_loop(int* nb_lignes, int* nb_colonnes) { // Fonction de boucle du jeu, permettant le fonctionnement général de ce dernier.
    bool quitter = false; // On définit un booléen "quitter" à la valeur Faux.
    int x; // On définit un entier x, correspondant à la ligne sur laquelle on se trouvera.
    int y; // On définit un entier y, correpondant à la colonne sur laquelle on se trouvera.
    int numero_map; // On définit un entier "numero_map", correspondant à notre numéro de niveau.
    char** tab; // On définit un tableau "tab" de pointeur de pointeur pointant vers char.
    unsigned int compteur_mouvements = 0;
    unsigned int compteur_poussees = 0;
    printf("Quel niveau désirez-vous ?\n"); // On demande à l'utilisateur le niveau auquel il souhaite jouer.
    scanf("%d", &numero_map); // On stocke cette valeur.
    configure_terminal(); // Appel de configure_terminal() afin de notamment empêcher les entrées claviers dans le terminal.
    while (!quitter && numero_map < 89) { // Tant qu'on ne veut pas quitter ou que le niveau ne dépasse pas 88...
        compteur_mouvements = 0;
        compteur_poussees = 0;
        tab = creation_tableau(numero_map, nb_lignes, nb_colonnes); // On assigne à tab le résultat de la fonction creation_tableau().
        affiche_tableau(nb_lignes, nb_colonnes, tab); // On affiche le tableau avec la fonction affiche_tableau().
        while (!quitter && !(level_end(nb_lignes, nb_colonnes, tab))) { // Tant que le niveau n'est pas fini et qu'on ne quitte pas...
            x = trouver_position_x(numero_map, tab); 
            y = trouver_position_y(numero_map, tab); 
            switch (lit_clavier()) { // On définit des cas différents en fonction de la valeur retournée par la fonction lit_clavier().
                case 10: // Dans le cas où elle retourne la valeur 10 correspondant à la touche Entrée...
                    quitter = true; 
                    clear();
                    break; 
                case 127: // Dans le cas où elle retourne la valeur 127 correspondant à la touche BackSpace...
                    clear(); // Appel de la fonction clear() pour laisser de l'espace sur le terminal.
                    free_memory(nb_lignes, tab);
                    compteur_mouvements = 0;
                    compteur_poussees = 0;
                    tab = creation_tableau(numero_map, nb_lignes, nb_colonnes); // On recrée à nouveau le tableau du niveau de base.
                    break; 
                case 1: // Dans le cas où elle retourne la valeur 1 correspondant à la touche Haut...
                    move(1, x, y, nb_lignes, nb_colonnes, tab, &compteur_mouvements, &compteur_poussees); // Appel de la fonction move() avec la direction Haut (1).
                    break; 
                case 2: // Dans le cas où elle retourne la valeur 2 correspondant à la touche Bas...
                    move(2, x, y, nb_lignes, nb_colonnes, tab, &compteur_mouvements, &compteur_poussees); // Appel de la fonction move() avec la direction Bas (2).
                    break; 
                case 3: // Dans le cas où elle retourne la valeur 3 correspondant à la touche Droite...
                    move(3, x, y, nb_lignes, nb_colonnes, tab, &compteur_mouvements, &compteur_poussees); // Appel de la fonction move() avec la direction Droite (3).
                    break; 
                case 4: // Dans le cas où elle retourne la valeur 4 correspondant à la touche Gauche...
                    move(4, x, y, nb_lignes, nb_colonnes, tab, &compteur_mouvements, &compteur_poussees); // Appel de la fonction move() avec la direction Gauche (4).
                    break; 
                default: // Cas par défaut, ici vide.
                    break; 
            }
            affiche_tableau(nb_lignes, nb_colonnes, tab); // On affiche le tableau avec la fonction affiche_tableau().
            printf("Nombre de mouvements : %d \n", compteur_mouvements);
            printf("Nombre de poussées : %d \n", compteur_poussees);
        }
        numero_map++; // On incrémente le niveau.
        free_memory(nb_lignes, tab);
    }
    reset_terminal(); // Appel de la fonction reset_terminal() pour remettre les entrés clavier dans le terminal.
}