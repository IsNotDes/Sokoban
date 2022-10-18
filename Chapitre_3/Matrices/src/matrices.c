#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int afficheMatrice(int nbLignes, int nbColonnes, int tab[nbLignes][nbColonnes]) {
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

/* Pour l'addition des deux matrices, on attendra ce résultat :
    (1  0  4)     (2 -3 1)     (3 -3  5)
    (-1 2 -5)   + (5  8 2)   = (4 10 -3)

    La seule contrainte pour réaliser une addition de matrices est que les
    deux matrices doivent avoir exactement les mêmes dimensions, dans le même ordre.
    La taille de la matrice résultat sera ainsi exactement la même.
*/

int additionMatrice(int nbLignes, int nbColonnes, int mat[nbLignes][nbColonnes], int mat1[nbLignes][nbColonnes], int mat2[nbLignes][nbColonnes]) {
    for (int i = 0; i < nbLignes; i++) {
        for (int j = 0; j < nbColonnes; j++) {
            mat[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

/* La transposée de la matrice A :

        (1  0  4)               (1 -1)
    A = (-1 2 -5)       t(A) =  (0  2)
                                (4 -5)

La transposée de la matrice aura les dimensions de la matrice originelles mais inversées.
Ainsi i deviendra j, et j deviendra i.

*/

int transposee(int nbLignes, int nbColonnes, int mat_0[nbColonnes][nbLignes], int mat_1[nbLignes][nbColonnes]) {
    for (int j = 0; j < nbColonnes; j++) {
        for (int i = 0; i < nbLignes; i++) {
            mat_0[j][i] = mat_1[i][j];
            printf("%d ", mat_0[j][i]);
        }
        printf("\n");
    }    
}

/* 

Afin de réaliser un produit matriciel, les deux matrices doivent avoir les mêmes dimensions, soit dans l'ordre, 
soit dans le désordre. (i_1 = i_2 et j_1 = j_2 OU i_1 = j_1 et i_2 = j_2).
La matrice résultat aura les dimensions les plus faibles des deux matrices.

*/

int produitMatriciel(int m, int n, int p, int mat1[m][n], int mat2[n][p]){
    int mat_0[m][p];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            mat_0[i][j] = 0;
            for(int k = 0; k < n; k++){
                mat_0[i][j] = mat_0[i][j] + mat1[i][k] * mat2[k][j];
            }
        }
    }
    afficheMatrice(m, p, mat_0);
    return 0;
}

int main() {
    /* int mat[3][3] = {0}; */
    int mat_0[2][3] = {0};
    int mat_1[2][3] = {{1, 0, 4}, {-1, 2, -5}};
    int mat_2[2][3] = {{2, -3, 1}, {5, 8, 2}};
    int mat_3[3][2] = {{0, 1}, {2, -1}, {3, 4}};
    /* afficheMatrice(3, 3, tab_test); */
    afficheMatrice(2, 3, mat_1);
    afficheMatrice(3, 2, mat_3);
    /* additionMatrice(3, 2, mat, mat_1, mat_2); */
    /* transposee(2, 3, mat_0, mat_1); */
    int m = sizeof(mat_1)/sizeof(mat_1[0]);
    int n = sizeof(mat_3)/sizeof(mat_3[0]);
    int p = sizeof(mat_3[0])/sizeof(mat_3[0][0]);
    produitMatriciel(m, n, p, mat_1, mat_3);
    return 0;
}