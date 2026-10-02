typedef struct NoeudFile {
    int valeur;
    struct NoeudFile *suivant;
    } NoeudFile;
    typedef struct {
    NoeudFile *debut;
    NoeudFile *fin;
    int taille;
    } FileListe;
    FileListe* creer_file_liste();
    int est_vide_file_liste(FileListe *file);
    int enfiler_liste(FileListe *file, int valeur);
    int defiler_liste(FileListe *file, int *valeur);
    int premier_file_liste(FileListe *file, int *valeur);
    int taille_file_liste(FileListe *file);
    void afficher_file_liste(FileListe *file);
    void detruire_file_liste(FileListe *file);