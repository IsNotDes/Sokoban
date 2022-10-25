#include <stdio.h>
#include <stdlib.h>

void quicksort(int* tab, int start, int end) {
	int i, j;
	int pivot;
	int temp;
	if (start < end) {
		pivot = start;
		i = start;
		j = end;
		while (i < j) {
			while (i < end && tab[i] <= tab[pivot])
				i++;
			while (tab[j] > tab[pivot])
				j--;
			if (i < j) {
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
		}
		temp = tab[pivot];
		tab[pivot] = tab[j];
		tab[j] = temp;
		quicksort(tab, start, j - 1);
		quicksort(tab, j + 1, end);
	}
}

int main() {
    int tab[] = { 0, 1, 7, 8, 3, 14, 121, -1, 0 };
    quicksort(tab, 0, 8);
    printf("Le tableau triee est : ");
	for (int i = 0; i < 8; i++) {
		printf("%d ", tab[i]);
    }
	printf("\n\n");
    return 0;
}
