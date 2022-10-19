#include <stdio.h>
#include <stdlib.h>

int fonction(int *T) {
    int b = 1;
    int w = 1;
    int r;
    int n;
    while (w <= r) {
        if (*(T+w) == 'blanc') {
            w++;
        }
        if (*(T+w) == 'bleu') {
            int *tmp;
            tmp = *(T+w);
            *(T+w) = *(T+b);
            *(T+b) = *(T+w);
            b++;
            w++;
        }
        if (*(T+w) == 'rouge') {
            int *tmp;
            tmp = *(T+r);
            *(T+r) = *(T+w);
            *(T+w) = *(T+r);
            r--;
        }
    }
}

int main() {

}