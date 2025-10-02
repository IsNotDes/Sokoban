#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "free_memory.h"

void free_memory(int* nb_lignes, char** tab) {
    for (int i = 0; i < (*nb_lignes); i++) {
        free(tab[i]);
    }
	free(tab);
}