#include <stdio.h>
#include <stdlib.h>

void affiche_tab(int *tab, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

void affiche_entiers(int n)
{
    int tab[n];
    int i;
    for (i = 0; i < n; i++)
        tab[i] = i + 1;
    affiche_tab(tab, n);
}

int main()
{
    affiche_entiers(12);
    return 0;
}

/*
tab[n] ne peux être défini dynamiquement dans le cas où N serait entré comme trop grand pouvant entraîner un dépassement de pile, il faut alors utiliser malloc.
Ce programme stocke dans un tableau de taille 12 les entiers de 1 à 12 et les affichent.

*/