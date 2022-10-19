# include <stdio.h>
# include <stdlib.h>

int fibonacci_rec(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    else {
        return fibonacci_rec(n-1) + fibonacci_rec(n-2);
    }
}

int main() {
    int nombre;
    printf("Rang de la suite de Fibonacci que vous souhaitez calculer.\n");
    scanf("%d", &nombre);
    printf("Le résultat est : %d \n", fibonacci_rec(nombre));
    return 0;
}