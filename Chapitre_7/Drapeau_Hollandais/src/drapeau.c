#include <stdio.h>
#include <stdlib.h>

void incr(int *a) {
    *a = (*a) + 1;
}

void triDrapeauHollandais(int* T, int size) {
	int b = 0;
	int w = 0;
	int r = size - 1;
	int temp = 0;
	while (w <= r) {
		if (((*(T + w)) >= 3) && ((*(T + w)) <= 6)) {
			w++;
        }
		else if ((*(T + w)) < 3) {
				temp = (*(T+b));
				(*(T+b)) = (*(T+w));
				(*(T+w)) = temp;
				b++;
				w++;
		}
		else {
			temp = (*(T+r));
			(*(T+r)) = (*(T+w));
			(*(T+w)) = temp;
			r--;
		}
	}
}

int main() {
	int x = 5;
    incr(&x);
	printf("%d\n", x); /* ce programme affiche 6 */
	int tab[10] = {3, 3, 2, 1, 8, 9, 4, 2, 7, 5};
	triDrapeauHollandais(tab, 10);  
	for (int i = 0; i < 10; i++)
		printf("%d ", tab[i]);
	return 0;
}