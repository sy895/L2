/*
//ex 1
#include <stdio.h>
int main (void)
{
    int i;
    i=-3;
    while (i){
        printf("La valeur de i est %d. \n", i);
    i++;}
    return(0);}

    //La valeur de i est -3. 
    //La valeur de i est -2. 
    //La valeur de i est -1.



//ex 2
#include <stdio.h>
int main(void) {
    char hex;
    int decimal;
    printf("donner un caractère hexadécimal : ");
    scanf("%c", &hex);
    switch (hex) {
        case '0': 
            decimal = 0; 
            break;

        case '1': 
            decimal = 1; 
            break;

        case '2': 
            decimal = 2; 
            break;

        case '3': 
            decimal = 3; 
            break;

        case '4': 
            decimal = 4; 
            break;

        case '5': 
            decimal = 5; 
            break;

        case '6': 
            decimal = 6; 
            break;

        case '7': 
            decimal = 7; 
            break;

        case '8': 
            decimal = 8; 
            break;

        case '9': 
            decimal = 9; 
            break;

        case 'A': 
        case 'a': 
            decimal = 10; 
            break;

        case 'B': 
        case 'b': 
            decimal = 11; 
            break;

        case 'C': 
        case 'c': 
            decimal = 12; 
            break;

        case 'D': 
        case 'd': 
            decimal = 13; 
            break;

        case 'E': 
        case 'e': 
            decimal = 14; 
            break;

        case 'F': 
        case 'f': 
            decimal = 15; 
            break;

        default: 
            decimal = -1; 
            break;
    }

    printf("Valeur décimale : %d\n", decimal);
    return 0;
}

//ex3
Ecrire un programme C qui compte le nombre de caractères dans texte saisi (caractère par caractère) sur
une seule ligne.
– Par exemple, si le texte saisi est : "Bonjour je travaille."
– le programme aﬃchera : 21


#include <stdio.h>
int main(void) {
    int c;
    int cmpt = 0;
    printf("Saisir un texte : ");
    c = getchar();// je lis le 1er caractère     
    while (c != '\n') { 
        cmpt++;
        c = getchar(); //une fois qu'on fait +1 on recompte
    }

    printf("Nombre caractères : %d\n", cmpt);

    return 0;
}
//Saisir un texte : bonjourlemonde
//Nombre caractères : 13


Reprendre l’exercice précédant en ne déclarant qu’une seule variable (de type unsigned char).

#include <stdio.h>
int main(void) {
    unsigned char c;
    int cmpt = 0;
    printf("Saisir un texte : ");
    c = getchar();// je lis le 1er caractère     
    while (c != '\n') { 
        cmpt++;
        c = getchar(); //une fois qu'on fait +1 on recompte
    }

    printf("Nombre caractères : %d\n", cmpt);

    return 0;
}
//ex4
Ecrire un programme C qui aﬃche les n premiers nombres parfaits. Tester votre programme avec n=3, n=5
puis n=9.


#include <stdio.h>
int main(void) {
int n;
int compteur = 0;
int res = 0;
printf("rentrez un entier positif : ");
scanf("%d", &n);
for (int i = 2; compteur < n; i++) { // 1 ne peut pas ê parfait
for (int j = 1; j <= i / 2; j++) {
    if (i % j == 0) {
        res += j;
            }
        }
    if (res == i) {
        printf("%d est un nombre parfait\n", i);
        compteur++;
        }
    }
    return 0;
}
//Veuillez rentrer un entier positif : 3
//6 est un nombre parfait
//28 est un nombre parfait
//496 est un nombre parfait



//ex5

Un étudiant a écrit le programme C ci-dessous. Il s’est rendu compte qu’il avait fait 7 erreurs de syntaxe (de
compilation). Corriger ces erreurs puis compiler et tester votre programme.



#include <stdio.h>
int main (void)
{
int nombre,somme, i ; 
somme=0;
printf ("Merci d’introduire un nombre entier positif :  \n ");
scanf("%d", &nombre);
for (i=0; nombre!=0; i++)
{
somme = somme + (nombre % 10);
nombre = nombre / 10;
printf ("La somme des chiffres de ce nombre est : %d\n", somme);
    
}
return(0);
}

//Merci d’introduire un nombre entier positif :  
//4
//La somme des chiffres de ce nombre est : 4





//exercice 6
Écrire un programme qui lit, caractère par caractère, une séquence de lettres diﬀérentes, puis les af-
fiche dans l’ordre croissant (d’abord les minuscules, ensuite les majuscules). La lecture s’arrête lorsque
l’utilisateur rentre le caractère ’$’.
– Par exemple, si l’utilisateur entre "EaxcDA$", le programme aﬃchera "acxADE".



#include <stdio.h>
int main(void) {
char c; //getchar
char i; // parcourir à la fin
long long minuscules = 0; //long long pcq 26 lettres alphabet mais maj+min = 52 bits
long long majuscules = 0; //same
// 2 vari servent de masque de bits
printf("Rentrez une suite de caractères et finir avec '$' : ");
    while ((c = getchar()) != '$') { //tant que le mot est diff de dollar on continue
        if (c == '\n') {// et si il y a retour à la ligne on peut négliger
            continue;
        }   
        if (c >= 'a' && c <= 'z') { //lettres minuscules ASCII intervalle 97 122 inclut
            // eviter doublons "séquence de lettres diﬀérentes"
            if (minuscules & (1LL << (c - 'a'))) { // 1LL c'est 1 mais en long long donc + debit
                printf("Erreur : Le caractère '%c' a déjà été saisi !\n", c);
                return 1; //erreur et return 0 bon
            }
            minuscules |= (1LL << (c - 'a')); //dans le cas ou c'est pas un doublon
        }
        else if (c >= 'A' && c <= 'Z') { // meme chose pour les majuscules
            if (majuscules & (1LL << (c - 'A'))) {
                printf("Erreur : Le caractère '%c' a déjà été saisi !\n", c);
                return 1;
            }
            majuscules |= (1LL << (c - 'A'));
        }
    }
    printf("Résultat : ");
    for (i = 'a'; i <= 'z'; i++) {// boucle qui parcourt les lettres min ASCII
        if (minuscules & (1LL << (i - 'a'))) {
            printf("%c", i);
        }
    }
    for (i = 'A'; i <= 'Z'; i++) {//boucle qui parcourt les lettres maj
        if (majuscules & (1LL << (i - 'A'))) {
            printf("%c", i);
        }
    }
    return 0;
}
//Rentrez une suite de caractères et finir avec '$' : eAIlM$  
//Résultat : elAIM


//exercice 7

int a=-12, b=8;
if (a>0)
    if (b>0) printf ("%d \n", 3*a);
    else printf ("%d \n", 4*a);

//tp3.c:268:1: error: expected identifier or '('
//268 | if (a>0)
//| ^
//tp3.c:270:5: error: expected identifier or '('
//270 |     else printf ("%d \n", 4*a);
//|     ^

//exercice 8
On a demandé à un étudiant de réaliser l’exercice suivant :
Grâce à l’instruction switch, écrire un programme C qui lit un caractère (qui représente une lettre en hex-
adécimal) et aﬃche son équivalent (un entier) en décimal. Par exemple, si l’utilisateur rentre le caractère ’A’ le
programme aﬃchera 10. Si l’utilisateur rentre un caractère qui n’appartient pas {’0’, ... , ’9’, ’A’, ’B’, ’C’, ’D’,
’E’, ’F’} l’entier -1 est aﬃché.
L’étudiant a écrit le programme suivant :


#include <stdio.h>
int main (void)
{
char h;
printf("Merci d’introduire la lettre en hexadécimal : ");
scanf("%c", &h);
switch (h) {
case 0:
printf("Le nombre décimal associé est : %d\n", 0);
break;
case 1:
printf("Le nombre décimal associé est : %d\n", 1);
break;
case 2:
printf("Le nombre décimal associé est : %d\n", 2);
break;
case 3:
printf("Le nombre décimal associé est : %d\n", 3);
break;
case 4:
printf("Le nombre décimal associé est : %d\n", 4);
break;
case 5:
printf("Le nombre décimal associé est : %d\n", 5);
break;
case 6:
printf("Le nombre décimal associé est : %d\n", 6);
break;
case 7:
printf("Le nombre décimal associé est : %d\n", 7);
break;
case 8:
printf("Le nombre décimal associé est : %d\n", 8);
break;
case 9:
printf("Le nombre décimal associé est : %d\n", 9);
break;
case ’’:
printf("Le nombre décimal associé est : %d\n", 10);
break;
case ’B’:
printf("Le nombre décimal associé est : %d\n", 11);
break;
case ’C’:
printf("Le nombre décimal associé est : %d\n", 12);
break;
case ’D’:
printf("Le nombre décimal associé est : %d\n", 13);
break;
case ’E’:
printf("Le nombre décimal associé est : %d\n", 14);
break;
case ’F’:
printf("Le nombre décimal associé est : %d\n", 15);
break;
default:
printf("Le nombre décimal associé est : %d\n", -1);
break;
}
return(0);
}
//L'erreur c'est de mettre case des lettres alors qu'en char ça prends le code ascii qui est trop grand donc

//version corrigé :




#include <stdio.h>

int main(void) {
    char h;
    int v;

    printf("Merci d’introduire la lettre en hexadécimal : ");
    if (scanf(" %c", &h) != 1) return 1;

    if (h >= '0' && h <= '9')
        v = h - '0';
    else if (h >= 'A' && h <= 'F')
        v = h - 'A' + 10;
    else if (h >= 'a' && h <= 'f')
        v = h - 'a' + 10;
    else
        v = -1;

    printf("Le nombre décimal associé est : %d\n", v);
    return 0;
}
//Merci d’introduire la lettre en hexadécimal : a 
//Le nombre décimal associé est : 10


//exercice9

Exercice 9:
Ecrire un programme C qui réalise le jeu des allumettes suivant :
• On dispose de n allumettes (n est un nombre strictement positif à lire depuis le clavier).
• Nous avons deux joueurs : j0 et j1.
• Chaque joueurs doit retirer 1, 2 ou 3 allumettes.
• Les joueurs jouent à tour de rôle. On suppose que c’est j0 qui commence.
• Le joueur qui retire la (ou les) dernière(s) allumettes a perdu.
Le programme aﬃchera le joueur gagnant.



#include <stdio.h>
int main(void) {
    unsigned int allumettes; 
    int joueur_courant = 0;
    printf("Rentrez un nombre d'allumettes supérieur à 0 : ");
    if (scanf("%u", &allumettes) != 1 || allumettes == 0) { //si c'est faux on a 0 false donc si diff de 1 on a un erreur dans le cas ou c'est pas un char ou autre cas, ou 0
        printf("Valeur invalide.\n");
        return 1; 
    }
    //Rentrez un nombre d'allumettes supérieur à 0 : 10
    while (allumettes > 0) {
        unsigned int prise ; //stocker le nombre d'allumettes que le joueur décide de retirer
        printf("Reste %u allumettes. Joueur j%d, retire 1, 2 ou 3 : ", allumettes, joueur_courant);
        if (scanf("%u", &prise) != 1) {
            printf("Entrée invalide.\n");
            return 1;
        }
        // Reste 10 allumettes. Joueur j0, retire 1, 2 ou 3 : 2
        // Reste 8 allumettes. Joueur j1, retire 1, 2 ou 3 : 
        if (prise < 1 || prise > 3 || prise > allumettes) { 
            printf("Coup invalide, recommence.\n");
            continue; // redemander au même joueur
        }
        //Reste 8 allumettes. Joueur j1, retire 1, 2 ou 3 : 4
        //Coup invalide, recommence.
        
        allumettes -= prise;

        if (allumettes == 0) break; // joueur courant perd
        joueur_courant = 1 - joueur_courant; // changer de joueur
    }

    int gagnant = 1 - joueur_courant;
    printf("Le gagnant est j%d\n", gagnant);
    return 0;
}

//exercice 10
Les fourmis et les éléphants souhaitent vivre en harmonie, chacun ayant un toit bien défini.
Toutefois, lorsqu’ils se promènent, les fourmis confondent les pieds des éléphants avec des troncs d’arbres, et
finissent par pincer les éléphants à chaque rencontre. De leur côté, les éléphants, sans faire attention, écrasent
régulièrement les pattes des fourmis.
Le chef des éléphants (le colonel Hathi) et la représentante des fourmis (la princess Atta) vous sollicitent
pour trouver une solution. Ils se demandent s’il serait possible de tracer une bordure (sous forme d’une ligne
blanche) qui séparerait les toits des éléphants d’un côté, et ceux des fourmis de l’autre.
Pourriez-vous les aider en écrivant un programme en C qui répond à leur demande ?
• Pour simplifier, nous supposons que les toits sont représentés par des points ti = (xi,yi) sur un plan avec
xi > 0 et yi > 0.
• Les données en entrée de vous programme sont donc deux ensembles de points : E, représentant les toits
des éléphants, et F, représentant les toits des fourmis.
• La sortie est une valeur booléenne : vraie s’il existe une telle ligne, et fausse dans le cas contraire.




#include <stdio.h>
//cf voir Perceptron
typedef struct { //type defination, ca cree un alias
    double x, y;
    int label; // +1 = éléphant, -1 = fourmi
} Point; // pt c'est le nom de l'alias


int main(void) {
    int nE; // nombre toit elephant
    int nF; //nombre toit fourmis 
    printf("Nombre de toits d’éléphants : ");
    scanf("%d", &nE);
    printf("Nombre de toits de fourmis : ");
    scanf("%d", &nF);
//Nombre de toits d’éléphants : 1
//Nombre de toits de fourmis : 1

    int n = nE + nF; //nb total de point
    Point pts[n];

    // Lecture des éléphants
    for (int i = 0; i < nE; i++) {
        printf("Coordonnées toit éléphant %d (x y) : ", i+1);
        scanf("%lf %lf", &pts[i].x, &pts[i].y);
        pts[i].label = +1;
    }

    // Lecture des fourmis
    for (int i = 0; i < nF; i++) {
        printf("Coordonnées toit fourmi %d (x y) : ", i+1);
        scanf("%lf %lf", &pts[nE+i].x, &pts[nE+i].y);
        pts[nE+i].label = -1;
    }

    // Perceptron
    double a = 0, b = 0, c = 0;
    int maxIter = 100000;
    int separable = 0;

    for (int iter = 0; iter < maxIter; iter++) {
        int erreur = 0;
        for (int i = 0; i < n; i++) {
            double prod = pts[i].label * (a*pts[i].x + b*pts[i].y + c);
            if (prod <= 0) {
                a += pts[i].label * pts[i].x;
                b += pts[i].label * pts[i].y;
                c += pts[i].label;
                erreur = 1;
            }
        }
        if (!erreur) {
            separable = 1;
            break;
        }
    }

    if (separable)
        printf("VRAI : une ligne peut séparer les éléphants et les fourmis.\n");
    else
        printf("FAUX : impossible de tracer une telle ligne.\n");

    return 0;
}
//Nombre de toits d’éléphants : 1       
//Nombre de toits de fourmis : 1
//Coordonnées toit éléphant 1 (x y) : 10 10
//Coordonnées toit fourmi 1 (x y) : 1 2
//VRAI : une ligne peut séparer les éléphants et les fourmis.

*/
#include <stdio.h>
#include <stdbool.h>

