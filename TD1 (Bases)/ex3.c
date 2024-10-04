#include <stdio.h>


int add (int x, int y) {
    return x+ y;
}

int multiply (int x, int y){
    return x*y;
}

int main (void) {

    int x1, x2;
    printf("\nEntrez la valeur de x1 : ");
    scanf("%d",&x1);
    printf("\nEntrez la valeur de x2 : ");
    scanf("%d",&x2);
    printf("\nResultat somme : %d\n",add(x1,x2));
    printf("Resultat multiply : %d\n",multiply(x1,x2));

    return 0;
}