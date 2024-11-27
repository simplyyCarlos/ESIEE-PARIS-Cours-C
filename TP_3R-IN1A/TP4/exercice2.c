#include <stdio.h>
#define size 4

void displayTab(int* tab, int taille){
    int i;
    for ( i = 0; i < taille; i++)
    {
        printf("%d\n",tab[i]);
    }  
}

int main (int argc, char ** argv){
    int tab[4] = {4,5,8,9};
    displayTab(tab, size);
    return 0;
}

