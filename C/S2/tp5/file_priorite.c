#include <stdio.h>
#include <stdlib.h>
#include "file_priorite.h"

FilePriorite* creer_file_priorite(){
    FilePriorite *file = (FilePriorite*)malloc(sizeof(FilePriorite));
    if (file == NULL) {
        fprintf(stderr, "NO");
        return NULL;
    }
    file -> debut = NULL;
    file -> taille =0;
    return file;
}

int enfiler_avec_priorite(FilePriorite *file, int valeur, int priorite) {
    if (file == NULL) return 0;
    NoeudPriorite *nouveau = (NoeudPriorite*)malloc(sizeof(NoeudPriorite));
    if (nouveau == NULL) {
        fprintf(stderr, "no");
        return 0;
    }
    nouveau -> valeur = valeur;
    nouveau -> priorite = priorite;
    nouveau -> suivant = NULL;



    if (file -> debut == NULL || priorite < file-> debut -> priorite) {
        nouveau -> suivant = file -> debut;
        file -> debut = nouveau ;
    }
    else {
        NoeudPriorite *courant = file -> debut;
        while (courant -> suivant != NULL && courant -> suivant -> priorite <= priorite) {
            courant = courant -> suivant;
        }
        nouveau -> suivant = courant -> suivant;
        courant -> suivant= nouveau;
    }
    file -> taille ++;
    return 1;
}




int defiler_priorite(FilePriorite *file, int *valeur) {
    if (file == NULL || file -> debut == NULL) {
        return 0;
    }
    NoeudPriorite *temp = file -> debut;
    *valeur = temp -> valeur;
    file -> debut = temp -> suivant;
    free(temp);
    file -> taille--;
    return 1;
}

void afficher_file_priorite(FilePriorite *file) {
    if (file == NULL || file -> debut == NULL) {
        printf ("non");
        return;
    }
    NoeudPriorite *courant = file -> debut;
    printf("debut ->");
    while (courant != NULL) {
        printf("[%d(p%d)]", courant -> valeur , courant -> priorite);
        if (courant -> suivant != NULL) printf("->");
        courant = courant -> suivant;
    }
    printf (" end");
}



void test_file_priorite() {
    printf("\nFILE DE PRIORITÉ\n\n");
    FilePriorite *file = creer_file_priorite();
    printf("Enfilage avec priorités :\n");
    enfiler_avec_priorite(file, 100, 5);
    enfiler_avec_priorite(file, 200, 1); // Plus prioritaire
    enfiler_avec_priorite(file, 300, 3);
    enfiler_avec_priorite(file, 400, 2);
    enfiler_avec_priorite(file, 500, 4);
    afficher_file_priorite(file);
    printf("\nDéfilage (par ordre de priorité) :\n");
    int valeur;
    while (defiler_priorite(file, &valeur)) {
    printf("Défilé : %d\n", valeur);
    }
    free(file);
    }


int main (){
    test_file_priorite();
    return 0;
}