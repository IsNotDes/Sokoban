#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
	int len = myStrlen(str);
	printf("Affichage en hexadecimal :\n");
	for (int i = 0; i < len; i++)
		printf("%x \n", str[i]);
}

void affichagerEnDecimal(char* str)
{
	int len = myStrlen(str);
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
	int len = myStrlen(str)-1;
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
	int i = myStrlen(str)-1;
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
	unsigned int len = myStrlen(str1);
	if (myStrlen(str2) > len)
		len = myStrlen(str2);

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
    int n = myStrlen(s) - 1;
    for (int i = n; i >= 0; i--) { 
        Nombre += (s[i] - '0')*Pow;
        Pow *= 10;
    }
    return Nombre;
}

void intVersChaine(int entier, char *str) {
    int i = 0;
	int reste = entier;
    char modulo;
    while(reste != 0) {
        modulo = reste % 10;
        str[i] = modulo + 48;
        reste -= modulo;
        reste /= 10;
        i++;
    }
    retournerMot(str);
}

int estSousChaine(char s1[], char s2[]) {
	int i = 0;
	int compteur = 0;
	int n = fmin(myStrlen(s1), myStrlen(s2));
	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] == s2[i]) {
			compteur++;
		}
		i++;
	}
	if (compteur == n) {
		return 1;
	}
	else {
		return 0;
	}
}

int main() {
    char str_maj[] = "TEST";
    char str_min[] = "test";
    char str_nb[] = "2345";
	char str_1[] = "hello";
	char str_2[] = "hell world";
    int nb_str = 2345;
    char dest[50];
    printf("La longueur du mot est de : %d \n", myStrlen(str_min));
    printf("La copie du mot nous donne : %s \n", myStrlcpy(dest, str_min));
    printf("Le mot en majuscule est : %s \n", mettreEnMajuscule(str_min));
    printf("Le mot en minuscule est : %s \n", mettreEnMinuscule(str_maj));
    printf("Le nombre attendu est : %d \n", valeurDecimale(str_nb));
    printf("L'entier vers la chaine nous donne : ");
	intVersChaine(nb_str, dest);
	printf("La fonction de sous chaine nous renvois : %d \n", estSousChaine(str_1, str_2));
    return 0;
}