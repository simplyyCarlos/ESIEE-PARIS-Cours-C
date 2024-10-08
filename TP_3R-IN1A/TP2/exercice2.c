#include <stdio.h>
#include <stdlib.h>

void display_step(int a, int b, int step) {
    if (step <= 0) {
        printf("Le pas doit être un entier positif.\n");
        return;
    }

    if (a == b) {
        printf("%d\n", a);
        return;
    }

    int cpt = 0;
    if (a > b) {
        while (a >= b) {
            printf("%d ", a);
            cpt++;
            if (cpt == step) {
                printf("\n");
                cpt = 0;
            }
            a--;
        }
    } else {
        while (b >= a) {
            printf("%d ", b);
            cpt++;
            if (cpt == step) {
                printf("\n");
                cpt = 0;
            }
            b--;
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int arr[3] = {0, 0, 0}; 

    if (argc == 1) {
        printf("Aucun argument fourni. Veuillez entrer trois entiers :\n");
        for (int i = 0; i < 3; i++) {
            printf("Entier %d : ", i + 1);
            scanf("%d", &arr[i]);
        }
    } else if (argc == 2) {
        int temp = atoi(argv[1]);
        printf("Un seul argument fourni = %d, lancement de la fonction avec 1, %d, 10 par defaut\n", temp);
        arr[0] = 1;
        arr[1] = temp;
        arr[2] = 10;
    } else if (argc == 3) {
        int temp;
        printf("Deux arguments fournis = %s et %s, veuillez entrer un pas pour la fonction : \n", argv[1], argv[2]);
        scanf("%d", &temp);
        arr[0] = atoi(argv[1]);
        arr[1] = atoi(argv[2]);
        arr[2] = temp;
    } else if (argc == 4) {
        for (int i = 0; i < 3; i++) {
            arr[i] = atoi(argv[i + 1]);
        }
    } else {
        printf("Trop d'arguments fournis. Veuillez entrer au maximum trois entiers.\n");
        return 1;
    }

    // Afficher les arguments fournis
    printf("Arguments fournis :\n");
    for (int i = 0; i < 3; i++) {
        printf("Entier %d : %d\n", i + 1, arr[i]);
    }    

    display_step(arr[0], arr[1], arr[2]);
    return 0;
}
