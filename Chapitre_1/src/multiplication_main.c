#include <stdio.h>

int main() {
    int number=0;
    printf("Valeur de n:");
    scanf("%d",&number);
    while(number<2 && number>9){
        printf("Valeur non comprise entre 2 et 9\nValeur de n:");
        scanf("%d",&number);
    }
    jeuMulti(number);
    return 0;
}