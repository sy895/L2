/*
//exercice1
//Ecrire un programme C qui aﬃcherait la taille mémoire occupée par p et p1.
//• Que faut-il conclure ?
#include <stdio.h>
int main (void)
{
    int *p;
    double *p1;
    printf("La taille mémoire occupée par p est %zu ", sizeof(p)); //zu ->pour size_t
    printf("La taille mémoire occupée par p1 est %zu ", sizeof(p1));//zu ->pour size_t
    return(0);
}
//La taille mémoire occupée par p est 8 La taille mémoire occupée par p1 est 8 %  
//conclusion : Sur la plupart des machines 64 bits, tu auras 8 pour les deux.
//Donc la taille d’un pointeur ne dépend pas du type vers lequel il pointe

//exercice2
Compléter la ligne 8 du programme suivant (en remplissant les ....). Ce programme convertit une lettre majus-
cule (resp. minuscule) en une lettre minuscule (resp. majuscule). On suppose que l’utilisateur saisit soit une
lettre majuscule soit une lettre minuscule.

#include <stdio.h>
int main(void) {
    char car;
    printf("\nMerci d’introduire une lettre majuscule ou minuscule: ");
    scanf("%c", &car);
    printf("\nLa conversion (majuscule vs minuscule) de %c donne %c.\n",
           car, (car >= 'A' && car <= 'Z') ? 'a' - 'A' : car - ('a'-'A')); //opérateur ternaire
           //(condition) ? valeur_si_vrai : valeur_si_faux;
    return 0;
}

//Merci d’introduire une lettre majuscule ou minuscule: a
// La conversion (majuscule vs minuscule) de a donne A.




//exercice3

Qu’aﬃche le programme C suivant :

#include <stdio.h>
int main (void)
{
int *p=(int *) 0x100a; //déclare un pointeur et le transmet à une adresse hexadecimal nouvelle
double *p1=(double *) 0x200b;//déclare un pointeur et le transmet à une adresse hexadecimal nouvelle
printf ("%d \n",sizeof(p1) > sizeof(p)); // booléen et false pcq la réalité serait sizeof(p1) == sizeof(p)
printf ("%p \n",p+1);
printf ("%p \n",p1+1);
return(0);
}

//0 (explication en com)

//0x100e 
// sizeof(int) = 4.
// a+4 = e

//0x2013 
// pour double c'est 8 le sizeof(double)=8
// donc 0x200b + 8 = 0x2013




//exercice 4
Écrire un programme en langage C qui lit un entier positif n et aﬃche sa forme binaire en utilisant
uniquement des opérations bit à bit.
Quelques remarques :
– Dans un premier temps, il est demandé d’aﬃcher la représentation binaire de n de manière inversée.
Par exemple, si l’utilisateur entre 14, sa représentation binaire est 1110, mais le programme doit
aﬃcher 0111. Il n’est pas demandé d’aﬃcher les zéros non significatifs.
– Si l’utilisateur ne saisit pas un entier valide, le programme doit aﬃcher un message d’erreur et
s’arrêter en renvoyant un code d’erreur return 1.
– On gardera en tête que n est un entier non signé. Chaque fois qu’une constante entière est utilisée
dans une expression impliquant la variable n (par exemple 0ou 1), elle devra être écrite avec le suﬃxe
u pour indiquer qu’il s’agit d’une constante de type unsigned int.
– L’aﬃchage des bits doit se faire exclusivement avec l’instruction putchar(). L’utilisation de printf()
n’est pas autorisée pour l’impression des bits (sauf éventuellement pour le message d’erreur ou pour
la demande de saisie d’un entier positif). Une fois tous les bits aﬃchés, le programme doit ajouter
un retour à la ligne également via putchar.



   

#include <stdio.h>
int main(void) {
unsigned int n; 
printf("Entrez un entier positif : ");
if (scanf("%u", &n) != 1) { // si c'est pas true
printf("Erreur : saisie invalide\n");
return 1;
}
    if (n == 0u) {
    putchar('0');
    putchar('\n');
    return 0;
    }
        
        while (n != 0u) { // 
            if ((n & 1u) == 1u) {
                putchar('1'); // on compare n avec 0001 en binaire et si c'est equialent
            } else {
                putchar('0');
            }
            n = n >> 1u;
        }
        putchar('\n');
        return 0; 
    }

//Entrez un entier positif : 21
//10101
//cf cours : putchar contrairement à printf écrit un seul caractère 


 

Exercice 5:

Ecrire une fonction C, appelée miroir, qui prend en paramètre un entier et retourne son entier miroir. Par
exemple, si le paramètre est égal à 3425 la fonction retournera 5243.


#include <stdio.h>
signed int miroir(signed int n) {
    signed int res = 0;
    
    while (n != 0) { // tant que j est différent de 0 parce que 
        res = res * 10 + n % 10;
        n = n / 10;
    }
    return res;
}


int main() {
    int nombre = 3425; 
    printf("Miroir de %d : %d\n", nombre, miroir(nombre));
    return 0;
}

//Miroir de 3425 : 5243





//exercice 6

Écrire un programme en C qui lit, caractère par caractère, une séquence de bits se terminant par un retour à la
ligne, puis convertit cette séquence en un entier positif. Nous utiliserons les opérations bit à bit pour résoudre
cet exercice.
Par exemple, si l’utilisateur entre la séquence 1110 (d’abord 1, puis 1, puis 1 et enfin 0), le programme aﬃchera
le nombre 14.
Le programme aﬃchera une erreur si un caractère diﬀérent de "0" ou "1" est rentré.




#include <stdio.h>
int main(void) {
    int c;
    int res = 0;                  
    printf("Veuillez rentrer une séquence de 0 et 1, puis Entrée :\n");
    while ((c = getchar()) != '\n' && c != EOF) { //avce gc on prends un caratère et on compare,,eof = end of file, (-1) renvoyé quand il n'y a plus rien à lire
        if (c != '0' && c != '1') { //on veut du binaire donc que ça 
            printf("Erreur : uniquement des 0 et des 1 autorisés.\n");
            return 1; //faute
        }
        res = (res << 1) | (c - '0'); // la barre c'est le ou binaire 
    }
    printf("Valeur décimale : %d\n", res);
    return 0;
}
//Veuillez rentrer une séquence de 0 et 1, puis Entrée :
//0101010
//Valeur décimale : 42

//exercice 7

On a demandé à un étudiant d’écrire un programme C qui :
• lit un nombre positif ou nul n qui est inférieur ou égal à 8 (on lui a demandé d’utiliser la boucle do ...
while pour avoir la bonne valeur de n), et
• aﬃche la valeur lu.
L’étudiant a écrit le programme suivant :



#include <stdio.h>
int main (void) {
unsigned int n;
do {
printf("\nMerci d’introduire un nombre positif ou nul :");
scanf("%u", &n);
} while ((n < 0 || n > 8));
printf ("Le nombre lu est : %u\n", n);
return(0);
}

//en exécutant son code faux j'ai
//Merci d’introduire un nombre positif ou nul :7 
//Le nombre lu est : 1





//Exercice 8


Écrire un programme en C qui lit un ensemble de lettres minuscules et génère tous les sous-ensembles possibles,
puis les aﬃche.
• L’ensemble en entrée est lu caractère par caractère, commençant par ’{’, suivie de lettres minuscules
consécutives à partir de ’a’ et séparées par des virgules, se terminant par ’}’.
• Pour simplifier, les lettres sont supposées se suivre de manière consécutive.
• L’utilisation de tableaux n’est pas autorisée, mais les opérateurs bit à bit peuvent être utilisés pour
mémoriser et manipuler les données.
• Nous supposons que l’utilisateur respecte bien le format en entrée

Exemple :
Si l’utilisateur entre l’ensemble {a, b, c}, le programme devra aﬃcher les sous-ensembles suivants (l’ordre
d’aﬃchage des sous-ensembles n’est pas pertinent) :


{}
{a}
{b}
{c}
{a, b}
{a, c}
{b, c}
{a, b, c}



#include <stdio.h>

int main() {
    char c;
    int ensemble = 0;  // Stocke les lettres en bits
    int nb_lettres = 0;
    printf("Entrez l'ensemble : ");
    scanf(" %c", &c);  // Lit '{'
    while (1) {
        scanf(" %c", &c);
        
        if (c == '}') {
            break;
        }
        
        if (c >= 'a' && c <= 'z') {
            int position = c - 'a';
            ensemble = ensemble | (1 << position);  // Active le bit correspondant
            nb_lettres++;
        }
    }
    
    // Génération de tous les sous-ensembles
    int nb_sous_ensembles = 1 << nb_lettres;  // 2^nb_lettres
    
    printf("\nSous-ensembles :\n");
    
    for (int i = 0; i < nb_sous_ensembles; i++) {
        printf("{");
        int premier = 1;
        
        for (int j = 0; j < nb_lettres; j++) {
            // Vérifie si le bit j est activé dans i
            if (i & (1 << j)) {
                if (!premier) {
                    printf(", ");
                }
                // Trouve la lettre correspondante dans ensemble
                int compteur = 0;
                for (int k = 0; k < 26; k++) {
                    if (ensemble & (1 << k)) {
                        if (compteur == j) {
                            printf("%c", 'a' + k);
                            break;
                        }
                        compteur++;
                    }
                }
                premier = 0;
            }
        }
        printf("}\n");
    }
    
    return 0;
}

//Entrez l'ensemble : {a,b,c}
//Sous-ensembles :
//{}
//{a}
//{b}
//{a, b}
//{c}
//{a, c}
//{b, c}
//{a, b, c}


//exercice 9

Ecrire un programme C qui réalise le jeu du juste prix. Il s’agit de deviner, au bout d’un certain nombre d’essais,
le prix d’un produit.
La valeur mystère du juste prix est générée aléatoirement. Pour cela, utiliser les deux instructions suivantes
:
srand(time(NULL));
variable = rand() ;
rand () retourne une valeur entière positive que l’on peut borner grâce à l’opérateur modulo %. Ces deux
instructions nécessitent d’inclure les bibliothèques suivantes :
#include <stdlib.h>
#include <time.h>
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 1
#define MAX 100
#define MAX_ESSAIS 10

static void vider_stdin(void) {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF) {}
}

int main(void) {
    srand((unsigned)time(NULL));
    int secret = MIN + rand() % (MAX - MIN + 1);

    int essais = 0;
    int guess;
    int rc;

    printf("=== Juste Prix ===\n");
    printf("Devine un nombre entre %d et %d. Tu as %d essais.\n\n", MIN, MAX, MAX_ESSAIS);

    while (essais < MAX_ESSAIS) {
        printf("Essai %d/%d — entre un entier: ", essais + 1, MAX_ESSAIS);
        rc = scanf("%d", &guess);
        if (rc != 1) {
            printf("Entrée invalide. Réessaie.\n");
            vider_stdin();
            continue;
        }
        if (guess < MIN || guess > MAX) {
            printf("Hors plage (%d..%d). Réessaie.\n", MIN, MAX);
            continue;
        }

        essais++;

        if (guess == secret) {
            printf("Bravo ! Trouvé en %d essai(s). Le juste prix était %d.\n", essais, secret);
            return 0;
        } else if (guess < secret) {
            printf("Plus grand !\n");
        } else {
            printf("Plus petit !\n");
        }
    }

    printf("\nRaté. Le juste prix était %d.\n", secret);
    return 0;
}

dentelledecharbon@lenf-128-153 TP % ./tp4           
=== Juste Prix ===
Devine un nombre entre 1 et 100. Tu as 10 essais.

Essai 1/10 — entre un entier: 20
Plus grand !
Essai 2/10 — entre un entier: 50
Plus grand !
Essai 3/10 — entre un entier: 80
Plus petit !
Essai 4/10 — entre un entier: 70
Plus petit !
Essai 5/10 — entre un entier: 60
Plus petit !
Essai 6/10 — entre un entier: 55
Plus petit !
Essai 7/10 — entre un entier: 53
Bravo ! Trouvé en 7 essai(s). Le juste prix était 53.
dentelledecharbon@lenf-128-153 TP % 