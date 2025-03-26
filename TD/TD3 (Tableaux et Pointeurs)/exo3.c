#include <stdio.h> 


float average (int tab [], int taille ){
    int i;
    float sum=0;
    for ( i = 0; i < taille; i++)
    {
        sum += tab[i];
    }

    return sum / taille;
    
}

int main (void) {
    int tab [] = {5,6,7,9,2};
    printf("%f",average(tab,5));
    return 0;
}