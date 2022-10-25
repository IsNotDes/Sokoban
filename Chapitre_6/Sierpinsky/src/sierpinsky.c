#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sierpinski(int n, char (*tab)[64][64], int x, int y) {
	int pos;
	if (n <= 0) {
		(*tab)[x][y] = '*';
		//affcheTab(*tab);
		return 1;
	}
	else {
		pos = (int)pow(2, (double)(n-1));
		sierpinski(n - 1, tab, x, y);
		sierpinski(n - 1, tab, x + pos, y);
		sierpinski(n - 1, tab, x + pos, y + pos);
	}
    return 0;
}

int main() {
    char tabSierpinski[64][64];		// /!\ ne pas depasser 6 (2^6 = 64) our l'ordre n dans l'appel de fonction (pas encore d'allocation de memoire)
    for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            tabSierpinski[i][j] = ' ';
        }
    }
    sierpinski(6, &tabSierpinski, 0, 0);
    for (int i = 0; i < 64; i++) {
        for (int j = 0; j < 64; j++) {
            printf("%c", tabSierpinski[i][j]);
        }
        printf("\n");
    }
    return 0;
}