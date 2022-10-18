#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("Nombre d'arguments : %d\n", argc);
    for(i = argc-1 ; i > 0 ; i--) {
        printf("%s\n", argv[i]);
    }
    return 0;
}

/* Ce programme renvoie après compilation et éxecution le nombre d'arguments (argc) ainsi que les argv[i] avec i allant de 1 à n (tout sans compter le ./prog) de notre fonction, ainsi que dits-arguments.
Ainsi, en éxecutant simplement ./prog, on obtient que le nombre d'arguments de notre fonction est 1.
Si on éxecute ./prog 3 15, on obtiendra que le nombre d'arguments de notre fonction est 3, et nous renverra 15 et 3 peu après.*/