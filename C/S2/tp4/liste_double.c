#include <stdio.h>
#include <stdlib.h>
#include "liste_double.h"

ListeDouble *creer_liste_double(){
    ListeDouble *liste = (ListeDouble*)malloc(sizeof(ListeDouble));
    if(liste ==NULL) {
        fprintf(stderr, "Erreur");
        return NULL;
    }
    liste -> tete = NULL;
    liste -> queue = NULL;
    liste -> taille = 0;
    return liste;
}
void detruire_liste_double(ListeDouble *liste) {
    if (liste == NULL) {
        return;
    }
    NoeudDouble *courant = liste -> tete;
    while (courant != NULL) {
        NoeudDouble *temp = courant;
        courant = courant -> suivant;
        free(temp);
    }
    free(liste);
}

void afficher_liste_double(ListeDouble *liste) {
    if (liste == NULL || liste -> tete == NULL ) {
        printf("vide");
        return;
    }
    NoeudDouble *courant = liste -> tete;
    printf("tete");
    while (courant  != NULL) {
        printf ("[%d]", courant -> valeur);
        if (courant -> suivant != NULL) {
            printf(" <->");
            
        }
        courant  = courant -> suivant;
        
    }
    printf("<-> queue");

}

void afficher_liste_double_reverse(ListeDouble *liste) {
    if (liste == NULL || liste -> queue == NULL) {
        printf("Liste vid");
        return;
    }
    NoeudDouble *courant = liste -> queue;
    printf("queue >-<");
    while (courant != NULL) {
        printf ("[%d]", courant -> valeur);
        if (courant -> precedent != NULL) {
            printf("<->");

        }
        courant = courant -> precedent ;
    }
    printf("<-> tete");

 }

void inserer_debut_double(ListeDouble *liste, int valeur) {
    if(liste == NULL) {
        return;
    }
    NoeudDouble *nouveau = (NoeudDouble*)malloc(sizeof(NoeudDouble));
    if (nouveau == NULL) {
        fprintf(stderr, "Erreur");
        return;
    }
    nouveau -> valeur = valeur;
    nouveau -> precedent = NULL ;
    nouveau -> suivant = liste -> tete;

    if (liste -> tete != NULL) {
        liste-> tete -> precedent = nouveau;
    }
    else {
        liste -> queue = nouveau;
    }
    liste -> tete = nouveau ;
    liste -> taille ++;
}

void inserer_fin_double (ListeDouble *liste, int valeur) {
    if (liste == NULL) return ;
    NoeudDouble *nouveau = (NoeudDouble*)malloc(sizeof(NoeudDouble));
    if (nouveau == NULL) {
        fprintf(stderr, "Erreur");
        return;
    }
    nouveau -> valeur = valeur ;
    nouveau -> suivant = NULL;
    nouveau -> precedent = liste -> queue;
    if (liste -> queue != NULL) {
        liste -> queue -> suivant = nouveau;

    }
    else {
        liste -> tete = nouveau;
    }
    liste -> queue = nouveau;
    liste -> taille++;

}

int supprimer_debut_double(ListeDouble *liste) {
    if (liste == NULL || liste -> tete == NULL ) {
        fprintf(stderr, "liste vide");
        return -1;
    }
    NoeudDouble *temp = liste -> tete ;
    int valeur = temp -> valeur;
    liste -> tete = temp -> suivant;

    if(liste-> tete != NULL) {
        liste-> tete -> precedent = NULL;
    }
    else {
        liste-> queue = NULL;
    }
    free (temp);
    liste ->taille --;
    return valeur;
}

int supprimer_fin_double(ListeDouble *liste) {
    if(liste == NULL || liste -> queue == NULL ) {
        fprintf(stderr, "Liste vie");
        return -1;
    }
    NoeudDouble *temp = liste-> queue;
    int valeur = temp -> valeur ;
    liste -> queue = temp -> precedent;
    if (liste -> queue != NULL) {
        liste -> queue -> suivant = NULL;
    }
    else {
        liste -> tete = NULL;
    }
    free(temp);
    liste -> taille --;
    return valeur;
}

void test_liste_double(){
    ListeDouble *liste = creer_liste_double();

    inserer_debut_double(liste, 10);
    afficher_liste_double(liste);
    inserer_debut_double(liste,20);
    afficher_liste_double(liste);
    inserer_fin_double(liste,40);
    afficher_liste_double(liste);
    inserer_fin_double(liste,50);
    afficher_liste_double(liste);



}
