#include <stdio.h>

int maxPrefix(char* arr1, char* arr2){
    int count = 0;

    while (arr1[count] != "\0" && arr2[count] != "\0" && arr1[count] == arr2[count]){
        count ++;
    }
    return count;
}



int main (int argv, char* argc []) {


    if(argv < 3){
        printf("Veuillez entrez deux chaînes de caracteres ! \n");
        return 1;
    }

    char * arr1 = argc [1];
    char * arr2 = argc [2];
    
    printf("La taille du plus long prefixe entre ces deux chaines est %d\n", maxPrefix(arr1,arr2));

    return 0;
}

