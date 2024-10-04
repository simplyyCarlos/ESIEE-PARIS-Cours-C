#include <stdio.h>

int fact(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return (a * fact(a - 1));
    }
}

int main(void)
{
    int a;
    printf("Veuillez entrez un nombre pour calculer sa factorielle : \n");
    scanf("%d", &a);

    printf("%d! = %d\n", a, fact(a));

    return 0;
}