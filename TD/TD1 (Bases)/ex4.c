#include <stdio.h>
#include "ex2.h"



int main (void) {
    int x1,x2;
    printf("Entrez la premiere valeur : ");
    scanf("%d",&x1);
    printf("\nEntrez la deuxieme valeur : ");
    scanf("%d", &x2);

    int* min;
    int max = maximum(x1, x2,min);

    printf("Le maximum est %d et le minimum est %d\n",max, *min);

    return 0;
}