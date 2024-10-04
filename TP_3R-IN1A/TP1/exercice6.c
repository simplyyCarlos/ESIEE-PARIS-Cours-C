#include <stdio.h>


void pyra_inv(int a) {
    int i,j;
    for (i = 0; i < a; i++)
    {
        for (j = a-i; j > 0; j--)
        {
            printf("*");
        }
        printf("\n");
        
    }
}


void pyra(int a) {

    int i,j;
    for (i = 1; i <=a; i++)
    {
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}


void full_pyra(int a, int b)
{
    int i,j;
    for ( i = 1; i <= a; i++)
    {
        int stars = i * 2 - 1; 
        int spaces = (2 * b - 1) - stars; 
        for ( j = 0; j < spaces / 2; j++)
        {
            printf(" ");
        }
        for ( j = 0; j < stars; j++)
        {
            printf("*");
        }
        for ( j = 0; j < spaces / 2; j++)
        {
            printf(" ");
        }
        printf("\n");
    }
}



int main (void) {

    pyra_inv(4);
    pyra(4);
    full_pyra(4,4);

    return 0;
}