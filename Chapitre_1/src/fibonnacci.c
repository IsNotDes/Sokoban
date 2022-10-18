#include <stdio.h>
#include <stdlib.h>

int fibonnacci(int n) {
    int i;
    int v1 = 0, v2 = 1, tmp = 0;
    for (i = 1; i <= n; ++i) {
        v1 = v2;
        v2 = tmp;
        tmp = v1 + v2;
    }
    return tmp;
}

int main() {
    int index;
    printf("Donner le rang auquel vous souhaitez faire la suite de Fibonnacci.\n");
    scanf("%d", &index);
    printf("%d\n", fibonnacci(index));
    return 0;
}

// L'utilisateur devra rentrer les valeurs 0, 1, 2, 3, 4 et 5, afin de tester si la fonction fonctionne correctement, pour obtenir, 0, 1, 1, 2, 3, 5. //