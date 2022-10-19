# include <stdio.h>
# include <stdlib.h>

int pgcd_rec(int a, int b) {
    if (b != 0) {
        return pgcd_rec(b, a%b);
    }
    else {
        return a;
    }
}

int main() {
    int n1;
    int n2;
    printf("Donnez les deux nombres dont vous souhaitez le PGCD.\n");
    scanf("%d %d", &n1, &n2);
    printf("Le PGCD est : %d \n ", pgcd_rec(n1, n2));
}