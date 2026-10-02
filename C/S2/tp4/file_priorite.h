#ifndef FILE_PRIORITE_H
#define FILE_PRIORITE_H

typedef struct NoeudPriorite {
    int valeur;
    int priorite; // Plus petit = plus prioritaire
    struct NoeudPriorite *suivant;
} NoeudPriorite;

typedef struct {
    NoeudPriorite *debut;
    int taille;
} FilePriorite;
   
FilePriorite* creer_file_priorite();
int enfiler_avec_priorite(FilePriorite *file, int valeur, int priorite);
int defiler_priorite(FilePriorite *file, int *valeur);
void afficher_file_priorite(FilePriorite *file);

#endif