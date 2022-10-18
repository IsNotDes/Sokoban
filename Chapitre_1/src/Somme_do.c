#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n = 0;
    int i = 0;
    int res = 0;
    printf("Donnez le n dont vous souhaitez la somme des n premiers entiers.\n");
    scanf("%d", &n);
    do {
        res += i;
        i++;
    } while (i <= n);
    printf("%d\n", res);
    return 0;
}

// Si on rentre une valeur négative, on obtient 0. //