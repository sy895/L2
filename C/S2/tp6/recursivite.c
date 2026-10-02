#include <stdio.h>
#include <time.h>
#include "recursivite.h"
//exercie 3
#define MAX_FIB 100

//exercice 2

static long long compteur_appels = 0;
double mesurer_temps(clock_t debut, clock_t fin) {
    return ((double)(fin-debut)/ CLOCKS_PER_SEC) * 1000.0; //appel de la biblio time.h
}

static long long fibonacci_naif_compte(int n) {
    compteur_appels ++;
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci_naif_compte(n-1) + fibonacci_naif_compte(n-2);

    }
}


long long fibonacci_naif (int n) {
    compteur_appels = 0;
    return fibonacci_naif_compte(n);

}




void test_fibonacci_naif() {
    printf("\nTest fibonacci version naïve\n\n");
    printf("%-5s | %-10s | %-15s | %-10s\n",
    "n", "F(n)", "Appels", "Temps (ms)");
    printf("------|------------|-----------------|------------\n");
    for (int n = 0; n <= 35; n += 5) {
        compteur_appels = 0;
        clock_t debut = clock();
        long long resultat = fibonacci_naif_compte(n);
        clock_t fin = clock();
        double temps = mesurer_temps(debut,fin);
        printf("%-5d | %-10lld | %-15lld | %-10.3f\n", 
            n, resultat, compteur_appels, temps);
    }
}


/*

Test fibonacci version naïve

n     | F(n)       | Appels          | Temps (ms)
------|------------|-----------------|------------
0     | 0          | 1               | 0.002     
5     | 5          | 15              | 0.001     
10    | 55         | 177             | 0.001     
15    | 610        | 1973            | 0.006     
20    | 6765       | 21891           | 0.074     
25    | 75025      | 242785          | 0.817     
30    | 832040     | 2692537         | 13.751    
35    | 9227465    | 29860703        | 77.401    



Questions :
1. Quel est le nombre d’appels pour F(35) ? voir en commentaire la compilation :  29860703

2. Quelle est la durée d’exécution pour F(40) ?77.401  ms

3. Quel problème pose cette implémentation ? le recalcul inutil avec les m valeurs

4. Donnez les complexités temporelle et spatiale de cette version ?

temporelle -> O(2 exposant n)
spatiale -> O(n)
*/



//exercice 3

long long fibonacci_memo(int n , long long memo []) {
    if (memo[n] != -1) {
        return memo [n];
    }
    if (n <= 1) {
        return memo [n] = n;
    }
    else {
        memo[n]= fibonacci_memo(n-1, memo) + fibonacci_memo(n-2, memo);
        return memo [n];
    }
}

long long fibonacci_iteratif(int n) {
    long long a = 0;
    long long b =1;

    if (n<=1) {
        return n;
    }
    for (int i= 2; i <= n; i++) {
        long long temp = a+b;
        a = b;
        b= temp;
    }
    return b;

}



void test_fibonacci_optimise() {
    printf("Comparaison des 3 versions :\n\n");
    printf("%-5s | %-15s | %-15s | %-15s\n",
    "n", "Naïf (ms)", "Mémo (ms)", "Itératif (ms)");
    printf("------|-----------------|-----------------|------------------\n");
    for (int n = 10; n <= 40; n += 5) {
        double temps_naif = 0;
        clock_t debut, fin;
        if (n <= 35) {
            clock_t debut = clock();
            fibonacci_naif(n);
            fin = clock();
            temps_naif = mesurer_temps(debut,fin);
        }
        long long memo[MAX_FIB];
        for (int i = 0; i < MAX_FIB; i++) memo[i] = -1;
        debut = clock();
        fibonacci_memo(n, memo);
        fin = clock();
        double temps_memo = mesurer_temps(debut,fin);
        debut = clock();
        fibonacci_iteratif(n);
        fin = clock();
        double temps_iter = mesurer_temps(debut,fin);
        if (n <= 35) {
            printf("%-5d | %15.3f | %15.6f | %15.6f\n",
                n, temps_naif, temps_memo, temps_iter);
        } else {
            printf("%-5d | %15s | %15.6f | %15.6f\n",
                n, "trop long", temps_memo, temps_iter);
        }
    }
}


