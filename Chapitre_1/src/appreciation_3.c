#include <stdio.h>
#include <stdlib.h>

int main() {
    char Note = 'A';
    printf("Donnez votre note.\n");
    scanf("%c", &Note);
    if (Note == 'A') {
        printf("Très bien !\n");
    }
    if (Note == 'B') {
        printf("Bien !\n");
    }
    if (Note == 'C') {
        printf("Assez bien !\n");
    }
    if (Note == 'D') {
        printf("Passable !\n");
    }
    if (Note == 'E') {
        printf("Insuffisant !\n");
    }
    if (Note != 'A' && Note != 'B' && Note != 'C' && Note != 'D' && Note != 'E') {
        printf("Note invalide.\n");
    }
    return 0;
}