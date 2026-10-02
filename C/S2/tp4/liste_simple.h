#ifndef LISTE_SIMPLE_H
#define LISTE_SIMPLE_H

typedef struct Noeud {
    int valeur;
    struct Noeud *suivant;
} Noeud;

typedef struct {
    Noeud *tete;
    int taille;
} Liste;

Liste* creer_liste();
void detruire_liste(Liste *liste);
void inserer_debut(Liste *liste, int valeur);
void inserer_fin(Liste *liste, int valeur);

#endif