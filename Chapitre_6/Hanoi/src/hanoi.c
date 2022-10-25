#include <stdio.h>
#include <stdlib.h>

void hanoi(char A, char B, char C, int n) {
	if (n == 1)
		printf("Deplacement %c -> %c\n", A, C);
	else
	{
		hanoi(A, C, B, n - 1);
		printf("Deplacement %c -> %c\n", A, C);
		hanoi(B, A, C, n - 1);
	}
}

int main() {
    hanoi('A', 'B', 'C', 3);
    return 0;
}