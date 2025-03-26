#include <stdio.h>

void reverse (char tab [] , int taille){
    int i;
    for (i = taille-1; i >= 0; i--)
    {
        printf("%c", tab[i]);
    }
    printf("\n");
    


}

int main (void) {
    const int taille = 7;
    char tab [] = "Bonjour";
    reverse(tab,taille);
    return 0;
}