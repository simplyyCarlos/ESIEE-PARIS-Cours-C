#include <stdio.h>
int iX = 9;
int iJour, iMois, iAnnee;
const float dY = 7.0;


int main()
{
    int iX = 4;
    float fY;
    printf("La valeur de x est %d \n", iX);
    printf("Saisir une valeur pour y : ");
    scanf("%f", &fY);
    printf("La valeur de y est %f \n", fY);
    {
        int iX;
        float dY;
        printf("Saisir une valeur pour x : ");
        scanf("%d", &iX);
        printf("Saisir une valeur pour y : ");
        scanf("%f", &dY);
        printf("La valeur de x est %d \n", iX);
        printf("La valeur de y est %f \n", dY);
    }
    printf("Saisir une date suivant le format jour/mois/annee : ");
    scanf(" %d / %d / %d", &iJour, &iMois, &iAnnee);
    printf("La valeur de x est %d \n", iX);
    printf("La valeur de y est %f \n", dY);
    printf("Le jour saisi est %d \n", iJour);
    printf("Le mois saisi est %d \n", iMois);
    printf("L’annee saisie est %d \n", iAnnee);
    return 0;
}