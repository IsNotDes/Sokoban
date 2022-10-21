#include <stdio.h>
#include <stdlib.h>

int main() {
    char Note = 'A';
    printf("Entrez votre note.\n");
    scanf("%c", &Note);
    if (Note == 'A') {
        printf("Très bien !\n");
        }
        else {
            if (Note == 'B') {
                printf("Bien !\n");
                }   
                else {
                    if (Note == 'C') {
                        printf("Assez bien !\n");
                        }
                        else {
                            if (Note == 'D') {
                                printf("Passable !\n");
                                }
                                else {
                                    if (Note == 'E') {
                                        printf("Insuffisant !\n");
                                        }
                                        else {
                                            printf("Note invalide !\n");
                    }
                }
            }
        }
    }
    return 0;
}