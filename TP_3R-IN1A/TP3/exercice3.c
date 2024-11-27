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


int main (void) {

    int arr1[10] = {8,7,5,3,1,4,6,5,5,4};
    int arr2[8] = { 1,5,8,7,9,6,8,9};
    int arr3[5] = {1,5,4,6,3};

    tabCopy(arr3,5 ,arr1,10);
    displayTab(arr1,10);

    tabCopy(arr2,8,arr1,10);
    displayTab(arr1,10);

    return 0;
}