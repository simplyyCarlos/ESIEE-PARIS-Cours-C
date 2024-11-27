#include <stdio.h>

void tabCopy(int *src, int srcSize, int *dest, int destSize) {
    int i;
    if(srcSize >= destSize){
        for ( i = 0; i < destSize; i++)
        {
            src[i] = dest[i];
        }
    }
    else{
        for ( i = 0; i < srcSize; i++)
        {
            dest[i] = src[i];
        }
    }
}

void displayTab(int tab[], int taille) {
    printf("tab[%d] = {", taille);
    int i;
    for ( i = 0; i < taille; i++) {
        if (i == taille - 1) {
            printf("%d}\n", tab[i]);
        } else {
            printf("%d, ", tab[i]);
        }
    }
}

int main(void) {
    int d, y;
    int i;

    printf("Entrez la taille du premier tableau : \n");
    scanf("%d", &d);
    int tab1[d];
    for (i = 0; i < d; i++) {
        printf("Entrez tab1[%d]: ", i);
        scanf("%d", &tab1[i]);
    }
    displayTab(tab1, d);

    printf("Entrez la taille du deuxieme tableau : \n");
    scanf("%d", &y);
    int tab2[y];
    for ( i = 0; i < y; i++) { 
        printf("Entrez tab2[%d]: ", i);
        scanf("%d", &tab2[i]);
    }
    
    displayTab(tab2, y);

    tabCopy(tab1,d,tab2,y);
    

    printf("Tableaux apres la copie : \n");
    displayTab(tab1, d);
    displayTab(tab2, y);
    return 0;
}
