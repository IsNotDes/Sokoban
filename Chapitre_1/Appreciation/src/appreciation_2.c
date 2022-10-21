#include <stdio.h>
#include <stdlib.h>

int main() {
    char Note = 'A';
    printf("Donnez votre note.\n");
    scanf("%c", &Note);
    switch (Note) {
        case 'A':
            printf("Très bien !\n");
            break;
        case 'B':
            printf("Bien !\n");
            break;
        case 'C':
            printf("Assez bien !\n");
            break;
        case 'D':
            printf("Passable !\n");
            break;
        case 'E':
            printf("Insuffisant !\n");
            break;
        default:
            printf("Note non reconnue !\n");
            break;
    }
    return 0;
}