#include <stdio.h>
#include <stdlib.h>

int lireDonnees(char nomFichier[], int T[]) {
    FILE * fic;
    int tmp_value = 0;
    int tmp_scan = 0;
    int i = 0;
    fic = fopen("monFichier.txt", "r");
    while (tmp_scan != EOF) {
        tmp_scan = fscanf(fic, "%d", &tmp_value);
        if (tmp_scan == 1) {
            T[i] = tmp_value;
            i++;
        }
    }
    fclose(fic);
    return i;
}