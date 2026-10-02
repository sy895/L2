#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "backtracking.h"
#include<time.h>

//exercice 1


static int compteur_permutations = 0 ;


void generer_permutations(int tab [], int debut, int n) {
    if (debut== n) {
        compteur_permutations ++;
        printf("permut  %d  [" , compteur_permutations);
        for (int i= 0; i <n ; i++) {
            if (i>0) {
                printf(", ");
                
            }
            
            printf("%d", tab [i]);
        }
        printf("]");

        return ;
    }
    for (int i= debut; i<n ; i ++) {
        int tmps = tab [debut];
        tab[debut] = tab [i];
        tab [i] =tmps;
        generer_permutations(tab, debut+1, n);
        tmps = tab [debut];
        tab [debut] = tab [i];
        tab[i] = tmps; 
    }

}


void test_permutations() {
    int tab[] = {1, 2, 3};
    int n = 3;
    compteur_permutations = 0;
    generer_permutations(tab, 0, n);

    printf("\nTotal : %d permutations (n! = %d! = %d)\n",
    compteur_permutations, n, compteur_permutations);
}




/*
./backtracking
permut  1  [1, 2, 3]permut  2  [1, 3, 2]permut  3  [2, 1, 3]permut  4  [2, 3, 1]permut  5  [3, 2, 1]permut  6  [3, 1, 2]
Total : 6 permutations (n! = 3! = 6)

*/







//exercice 2.1

int est_safe_queens(int plateau[], int ligne, int colonne, int n){
    for(int l = 0 ; l < ligne ;l++) {
        int c = plateau [l];
        if (c == colonne ){
            return 0; 
        }
        if (abs(l-ligne) ==  abs(c-colonne)) {
            return 0;
        }

    }
    return 1;

}

void afficher_plateau_queens(int plateau[], int n) {
    for (int l = 0; l <n ; l++) {
        for (int c = 0; c<n ; c++) {
            printf("%c", plateau [l] == c ? 'Q' : '.');
        }
        printf("\n");
    }
    printf("\n");

}


void resoudre_n_queens(int plateau[], int ligne, int n, int *nb_solutions){
    if (ligne == n) {
        (*nb_solutions) ++;
        printf("res %d", *nb_solutions);
        afficher_plateau_queens(plateau,n);
        return ;
    }
    for (int col = 0; col <n ; col++ ) {
        if (est_safe_queens(plateau, ligne, col, n)) {
            plateau[ligne]= col;
            resoudre_n_queens(plateau, ligne+1, n, nb_solutions);
            plateau [ligne]= -1;
            
            
        }
    }
}




int mesure_temps(clock_t debut, clock_t fin) {
    return (fin-debut)/ CLOCKS_PER_SEC * 1000;
}






void test_n_queens() {
    printf("\n===Problème de N-Reines ===\n\n");
    for (int n = 4; n <= 8; n++) {
    printf("%d-Reines\n\n", n);
    int plateau[n];
    int nb_solutions = 0;
    for (int i = 0; i < n; i++) {
    plateau[i] = -1;
    }
    clock_t debut = clock();
    resoudre_n_queens(plateau, 0, n, &nb_solutions);
    clock_t fin = clock();
    double temps = mesure_temps(debut,fin);
    printf("Total : %d solutions trouvées en %.3f ms\n\n",
    nb_solutions, temps);
    }
    }





int main () {
    test_permutations();
    test_n_queens();
    return 0;
}



/*

.......Q
.....Q..
Q.......
..Q.....
....Q...

res 88......Q.
....Q...
..Q.....
Q.......
.....Q..
.......Q
.Q......
...Q....

res 89.......Q
.Q......
...Q....
Q.......
......Q.
....Q...
..Q.....
.....Q..

res 90.......Q
.Q......
....Q...
..Q.....
Q.......
......Q.
...Q....
.....Q..

res 91.......Q
..Q.....
Q.......
.....Q..
.Q......
....Q...
......Q.
...Q....

res 92.......Q
...Q....
Q.......
..Q.....
.....Q..
.Q......
......Q.
....Q...

Total : 92 solutions trouvées en 0.000 ms

*/