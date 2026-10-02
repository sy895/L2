#ifndef LISTE_DOUBLE_H
#define LISTE_DOUBLE_H

typedef struct NoeudDouble {
    int valeur;
    struct NoeudDouble *suivant;
    struct NoeudDouble *precedent;
    } NoeudDouble;
    typedef struct {
    NoeudDouble *tete;
    NoeudDouble *queue;
    int taille;
    } ListeDouble;
    // Création et destruction
    ListeDouble* creer_liste_double();
    void detruire_liste_double(ListeDouble *liste);
    // Affichage
    void afficher_liste_double(ListeDouble *liste);
    void afficher_liste_double_reverse(ListeDouble *liste);
    // Insertion
    void inserer_debut_double(ListeDouble *liste, int valeur);
    void inserer_fin_double(ListeDouble *liste, int valeur);
    // Suppression
    int supprimer_debut_double(ListeDouble *liste);
    int supprimer_fin_double(ListeDouble *liste);

#endif