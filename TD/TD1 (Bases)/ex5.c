#include <stdio.h>


int main () {

    char answer;
    printf("Quelle votre langue maternelle ?: ");
    answer = getchar();

    switch(answer){
        case 'F':
            printf("Salut!\n");
            break;
        case 'A':
            printf("Hello!\n");
            break;
        case 'I':
            printf("Ciao!\n");
            break;
        case 'Z':
            printf("Desole je ne parle pas votre langue!\n");
            break;
        default:
    }

    return 0;

}