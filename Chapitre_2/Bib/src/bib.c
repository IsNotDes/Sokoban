#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quotient(int a, int b)
{
	int sign = 1;
	int q = 0;

	if (a < 0)
		sign *= -1;
	if (b < 0)
		sign *= -1;

	a = abs(a);
	b = abs(b);
	while (a - q * b >= b)
		q++;
	q *= sign;
	printf("q = %d\n", q);
	return q;
}


int reste(int a, int b)
{
	int q = quotient(a, b);
	int res = a - q * b;
	if (res < 0)
		res += abs(b);

	return res;
}


int pgcd(int a, int b)
{
	int r = a % b;
	while (r > 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}


int valeurAbsolue(int val)
{
	return val < 0 ? -val : val;
}


int ppcm(int a, int b)
{
	return valeurAbsolue(a * b) / pgcd(a, b);
}


int puissanceMB(int x, int n)
{
	int r = n, y = 1, z = x;
	int found = 0;
	int compteur = 0;
	while (!found)
	{
		if (r % 2 != 0)
		{
			r /= 2;
			y = z * y;
			if (r == 0)
				found = 1;
		}
		else
			r /= 2;
		z = z * z;
		compteur++;
	}
	printf("Le nombre d'operations pour %d puissance %d est : %d\n", x, n, compteur);
	return y;
}

int sommeDesImpairs(int d, int f)
{
	int res = 0;
	if (d % 2 == 0 || f % 2 == 0 || d > f)
		exit(EXIT_FAILURE);

	for (int i = d; i <= f; i += 2)
		res += i;
	return res;
}

int estUneDecompositionDe(int d, int f)
{
		int n = ((f - d) / 2) + 1;
		return sommeDesImpairs(d, f) == n * n * n ? n : -1;
}

void testBibliotheque() {
	printf("Quotient : %d\n", quotient(-6, -2));
	printf("Quotient : %d\n", quotient(12, 6));
	printf("Quotient : %d\n", quotient(9, 2));
	printf("Quotient : %d\n", quotient(7, 0));

	printf("Reste : %d\n", reste(12, 6));
	printf("Reste : %d\n", reste(-6, -5));
	printf("Reste : %d\n", reste(-6, 11));
	printf("Reste : %d\n", reste(-4, 0));

	printf("Valeur absolue : %d\n", valeurAbsolue(3));
	printf("Valeur absolue : %d\n", valeurAbsolue(-3));

	printf("PPCM : %d\n", ppcm(5, 10));
	printf("PPCM : %d\n", ppcm(3, 4));
	printf("PPCM : %d\n", ppcm(7, 0));

	printf("Puissance : %d\n", puissanceMB(3, 3));
	printf("Puissance : %d\n", puissanceMB(5, 9));
	printf("Puissance : %d\n", puissanceMB(4, 0));

	printf("%d\n", sommeDesImpairs(7, 11));
	printf("%d\n", estUneDecompositionDe(7, 11));
	printf("%d\n", estUneDecompositionDe(7, 13));
}

int main()
{
	int a, b;
	printf("a b:");
	scanf("%d %d", &a, &b);
	printf("%d\n", estUneDecompositionDe(a, b));
	return 0;
}