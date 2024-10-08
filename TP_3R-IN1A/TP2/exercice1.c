#include <stdio.h>
void display_digit(){
    for (size_t i = 0; i < 10; i++)
    {
        printf("%d",i);
    }
    printf("\n");
    
}

void display_third(int a, int b) {
    if(a == b){
        return;
    } 
    int cpt = 0;
    if(a < b ) {
        for (size_t i = b; i >= a; i--)
        {
            printf("%d ", i);
            cpt ++;
            if(cpt == 3){
                printf("\n");
                cpt = 0;
            }
        }
        
    }else{
        while (a >= b){
            printf("%d ",a);
            cpt++;
            if(cpt == 3){
                printf("\n");
                cpt= 0;
            }
            a--;
        }  
    }
printf("\n");
}

int main() {
    display_digit();
    display_third(20,10);
    return 0;
}