// Fonction pour vérifier si tous les points d'un ensemble sont du même côté d'une ligne
// La ligne passe par (x1,y1) et (x2,y2)
// Retourne 1 si tous les points sont du même côté, 0 sinon
bool tous_meme_cote(double x1, double y1, double x2, double y2, double px, double py, int nb_points) {
    if (nb_points == 0) return true;
    
    // Calculer le produit vectoriel pour le premier point pour déterminer le côté
    double premier_produit = (x2 - x1) * (py - y1) - (y2 - y1) * (px - x1);
    bool premier_positif = premier_produit > 0;
    
    // Demander les autres points et vérifier qu'ils sont du même côté
    for (int i = 1; i < nb_points; i++) {
        printf("Point %d: ", i + 1);
        scanf("%lf %lf", &px, &py);
        
        double produit = (x2 - x1) * (py - y1) - (y2 - y1) * (px - x1);
        bool positif = produit > 0;
        
        if (positif != premier_positif) {
            // Consommer les points restants pour ne pas perturber l'entrée
            for (int j = i + 1; j < nb_points; j++) {
                scanf("%lf %lf", &px, &py);
            }
            return false;
        }
    }
    return true;
}

bool tester_ligne_separatrice() {
    int nb_elephants, nb_fourmis;
    
    printf("Nombre d'éléphants: ");
    scanf("%d", &nb_elephants);
    printf("Nombre de fourmis: ");
    scanf("%d", &nb_fourmis);
    
    if (nb_elephants == 0 || nb_fourmis == 0) {
        // Cas trivial : s'il n'y a qu'un seul type, la séparation est toujours possible
        return true;
    }
    
    // Lire le premier éléphant
    printf("Premier éléphant: ");
    double ex1, ey1;
    scanf("%lf %lf", &ex1, &ey1);
    
    // Lire le premier fourmi
    printf("Première fourmi: ");
    double fx1, fy1;
    scanf("%lf %lf", &fx1, &fy1);
    
    // Tester la ligne qui passe par le premier éléphant et la première fourmi
    printf("Vérification des autres éléphants:\n");
    if (!tous_meme_cote(ex1, ey1, fx1, fy1, ex1, ey1, nb_elephants - 1)) {
        // Consommer les fourmis restantes
        double dummy_x, dummy_y;
        for (int i = 1; i < nb_fourmis; i++) {
            scanf("%lf %lf", &dummy_x, &dummy_y);
        }
        return false;
    }
    
    printf("Vérification des autres fourmis:\n");
    return tous_meme_cote(ex1, ey1, fx1, fy1, fx1, fy1, nb_fourmis - 1);
}

int main() {
    printf("=== Problème de séparation Éléphants-Fourmis ===\n");
    printf("Entrez les coordonnées des toits (x y avec x>0, y>0):\n");
    
    if (tester_ligne_separatrice()) {
        printf("\nRésultat: VRAI - Une ligne de séparation existe!\n");
        return 0;
    } else {
        printf("\nRésultat: FAUX - Aucune ligne de séparation possible.\n");
        return 1;
    }
}