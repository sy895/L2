#ifndef RECURSIVE_H
#define RECURSIVE_H



// Fibonacci
long long fibonacci_naif(int n);
long long fibonacci_memo(int n, long long memo[]);
long long fibonacci_iteratif(int n);
// Tableaux
int recherche_recursive(int tab[], int n, int valeur);
int maximum_tableau(int tab[], int n);
void inverser_tableau(int tab[], int debut, int fin);
// Chaînes
int longueur_chaine(const char *str);
int compter_voyelles(const char *str);
void remplacer_caractere(char *str, char ancien, char nouveau);

#endif