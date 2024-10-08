#include <stdio.h>

int somme_cent()
{
    int sum = 0;
    for (size_t i = 0; i < 100; i++)
    {
        sum += i;
    }
    return sum;
}

int sumBetween(int a, int b)
{
    if(a == b) {
        return 0;
    }
    int sum = 0;
    if (a > b)
    {
        for (size_t i = b; i < a; i++)
        {
            sum += i;
        }
    }else{
        for (size_t i = a; i < b; i++)
        {
            sum+=i;
        }
        
    }
    return sum;
}

int main(void)
{

    printf("Resultat : %d\n", sumBetween(1,100));
    return 0;
}