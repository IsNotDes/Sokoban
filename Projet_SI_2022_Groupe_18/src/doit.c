#include <stdio.h>
#include "doit.h"

void clear() {
	printf("\e[1;1H\e[2J"); // Laisse un espace suffisant sur le terminal afin de ne laisser apparaître que le prochain tableau.
}