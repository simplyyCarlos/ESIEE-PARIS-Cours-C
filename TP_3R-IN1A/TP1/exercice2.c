#include <stdio.h>


void add_and_print(int a , int b){
    int res = a + b;
    printf("%d + %d = %d\n",a,b,res);
}

int main (void) {
    add_and_print(12,52);
    return 0;
}