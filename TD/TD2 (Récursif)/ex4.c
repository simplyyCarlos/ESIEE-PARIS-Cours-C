#include <stdio.h>

void number_between(int a, int b)
{
    int i;
    if (a < b)
    {
        for (i = a; i <= b; i++)
        {
            printf("%d\n", i);
        }
    }else {
        for ( i = a; i >= b; i--)
        {
            printf("%d\n",i);
        }
        
    }
}

int somme (int a , int b) {
    int i;
    int somme=0;
    for ( i = a; i <= b; i++)
    {
        somme+=i;
    }
    return somme;   
}

int main(void)
{

    number_between(10, 4);
    printf("%d\n",somme(4,6));
    return 0;
}