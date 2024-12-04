#include <stdio.h>

void miroir(int* tab, const int taille){
    int tmp[taille], i;
    for ( i = 0; i < taille; i++)
    {
        tmp[i] = tab[taille - 1 -i];
    }

    for (i = 0; i < taille; i++)
    {
        tab[i] = tmp[i];
    }
}


int main (int argc, char ** argv){
    int tab[6] = {1,2,3,4,5,6};
    miroir(tab, 6);
    
    int i;
    printf("{");
    for ( i = 0; i < 6; i++)
    {
        
    printf(" }\n");
    
    return 0;
    }
}