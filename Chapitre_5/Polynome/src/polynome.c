#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define NBMAX 100

typedef struct {
    float coeff;
    int degre;
} Terme;

typedef Terme Polynome[NBMAX];

void addPolynomes(Polynome p1, Polynome p2, Polynome res) {
    int index = 0;
    for (int i = 0; i < NBMAX || p1[i].degre > 0; i++) {
        for (int j = 0; j < NBMAX || p2[j].degre > 0; j++) {
            if (p1[i].degre == p2[j].degre) {
                Terme * tmp = (Terme *) malloc(sizeof(Terme));
                tmp->coeff = p1[i].coeff + p2[j].coeff;
                tmp->degre = p2[j].degre;
                res[index] = *tmp;
                index++;
                i++;
            }
        }
    }
    Terme * tmp = (Terme *) malloc(sizeof(Terme));
    tmp->degre = -1;
    res[index] = *tmp;
}

int main() {
    Polynome poly1 = {{4, 3}, {3, 2}, {1, 1}, {1, -1}};
    Polynome res;
    addPolynomes(poly1, poly1, res);
    for (int i = 0; i < NBMAX && res[i].degre > -2; i++) {
        if (res[i].coeff != 0) {    
            printf("+(%f)x^(%d)", res[i].coeff, res[i].degre);
        }
    }
    printf("\n");
}