/*


n     | Naïf (ms)      | Mémo (ms)      | Itératif (ms) 
------|-----------------|-----------------|------------------
10    |           0.000 |        0.001000 |        0.001000
15    |           0.004 |        0.000000 |        0.000000
20    |           0.047 |        0.000000 |        0.000000
25    |           0.507 |        0.001000 |        0.000000
30    |           5.580 |        0.000000 |        0.000000
35    |          61.865 |        0.001000 |        0.000000
40    |       trop long |        0.000000 |        0.002000


1. Qu’est que vous abservez ? Une difference colossale entre les 3 versions
2. Quelle sont les complexités temporelle et spatiale de la version avec memoïsation ?
temporelle -> O(n)
spatiale -> O(n)
3. Quelle sont les complexités temporelle et spatiale de la version itérative ?
temporelle -> O(n)
spatiale -> O(1)
*/






//exercice 4

int recherche_recursive(int tab [], int n, int valeur) {
    if (n <= 0) {
        return -1;
    }
    if (tab [0] == valeur) {
        return 0;
    }
    int resultat = recherche_recursive(tab+ 1, n -1, valeur);
    if (resultat != -1){
        return resultat + 1;
    }
    return -1;
}

int maximum_tableau(int tab [], int n) {
    if (n == 1) {
        return tab [0];
    }
    int max_reste = maximum_tableau (tab+ 1, n -1);
    if (tab [0] > max_reste) {
        return tab [0];
    }
    else {
        return max_reste;
    }
}



void inverser_tableau(int tab [], int debut, int fin) {
    if (debut >= fin) {
        return ;
    }
    int temp = tab [debut];
    tab [debut]= tab [fin];
    tab[fin] = temp;
    inverser_tableau(tab, debut+1, fin -1);
}

void test_tableaux() {
    printf("\nRécursivité sur les tableaux\n\n");
    int tab[] = {3, 7, 1, 9, 4, 6, 8, 2, 5};
    int n = 9;
    // Recherche
    int valeur = 6;
    int pos = recherche_recursive(tab, n, valeur);
    printf("Recherche de %d : %s à l'index %d\n",
    valeur, pos != -1 ? "trouvé" : "non trouvé", pos);
    // Maximum
    printf("Maximum : %d\n", maximum_tableau(tab, n));
    // Inversion
    printf("\nAvant inversion : ");
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    inverser_tableau(tab, 0, n - 1);
    printf("\nAprès inversion : ");
    for (int i = 0; i < n; i++) printf("%d ", tab[i]);
    printf("\n");
}



/*
Récursivité sur les tableaux

Recherche de 6 : trouvé à l'index 5
Maximum : 9

Avant inversion : 3 7 1 9 4 6 8 2 5 
Après inversion : 5 2 8 6 4 9 1 7 3 

*/








// exercice 5



int est_voyelle(char c ) {
    return (c == 'e'|| c =='a' || c == 'i' || c == 'o' || c== 'u' || c=='y'|| c== 'E'|| c== 'A' || c=='I' || c=='O' || c == 'U' || c == 'Y');

}


int longueur_chaine(const char *str) {
    if (*str == '\0') {
        return 0;
    }
    else {
        return 1 + longueur_chaine(str +1);
    }
}


int compter_voyelles (const char *str) {
    if (*str == '\0') {
        return 0;
    }
    else {
        return est_voyelle(*str) + compter_voyelles(str +1);
    }
}



void remplacer_caractere(char *str, char ancien,char nouveau ){
    if (*str == '\0') {
        return ;
    }
    if (*str == ancien){
        *str = nouveau;
    }
    remplacer_caractere(str+1, ancien, nouveau);

}


/*

Récursivité sur les chaînes

Longueur : 11
Voyelles : 4

Avant : "Bonjour le monde"
Après remplacement'o' -> '0' : "B0nj0ur le m0nde"

*/







void test_chaines() {
    printf("\nRécursivité sur les chaînes\n\n");
    const char *chaine1 = "Algorithmes";
    printf("Longueur : %d\n", longueur_chaine(chaine1));
    printf("Voyelles : %d\n\n", compter_voyelles(chaine1));
    // Test remplacement
    char chaine2[] = "Bonjour le monde";
    printf("Avant : \"%s\"\n", chaine2);
    remplacer_caractere(chaine2,'o'
    ,
    '0');
    printf("Après remplacement'o' -> '0' : \"%s\"\n", chaine2);
    }









int main() {
    test_fibonacci_naif();
    test_fibonacci_optimise();
    test_tableaux();
    test_chaines();
    return 0;
}

