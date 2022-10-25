#include <stdio.h>
#include <stdlib.h>

int myStrlen(char *s) {
    int length = 0;
    while (*s != '\0') {
        length++;
        s++;
    }
    return length;
}

char *myStrlcpy(char *d, char *s) {
    int n = myStrlen(s);
    for (int i = 0; i <= n; i++) {
        d[i] = s[i]; 
    }
    return d;
}

void affichagerEnHexadecimal(char* str)
{
	int len = strlen(str);
	printf("Affichage en hexadecimal :\n");
	for (int i = 0; i < len; i++)
		printf("%x \n", str[i]);
}

void affichagerEnDecimal(char* str)
{
	int len = strlen(str);
	printf("Affichage en decimal :\n");
	for (int i = 0; i < len; i++)
		printf("%d \n", str[i]);
}

char *mettreEnMajuscule(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]  >= 'a' && s[i] <= 'z')
            s[i] -= 'a' - 'A';
    }
    return s;
}

char *mettreEnMinuscule(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i]  >= 'A' && s[i] <= 'Z')
            s[i] += 'a' - 'A';
    }
    return s;
}

char* transformerMinMaj(char* str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		else
			if (str[i] >= 'A' && str[i] <= 'A')
				str[i] += 'a' - 'A';
		i++;
	}
	return str;
}

char* retournerMot(char* str)
{
	int len = strlen(str)-1;
	char temp = ' ';
	for (int i = 0; i <= len /2; i++)
	{
		temp = str[i];
		str[i] = str[len - i];
		str[len - i] = temp;
	}
	printf("%s\n", str);
	return str;
}

int rechercherCaractereG(char* str, char c)
{
	int i = 0;
	int found = 0;
	while (str[i] != '\0' && !found)
	{
		if (str[i] == c)
			found = 1;

		i++;
	}
	if (!found)
		i = 0;
	return i-1;
}

int rechercherCaractereD(char* str, char c)
{
	int i = strlen(str)-1;
	int found = 0;
	while (i > 0 && !found)
	{
		if (str[i] == c)
			found = 1;

		i--;
	}
	if (!found)
		i = -2;
	return i + 1;
}

int estPalindrome(char* str, int d, int f)
{
	int i = d;
	int notPalindrome = 1;
	while (i < f && notPalindrome)
	{
		if (str[i] != str[f - i])
			notPalindrome = 0;
		i++;
	}
	return notPalindrome;
}

int comparerChaine(char* str1, char* str2)
{
	unsigned int i = 0;
	int found = 0;
	unsigned int len = strlen(str1);
	if (strlen(str2) > len)
		len = strlen(str2);

	while(i < len && !found)
	{
		if (str1[i] != str2[i])
			found = str1[i] - str2[i];
		i++;
	}
	return found;
}

int valeurDecimale(char *s) {
    int Nombre = 0;
    int Pow = 1;
    int n = myStrlen(s);
    for (int i = n-1; i >= 0; i--) { 
        Nombre += (s[i] - '0')*Pow;
        Pow *= 10;
    }
    return Nombre;
}

char *intVersChaine(int n, char *s) {
    int Pow = 1000;
    int nbr = 4;
    for (int i = 0; i <= nbr-1; i++) {
        s[i] = (n/Pow)%10;
        Pow /= 10;
    }
    printf("La chaine associée au nombre est : ");
    for (int j = 0; j <= nbr-1; j++) {
        printf("%d", s[j]);
    }
    printf("\n");
    return s;
}

int main() {
    char str_maj[] = "TEST";
    char str_min[] = "test";
    char str_nb[] = "2345";
    int nb_str = 2345;
    char dest[50];
    printf("La longueur du mot est de : %d \n", myStrlen(str_min));
    printf("La copie du mot nous donne : %s \n", myStrlcpy(dest, str_min));
    printf("Le mot en majuscule est : %s \n", mettreEnMajuscule(str_min));
    printf("Le mot en minuscule est : %s \n", mettreEnMinuscule(str_maj));
    printf("Le nombre attendu est : %d \n", valeurDecimale(str_nb));
    intVersChaine(nb_str, dest);
    return 0;
}