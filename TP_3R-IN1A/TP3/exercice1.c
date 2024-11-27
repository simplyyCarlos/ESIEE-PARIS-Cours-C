#include <stdio.h>


int getMaxTab(int tab[], int size){
    int temp,i;
    temp = tab[0];
    for ( i = 1; i < size; i++)
    {
        if (tab[i] > temp){
            temp = tab[i];   
        }
    }
    return temp;
    
}

int main () {
    int tab [10] = {4,25,69,47,123,5,45,9,36,45};
    printf("Le maximum du tableau est : %d\n", getMaxTab(tab,10));


    return 0;
}