#include <stdio.h>
void number_between (int,int);


int main (void) {

    number_between(3,3);
    return 0;
}

void number_between (int a, int b){
    if(a > b) {
        printf("%d\n", a);
        number_between(a-1,b);
        return;
    }else if(a == b){
        printf("%d\n", a);
    }
    else if(a < b) {
        printf("%d\n",a);
        number_between(a+1, b);
    }
}