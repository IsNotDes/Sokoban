#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int afficherNotes(int nbNotes, int tableauNotes[]){
    int i;
    for(i = 0; i < nbNotes; i++) {
        printf("%d\n", tableauNotes[i]);
    }
    return 0;
}

int minimumNotes(int nbNotes, int tableauNotes[]) {
    int i;
    int Note_Basse = 20;
    for(i = 0; i < nbNotes; i++) {
        if (tableauNotes[i] < Note_Basse) {
            Note_Basse = tableauNotes[i];
        }
    } 
    return Note_Basse;
}

int maximumNotes(int nbNotes, int tableauNotes[]) {
    int i;
    int Note_Maximale = 0;
    for(i = 0; i < nbNotes; i++) {
        if (tableauNotes[i] > Note_Maximale) {
            Note_Maximale = tableauNotes[i];
        }
    } 
    return Note_Maximale;
}

int calculeMoyenne(int nbNotes, int tableauNotes[]) {
    int i;
    int Somme_Notes = 0;
    for (i = 0; i < nbNotes; i++) {
        Somme_Notes = Somme_Notes + tableauNotes[i];
    }
    return Somme_Notes/nbNotes;
}

int calculeVariance(int nbNotes, int tableauNotes[]) {
    int i;
    int Variance = 0;
    int Moyenne = calculeMoyenne(nbNotes, tableauNotes);
    for (i = 0; i < nbNotes; i++) {
        Variance = Variance + (tableauNotes[i] - Moyenne)*(tableauNotes[i] - Moyenne);
    }
    return Variance/nbNotes;
}

int calculeEcartType(int nbNotes, int tableauNotes[]) {
    int Variance = calculeVariance(nbNotes, tableauNotes);
    int EcartType = sqrt(Variance);
    return EcartType;
}

int rechercherValeur(int nbNotes, int tableauNotes[], int n) {
    int i;
    for (i = 0; i < nbNotes; i++) {
        if (n == tableauNotes[i]) {
            return i+1;
        }
    }
    return -1;
}

int main() {
    int tableau_test[] = {15, 4, 6, 7, 8};
    int size_test = sizeof(tableau_test)/sizeof(int);
    afficherNotes(size_test, tableau_test);
    printf("La note la plus basse est : %d \n", minimumNotes(size_test, tableau_test));
    printf("La note la plus élevée est : %d \n", maximumNotes(size_test, tableau_test));
    printf("La moyenne des notes est : %d \n", calculeMoyenne(size_test, tableau_test));
    printf("La variance des notes est : %d \n", calculeVariance(size_test, tableau_test));
    printf("L'ecart-type des notes est : %d \n", calculeEcartType(size_test, tableau_test));
    printf("La position dans le tableau est : %d \n", rechercherValeur(size_test, tableau_test, 7));
    return 0;
}