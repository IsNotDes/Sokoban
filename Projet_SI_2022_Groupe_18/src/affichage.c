#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "affichage.h"
#include "doit.h"
#include "io.h"

void affiche_tableau(int* nb_lignes, int* nb_colonnes, char** tab) { // Fonction affichant le tableau du niveau.
    clear();
    for (int x = 0; x < (*nb_lignes); x++) { // On parcourt toutes les lignes du tableau.
        for (int y = 0; y < (*nb_colonnes); y++) { // On parcourt toutes les colonnes du tableau.
            printf("%c", tab[x][y]); // On affiche chaque caractère au niveau de chaque ligne et colonne.
        }
        printf("\n"); // On effectue un retour à la ligne une fois qu'on a parcouru toutes les colonnes pour une ligne.
    }
}

int initialisation_tableau_lignes(int numero_map) { // Fonction calculant le nombre de lignes nécessaires pour afficher le tableau.
    FILE * pointeur; // On définit notre pointeur vers FILE.
    pointeur = fopen("levels.lvl", "r"); // On fait pointer notre pointeur vers l'ouverture en mode lecture du fichier levels.lvl.
    
    int caractere; 
    int nb_lignes = 0; 
    int i; 

    caractere = fgetc(pointeur); 
    caractere = fgetc(pointeur); 
    for(i = 1; i < numero_map; i++){ 
        while(caractere != ';') 
            caractere = fgetc(pointeur); 
        caractere = fgetc(pointeur);
    }

    while(caractere != '\n')
        caractere = fgetc(pointeur);
    caractere = fgetc(pointeur);
    
    while(caractere != ';'){
        while(caractere != '\n')
            caractere = fgetc(pointeur);      
        nb_lignes++;
        caractere = fgetc(pointeur);
    }
    return nb_lignes;
}

int initialisation_tableau_colonnes(int numero_map) { // Fonction calculant le nombre de colonnes nécessaires pour afficher le tableau.
    FILE * pointeur; // On définit notre pointeur vers FILE.
    pointeur = fopen("levels.lvl", "r"); // On fait pointer notre pointeur vers l'ouverture en mode lecture du fichier levels.lvl.
    
    int caractere;
    int i = 1;
    int nb_colonnes = 0;
    int indice_colonne = 0;

    caractere = fgetc(pointeur);
    caractere = fgetc(pointeur);
    for(i = 1; i < numero_map; i++){
        while(caractere != ';')
            caractere = fgetc(pointeur);
        caractere = fgetc(pointeur);
    }

    while(caractere != ';'){
        while(caractere != '\n'){
            if(caractere == '#')
                indice_colonne = i;
            caractere = fgetc(pointeur);         
            i++;   
        }

        if(indice_colonne > nb_colonnes)
            nb_colonnes = indice_colonne;

        i = 1;
        caractere = fgetc(pointeur);
    }
    return nb_colonnes;
}

char** creation_tableau(int numero_map, int* nb_lignes, int* nb_colonnes) { // Créé le tableau avec les deux fonctions initialisation().
    
    *nb_lignes = initialisation_tableau_lignes(numero_map);
    *nb_colonnes = initialisation_tableau_colonnes(numero_map);

    char** tab = (char**) malloc((*nb_lignes)*sizeof(char*));  
    for (int i = 0; i < (*nb_lignes); i++) {
        tab[i] = (char*) malloc((*nb_colonnes)*sizeof(char)); 
    }

    int l = 0;
    int col = 0;
    int j;

    FILE * pointeur;
    pointeur = fopen("levels.lvl", "r");
    
    int caractere;

    caractere = fgetc(pointeur);
    caractere = fgetc(pointeur);
    for(j = 1; j < numero_map; j++){
        while(caractere != ';')
            caractere = fgetc(pointeur);
        caractere = fgetc(pointeur);
    }
    
    while(caractere != '\n')
        caractere = fgetc(pointeur);
    caractere = fgetc(pointeur);

    for(l = 0; l < (*nb_lignes); l++){
        for(col = 0; col < (*nb_colonnes); col++){
            if(caractere == '\n'){
                while(col != (*nb_colonnes)){
                    tab[l][col] = ' ';
                    col++;
                }
            }
            else{
                tab[l][col] = caractere;
                caractere = fgetc(pointeur);
            }
        }
        caractere = fgetc(pointeur);
    }
    return tab;      
}