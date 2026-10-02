#ifndef PILE_LISTE_H
#define PILE_LISTE_H

typedef struct NoeudPile {
    int valeur;
    struct NoeudPile *suivant;
    } NoeudPile;
    typedef struct {
    NoeudPile *sommet;
    int taille;
    } PileListe;
    PileListe* creer_pile_liste();
    int est_vide_pile_liste(PileListe *pile);
    int empiler_liste(PileListe *pile, int valeur);
    int depiler_liste(PileListe *pile, int *valeur);
    int sommet_pile_liste(PileListe *pile, int *valeur);
    int taille_pile_liste(PileListe *pile);
    void afficher_pile_liste(PileListe *pile);
    void detruire_pile_liste(PileListe *pile);

#endif