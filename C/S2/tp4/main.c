#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "liste_double.h"
#include "liste_simple.h"

double mesurer_temps(clock_t debut, clock_t fin) {
    return (double)(fin - debut) / CLOCKS_PER_SEC * 1000.0;
}

void comparer_listes_simple_double() {
    printf("\nfin vs double\n\n");

    int tailles[] = {1000, 5000, 10000, 50000};

    printf("fin\n\n");
    printf("%-10s | %-15s | %-15s | %-15s\n",
           "Taille", "Liste S. (ms)", "Liste D. (ms)", "");
    printf("-----------|-----------------|-----------------\n");

    for (int t = 0; t < 4; t++) {
        int n = tailles[t];
        Liste *ls = creer_liste();
        clock_t debut = clock();
        for (int i = 0; i < n; i++) {
            inserer_fin(ls, i);
        }
        clock_t fin = clock();
        double temps_ls = mesurer_temps(debut, fin);

        // Liste double
        ListeDouble *ld = creer_liste_double();
        debut = clock();
        for (int i = 0; i < n; i++) {
            inserer_fin_double(ld, i);
        }
        fin = clock();
        double temps_ld = mesurer_temps(debut, fin);

        printf("%-10d | %15.3f | %15.3f\n", n, temps_ls, temps_ld);

        detruire_liste(ls);
        detruire_liste_double(ld);
    }

    printf("\ndeb\n\n");
    printf("%-10s | %-15s | %-15s\n",
           "Taille", "Liste S. (ms)", "Liste D. (ms)");
    printf("-----------|-----------------|-----------------\n");

    for (int t = 0; t < 4; t++) {
        int n = tailles[t];
        Liste *ls = creer_liste();
        clock_t debut = clock();
        for (int i = 0; i < n; i++) {
            inserer_debut(ls, i);
        }
        clock_t fin = clock();
        double temps_ls = mesurer_temps(debut, fin);
        ListeDouble *ld = creer_liste_double();
        debut = clock();
        for (int i = 0; i < n; i++) {
            inserer_debut_double(ld, i);
        }
        fin = clock();
        double temps_ld = mesurer_temps(debut, fin);
        printf("%-10d | %15.3f | %15.3f\n", n, temps_ls, temps_ld);
        detruire_liste(ls);
        detruire_liste_double(ld);
    }
}

int main() {
    comparer_listes_simple_double();
    return 0;
}