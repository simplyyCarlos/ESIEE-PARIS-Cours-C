#include <stdio.h>
#define LONGUEUR_NOM 21 // +1 pour '\0'
#define LICENCE_SIZE 9 // +1 pour '\0'

typedef struct {
    char nom [LONGUEUR_NOM];
    char prenom [LONGUEUR_NOM];
    char licence_number [LICENCE_SIZE];
    int position;
    float poids;
} Joueur;

int longueur_chaine(char * chaine) {
    int longueur = 0;
    while(chaine[longueur] != '\0'){
        longueur ++;
    }
    return longueur;
}

void reverse_print(char* chaine){
    int taille = longueur_chaine(chaine);
    while(taille >0){
        printf("%c", chaine[taille-1]);
        taille --;
    }
}

void recursive_print(char * chaine){
    if(*chaine == '\0'){
        return;
    }   

    recursive_print(chaine+1);
    printf("%c", *chaine);
}

int si_palindrome(char* chaine){
    int i = 0;
    int j = longueur_chaine(chaine) -1;
    while( i<j){
        if(chaine[i] != chaine[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}

int main() {

    char* chaine = "radar";

    if(si_palindrome(chaine) == 1){
        printf("%s est un palindrome\n", chaine);
    }else {
        printf("%s n'est pas un palindrome\n", chaine);
    }

    return 0;
}