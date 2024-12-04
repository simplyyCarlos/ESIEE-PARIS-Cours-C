#include <stdio.h>
#include <stdlib.h>
#define NB_ELEVE_MAX 35
#define NB_MATIERE 10
#define NB_CARA_MAX 30

typedef struct {
    char nom[NB_CARA_MAX];
    char prenom[NB_CARA_MAX];
    float notes[NB_MATIERE];
    float moyenne;
} Eleve_t;

void saisie_noms(Eleve_t* eleve);
void saisie_note(Eleve_t* eleve);
void affiche_classe(Eleve_t classe[], int nb_eleve);
float calcul_moyenne_classe(Eleve_t classe[], float moyenne_matiere[], int nb_eleve);
void affiche_moyenne(float moyenne_matiere[]);

int main() {
    int nb_eleve,i;
    Eleve_t classe[NB_ELEVE_MAX];
    float moyenne_matiere[NB_MATIERE];
    float moyenne_generale;

    printf("Entrez le nombre d'élèves (max %d) : ", NB_ELEVE_MAX);
    if (scanf("%d", &nb_eleve) != 1 || nb_eleve < 1 || nb_eleve > NB_ELEVE_MAX) {
        printf("Nombre d'élèves invalide. Veuillez relancer le programme.\n");
        return 1;
    }

    for ( i = 0; i < nb_eleve; i++) {
        saisie_noms(&classe[i]);
        saisie_note(&classe[i]);
    }

    affiche_classe(classe, nb_eleve);

    moyenne_generale = calcul_moyenne_classe(classe, moyenne_matiere, nb_eleve);
    printf("\nLa moyenne générale de la classe est : %.2f\n", moyenne_generale);

    affiche_moyenne(moyenne_matiere);

    return 0;
}

void saisie_noms(Eleve_t* eleve) {
    printf("Entrez le nom de l'élève : ");
    scanf("%s", eleve->nom);
    printf("Entrez le prénom de l'élève : ");
    scanf("%s", eleve->prenom);
}

void saisie_note(Eleve_t* eleve) {
    float somme = 0;
    int i;
    for ( i = 0; i < NB_MATIERE; i++) {
        do {
            printf("Entrez la note %d (entre 0 et 20) : ", i + 1);
            if (scanf("%f", &eleve->notes[i]) != 1) {
                printf("Entrée invalide. Veuillez redémarrer le programme.\n");
                exit(1);
            }
        } while (eleve->notes[i] < 0 || eleve->notes[i] > 20);
        somme += eleve->notes[i];
    }
    eleve->moyenne = somme / NB_MATIERE;
}

void affiche_classe(Eleve_t classe[], int nb_eleve) {
    printf("\nListe des élèves de la classe :\n");
    int i;
    for ( i = 0; i < nb_eleve; i++) {
        printf("Élève %d : %s %s, Moyenne : %.2f\n",
               i + 1, classe[i].prenom, classe[i].nom, classe[i].moyenne);
    }
}

float calcul_moyenne_classe(Eleve_t classe[], float moyenne_matiere[], int nb_eleve) {
    float somme_generale = 0;
    int i,j;
    for ( i = 0; i < NB_MATIERE; i++) {
        moyenne_matiere[i] = 0;
    }

    for ( i = 0; i < nb_eleve; i++) {
        somme_generale += classe[i].moyenne;
        for ( j = 0; j < NB_MATIERE; j++) {
            moyenne_matiere[j] += classe[i].notes[j];
        }
    }

    for ( i = 0; i < NB_MATIERE; i++) {
        moyenne_matiere[i] /= nb_eleve;
    }

    return somme_generale / nb_eleve;
}

void affiche_moyenne(float moyenne_matiere[]) {
    printf("\nMoyennes des matières :\n");
    int i;
    for ( i = 0; i < NB_MATIERE; i++) {
        printf("Matière %d : %.2f\n", i + 1, moyenne_matiere[i]);
    }
}
