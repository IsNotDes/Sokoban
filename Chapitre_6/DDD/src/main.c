#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../includes/pile.h"

int calcul_post_fixe(const char *chaine) {
    pileInt p1 = creerPile();
    int size = strlen(chaine);
    char c;
    int operande_1;
    int operande_2;
    for (int i = 0; i < size; i++) {
        c = chaine[i];
        if (c >= '0' && c <= '9') {
            empiler(p1, c - '0');
        }
        else {
            switch (c) {
                case '+' :
                    operande_1 = depiler(p1);
                    operande_2 = depiler(p1);
                    empiler(p1, operande_1 + operande_2);
                    break;
                case '-' :
                    operande_1 = depiler(p1);
                    operande_2 = depiler(p1);
                    empiler(p1, operande_2 - operande_1);
                    break;
                case '*' :
                    operande_1 = depiler(p1);
                    operande_2 = depiler(p1);
                    empiler(p1, operande_1 * operande_2);
                    break;
                case '/' :
                    operande_1 = depiler(p1);
                    operande_2 = depiler(p1);
                    empiler(p1, operande_2 / operande_1);
                    break;
                case ' ' : 
                    break;
                default :
                    fprintf(stderr, "ERROR FORMAT EXPRESSION");
                    exit(1);
            }
        }
    }
    return depiler(p1);
}

int main() {
    char* expression = "4 2 + 5 * 6 7 - /";
    printf("Le resultat de \"4 2 + 5 * 6 7 -/\" est : %d \n", calcul_post_fixe(expression));
    return 0;
}