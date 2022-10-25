#include <stdio.h>
#include <stdlib.h>

int palindromeRec(char* str, int size, int n) {
	if (n == size)	return 1;
	else if (str[n] == str[size - n])
		palindromeRec(str, size, n + 1);
	else return 0;
}
    
int main() {
	char s[] = "palindrome";
	char st[] = "kayak";
	printf("Le mot %s est-il un palindrome %d\n\n", s, palindromeRec(s, 9, 0));
	printf("Le mot %s est-il un palindrome : %d\n\n", st, palindromeRec(st, 4, 0));
	return 0;
}