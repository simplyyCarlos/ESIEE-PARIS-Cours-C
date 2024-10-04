#include <stdio.h>

int expo(int a, int b)
{
    if (b == 0)
        return 1;

    return a * expo(a, b - 1);
}

int main(void)
{   int n;
    int p;
    printf("Veuillez entrez un nombre : \n");
    scanf("%d", &n);
    printf("Entrez la puissance a laquelle l'elever : \n");
    scanf("%d",&p);

    printf("%d^%d = %d\n",n,p,expo(n,p));
    return 0;
}