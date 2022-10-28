#include <stdio.h>
#include <stdlib.h>

float valeurPolynome(float A[], int N, float x0){
    int compteur = 0;
    int resultat = 0;
    while (compteur < N) {
        resultat = resultat * x0 + A[N-1-compteur];
        compteur++;
    }
    return resultat;
}

int main(){
    float test[] = {1, 3, 5, 6};
    int size_test = sizeof(test)/sizeof(float);
    printf("%f\n", valeurPolynome(test, size_test, 1));
    return 0;
}