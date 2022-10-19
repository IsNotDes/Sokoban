#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

int calcul_post_fixe() {
    pileInt p1 = creerPile();
    empiler(p1, '/');
    empiler(p1, '-');
    empiler(p1, 7);
    empiler(p1, 6);
    empiler(p1, '*');
    empiler(p1, 5);
    empiler(p1, '+');
    empiler(p1, 2);
    empiler(p1, 4);
    pileInt p2 = creerPile();
    while (!estPileVide(p1)) {
        int n = depiler(p1);
        int n1 = depiler(p2);
        int n2 = depiler(p2);
        empiler(p1, n);
        empiler(p2, n2);
        empiler(p2, n1);
        switch(n) {
            case('+') :
                empiler(p2, (n1+n2));
                break;
            case('-') :
                empiler(p2, (-n1+n2));
                break;
            case('*') :
                empiler(p2, (n1*n2));
                break;
            case('/') :
                empiler(p2, (n1/n2));
                break;
            default :
                empiler(p2, n1);
                break;
        }
    }
    int res = depiler(p2);
    free(p1);
    free(p2);
    return res;
}

int main() {
    int res = calcul_post_fixe();
    printf("Le résultat de l'opération post-fixe est : %d \n", res);
    return 0;
}