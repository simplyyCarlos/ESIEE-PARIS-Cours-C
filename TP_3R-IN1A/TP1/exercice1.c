#include <stdio.h>

int somme (int a , int b){
    return a +b;
}

int main (void) {
    int res = somme(45,12);
    printf("45 + 12 = %d\n", res);


    return 0;
}