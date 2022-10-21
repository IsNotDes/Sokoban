#include <stdio.h>
#include <stdlib.h>

int lireDonnees(char nomFichier[], int T[]) {
	int count = 0;
	int elem = ' ';
	FILE* file = fopen(nomFichier, "r");
	if (file) {
		while (fscanf(file, "%d", &elem) != EOF) {
			T[count] = elem;
			count++;
		}
	}
	return count;
}

void afficherTableau(int T[], int nb) {
	int i;
	for (i = 0; i < nb; i++) {
		printf("%d ", T[i]);
    }
	printf("\n");
}

void triABulles(int T[], int nb) {
	int temp = 0;
	int sorted = 0;
	while (!sorted) {
		sorted = 1;
		for (int j = 0; j < nb - 1; j++) {
			if (T[j] < T[j+1]) {
				sorted = 0;
				temp = T[j];
				T[j] = T[j+1];
				T[j + 1] = temp;
			}
		}
	}
	afficherTableau(T, nb);
}

void enregistrerDonnees(char nomFichier[], int T[], int nb) {
	int i;
	FILE* file = fopen(nomFichier, "w");
	if (file) {
		for (i = 0; i < nb; i++) {
			fprintf(file, "%d ", T[i]);
        }
	}
	else
		exit(EXIT_FAILURE);
}

int main() {
	int T[20] = {0};
	int nb = lireDonnees("monFichier.txt", T);
	afficherTableau(T, nb);
	triABulles(T, nb);
	enregistrerDonnees("monFichier.txt", T, nb);
	return 0;
}