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

/* int affichageEnHexadecimal(char *s) {

} */

/* int affichageEnDecimal() {

} */

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
            s[i] += 32;
    }
    return s;
}

/* int transformerMinMaj() {

} */

/* int retournerMot() {

} */

/* int rechercherCaractereG() {

} */

/* int rechercherCaractereD() {

} */

/* int estPalindrome(char *mot, int d, int f) {

} */

/* int comparerChaine(char *s) {
    
} */

int valeurDecimale(char *s) {
    int Nombre = 0;
    int Pow = 1;
    int n = myStrlen(s);
    for (int i = n-1; i >= 0; i--) { 
        Nombre += (s[i] - 48)*Pow;
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