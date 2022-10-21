#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int Annee;
    printf("Donnez votre année.\n");
    scanf("%d", &Annee);
    if (Annee%4 == 0) {
        if (Annee%100 == 0) {
            if (Annee%400 == 0) {
                printf("Cette année est bissextile.\n");
                return 0;
            }
            printf("Cette année n'est pas bissextile.\n");
            return 0;
        }
        printf("Cette année est bissextile.\n");
        return 0;
    }
    else {
        printf("Tu n'as pas rentré une année valide.\n");
    }
    return 0;
}

/*
Les tests unitaires à réaliser pour cette fonction pourront être de la forme (liste non-exhaustive) :
    2000 : Bissextile
    1900 : Bissextile
    -12 : Non-Valide
    0 : Bissextile
    399 : Non Bissextile
    250 : Non Bissextile
    3 : Non Bissextile
    a : Non-Valide
    @ : Non-Valide
*/