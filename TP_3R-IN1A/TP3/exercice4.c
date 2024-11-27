#include <stdio.h>

int main (int argc, char* argv[]) {
    if (argc < 2) {
        printf("Aucune chaîne de caractères n'a été entrée.\n");
        return 1;
    }

    char * chaine = argv[1];

    int count = 0;
    while(chaine[count] != '\0'){
        count ++;
    }

    printf("Le nombre de caractere dans la chaine \"%s\" est %d.\n",chaine,count);

    return 0;
}