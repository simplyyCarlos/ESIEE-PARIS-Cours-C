#include <stdio.h>
#define TAILLE 12
    void affiche_tab(int *tab, int taille)
{
    int i;
    for (i = 0; i < taille; i++)
        printf("%d ", tab[i]);
    printf("\n");
}

int *creer_entiers()
{
    int tab[TAILLE];
    int i;
    for (i = 0; i < TAILLE; i++)
        tab[i] = i + 1;
    return tab;
}

int main()
{
    int copy[TAILLE];
    int *tab = creer_entiers();
    int i;
    for (i = 0; i < TAILLE; i++)
        copy[i] = tab[i];
    affiche_tab(copy, TAILLE);
    affiche_tab(tab, TAILLE);
    return 0;
}

/*

*/