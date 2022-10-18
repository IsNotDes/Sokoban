#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int num;
    int den;
} Fraction;

Fraction addFraction(Fraction f1, Fraction f2) {
    Fraction f0;
    f0.num = f1.num * f2.den + f2.num * f1.den;
    f0.den = f1.den * f2.den;
    return f0; 
} 

Fraction subFraction(Fraction f1, Fraction f2) {
    Fraction f0;
    f0.num = f1.num * f2.den - f2.num * f1.den;
    f0.den = f1.den * f2.den;
    return f0; 
} 

Fraction mulFraction(Fraction f1, Fraction f2) {
    Fraction f0;
    f0.num = f1.num * f2.num;
    f0.den = f1.den * f2.den;
    return f0;
}

Fraction divFraction(Fraction f1, Fraction f2) {
    Fraction f0;
    f0.num = f1.num * f2.den;   
    f0.den = f1.den * f2.num;
    return f0;
} 

int main() {
    Fraction fa, fb, f_add, f_sub, f_mul, f_div;
    printf("Entrez deux fractions : \n");
    scanf("%d/%d %d/%d", &fa.num, &fa.den, &fb.num, &fb.den);
    printf("Les deux fractions sont : %d/%d %d/%d \n", fa.num, fa.den, fb.num, fb.den);
    f_add = addFraction(fa, fb);
    printf("La somme des deux fractions est : %d/%d \n", f_add.num, f_add.den);
    f_sub = subFraction(fa, fb);
    printf("La soustraction des deux fractions est : %d/%d \n", f_sub.num, f_sub.den);
    f_mul = mulFraction(fa, fb);
    printf("La multiplication des deux fractions est : %d/%d \n", f_mul.num, f_mul.den);
    f_div = divFraction(fa, fb);
    printf("La division des deux fractions est : %d/%d \n", f_div.num, f_div.den);
}