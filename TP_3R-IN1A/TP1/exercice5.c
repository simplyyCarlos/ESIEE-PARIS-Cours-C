#include <stdio.h>

void print_n_char(char c, unsigned int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%c",c);
    print_n_char(c, n - 1);
}

void print_n_spaces(unsigned int n){
    if(n ==0){
        return;
    }
    printf(" ");
    print_n_spaces(n-1);
    
}

void pyra_inv (int a){
    if(a == 0){
        return;
    }
    print_n_char('*',a);
    printf("\n");
    pyra_inv(a-1);
}

void pyra(int a)  {
    if(a == 0){
        return;
    }
    pyra(a-1);
    print_n_char('*',a);
    printf("\n");
    
}

void pyra_full(int a, int b) {
     if (a == 0) {
        return;
    }
    int stars = a * 2 - 1;
    int spaces = (2*b -1) - stars;

    pyra_full(a - 1,b);
    print_n_spaces(spaces/2);
    print_n_char('*', stars);
    print_n_spaces(spaces/2);
    printf("\n");
}

int main(void)
{
    /* char c;
    int n;
    printf("Veuillez entrer le char a repeter : \n");
    scanf("%c", &c);
    printf("Combien de fois souhaitez vous le repeter : \n");
    scanf("%d",&n);

    print_n_char(c,n);  */

    pyra(4); 
    pyra_inv(4);

    pyra_full(4,4);
    return 0;
}
