#include "doit.h"
#include "io.h"

void affiche_tableau(int* nb_lignes, int* nb_colonnes, char** tab);
int initialisation_tableau_lignes(int numero_map);
int initialisation_tableau_colonnes(int numero_map);
char** creation_tableau(int numero_map, int* nb_lignes, int* nb_colonnes);