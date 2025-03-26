#include <stdio.h>
void reverse(char * tab,int taille){
    int i;
    for ( i = taille; i >= 0; i--)
    {
        printf("%c", tab[i]);
    }
    printf("\n");
    
}

int main (void) {

    char * tab = "Bonjour";
    reverse(tab,7);
    return 0;
}