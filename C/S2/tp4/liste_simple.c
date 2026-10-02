#include <stdio.h>
#include <stdlib.h>
#include "liste_simple.h"

Liste* creer_liste() {
    Liste *liste = (Liste*)malloc(sizeof(Liste));
    if (liste == NULL) return NULL;
    liste->tete   = NULL;
    liste->taille = 0;
    return liste;
}

void detruire_liste(Liste *liste) {
    if (liste == NULL) return;
    Noeud *courant = liste->tete;
    while (courant != NULL) {
        Noeud *temp = courant;
        courant = courant->suivant;
        free(temp);
    }
    free(liste);
}

void inserer_debut(Liste *liste, int valeur) {
    if (liste == NULL) return;
    Noeud *nouveau = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau == NULL) return;
    nouveau->valeur  = valeur;
    nouveau->suivant = liste->tete;
    liste->tete      = nouveau;
    liste->taille++;
}

void inserer_fin(Liste *liste, int valeur) {
    if (liste == NULL) return;
    Noeud *nouveau = (Noeud*)malloc(sizeof(Noeud));
    if (nouveau == NULL) return;
    nouveau->valeur  = valeur;
    nouveau->suivant = NULL;
    if (liste->tete == NULL) {
        liste->tete = nouveau;
    } else {
        Noeud *courant = liste->tete;
        while (courant->suivant != NULL) {
            courant = courant->suivant;
        }
        courant->suivant = nouveau;
    }
    liste->taille++;
}