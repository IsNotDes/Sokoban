#include <stdio.h>
#include <stdlib.h>

float valeurPolynome(float A[], int N, float x0){
    int i = N-3;
    int resultat = A[N-1] * x0 + A[N-2];
    while (i >= 0) {
        resultat = resultat * x0 + A[i];
        i--;
    }
    return resultat;
}

int main(){
    float test[] = {1, 3, 5, 6};
    int size_test = sizeof(test)/sizeof(float);
    printf("%f\n", valeurPolynome(test, size_test, 1));
    return 0;
}