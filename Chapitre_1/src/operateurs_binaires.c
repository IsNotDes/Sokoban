#include <stdio.h>

int main() {
    int i = 2, j = 3, k = 4;
    printf("%d, %d, %d\n", i & j, i | 1, k | j);
    if ((i & k) || (i & j))
        printf("ok\n");
    return (0);
}

/* i & j => 0010 & 0011 => 0010 => 2
   i | 1 => 0010 | 0001 => 0011 => 3
   k | j => 0100 | 0011 => 0111 => 7

   i & k => 0010 & 0100 => 0000 => 0

   Si 0 || 2 => 2 donc on rentre dans le if
*/