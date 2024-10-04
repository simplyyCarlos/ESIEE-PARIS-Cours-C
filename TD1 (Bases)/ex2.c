#include <stdio.h>
#include <stdlib.h>
#include "ex2.h"




int main(void)
{

    int n1, n2;
    int max;
    int* min;

    printf("Veuillez entrer la valeur entiere n1 :");
    scanf("%d", &n1);
    printf("\nVeuillez entrer la valeur entiere n2 : ");
    scanf("%d", &n2);
    printf("\nnombre 1=%d nombre 2=%d", n1, n2);

    max = maximum(n1, n2,min);

    printf("\nmax(%d , %d) = %d", n1, n2, max);
    printf("\nmin(%d , %d) = %d\n", n1, n2, *min);

    return 0;
}