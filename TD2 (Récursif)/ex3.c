#include <stdio.h>



int somme_recursive(int a, int b){
    if (a == b){
        return b;
    }
    return (a + somme_recursive(a+1,b));
}


int main (void) {

    printf ("%d\n",somme_recursive(4,6));

    return 0;
}