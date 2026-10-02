/*
Exercice 1:
Ecrire un programme C qui :
• lit un chiﬀre positif (compris entre 0 et 9), et
• aﬃche la table de multiplication (jusqu’à 10) associée à ce chiﬀre.
Par exemple, si le chiﬀre lu est 3 alors le programme aﬃchera :


#include <stdio.h>
int main(void){
unsigned int n;
printf("Rentrez la valeur pour ecrire la table de multiplication:");
scanf("%u", &n);
for (int i = 1; i <= 10; i++){
    printf("%u x %u = %u\n", n, i, n * i);
}
return 0;
}

3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30




Exercice 2:
Écrire une fonction en langage C qui prend en paramètres deux entiers positifs a et b, et qui aﬃche l’ensemble
des chiﬀres qu’ils ont en commun. Si aucun chiﬀre n’est commun, la fonction aﬃchera "Désolé, pas de chiﬀres
en commun". La fonction ne retourne pas de valeur.
Exemples :
• Si a = 19097 et b = 27349, la fonction aﬃchera {7, 9}, car ce sont les seuls deux chiﬀres qui apparaissent
à la fois dans a et b.
• Si a = 2097 et b = 456666, la fonction aﬃchera "Désolé, pas de chiﬀres en commun", car aucun chiﬀre
n’est commun entre a et b.



#include <stdio.h>

void chiffre_commun(unsigned int a, unsigned int b) {
    int nb_communs = 0;
    int premier = 1; // Pour gérer l'affichage des virgules

    for (int chiffre = 0; chiffre < 10; chiffre++) {
        int present_a = 0;
        int present_b = 0;
    
        unsigned int temp_a = a;
        do {
            if (temp_a % 10 == chiffre) {
                present_a = 1;
                break;
            }
            temp_a /= 10;
        } while (temp_a > 0);
        
        // Vérifier si le chiffre est présent dans b
        unsigned int temp_b = b;
        do {
            if (temp_b % 10 == chiffre) {
                present_b = 1;
                break;
            }
            temp_b /= 10;
        } while (temp_b > 0);
        if (present_a && present_b) {
            if (nb_communs == 0) {
                printf("{");
            }
            if (!premier) {
                printf(", ");
            }
            printf("%d", chiffre);
            premier = 0;
            nb_communs++;
        }
    }
    
    if (nb_communs > 0) {
        printf("}\n");
    } else {
        printf("Désolé, pas de chiffres en commun\n");
    }
}

int main(void) {
    unsigned int a, b;
    printf("Rentrer deux entiers positifs : ");
    scanf("%u %u", &a, &b);
    chiffre_commun(a, b);
    return 0;
}


Exercice 3
Écrire une fonction en C qui lit une suite de caractères et retourne 1 si les caractères lus sont triés par ordre
croissant. La fonction retourne 0 sinon. La lecture se fait caractère par caractère où seul getchar() est autorisé.
La saisie se termine par le caractère ’$’, qui ne doit pas être pris en compte dans le traitement. La fonction
n’admet pas d’arguments.
Exemples :
• Si l’utilisateur saisit abeg$, alors la fonction retournera 1.
• Si l’utilisateur saisit DFAZE$, alors la fonction retournera 0.


#include <stdio.h>
int ordre_croissant(void) {
    char courant, precedent;
    int premier = 1;
    while ((courant = getchar()) != '$') {
        if (!premier) {
            if (courant < precedent) {
                return 0;
            }
        } else {
            premier = 0;
        }
        precedent = courant;
    }

    return 1; 
}

int main(void) {
    printf("chaine de caractere avcec un dollar à la fin svp : ");
    if (ordre_croissant()) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}




Exercice 4:
Sans utiliser les opérations bit à bit, écrire une fonction récursive en C qui prend en paramètre un entier positif
nb et retourne le nombre de bits égaux à 1 dans sa représentation binaire. Par exemple, pour l’entier passé en
paramètre 14, qui s’écrit 1110 en binaire, la fonction doit retourner 3.

//tp5 aussi 





#include <stdio.h>

int compter(unsigned int nb) {
    if (nb == 0)
        return 0;
    return (nb % 2) + compter(nb / 2);
}

int main(void) {
    unsigned int nb;
    printf("Veuillez rentrer un entier positif : ");
    if (scanf("%u", &nb) != 1) {
        printf("Entrée invalide.\n");
        return 1;
    }

    int resultat = compter(nb);
    printf("Le nombre de bits égaux à 1 dans %u est : %d\n", nb, resultat);

    return 0;
}





en utilisant les opérateurs bit à bir écrire une fonction quibit caractère  par caractère (avec getchar() ), une suite de lettre majuscules toutes différentes et qui se termiane par '$'et les affiche par ordre decroissant ex  AZEB$ -> ZEBA

Exercice 5:
Considérons de nouveau la fonction "absolu" et son utilisation dans le main.




#include <stdio.h>
int absolu (int a)
{
if (a<0)
return -a;
else return a;
}


int main (void)
{
int absolu (int a);
int i=-20;
printf ("La valeur absolue de i est : %d.\n ", absolu(i));
return(0);
}

La valeur absolue de i est : 20.

verialble lettre 0 

variable 1=1
lettre = lettre ou un je decale 
si 1 egal à 1 j'imprile si,on non 
prendre entier stokce à chaque fois qu'on rencojntre 1 on parcours et on affiche o u acec une barre 
*/
int quibit (char depart){
    char depart =1 ;
    char lettre = 0  ; 
    while ((depart = getchar()) != '$') { 
         lettre =lettre | (depart << (depart - 'A')) ; 
    }
    for (int i=0 ; i <26 ; i++) {
        if (lettre & 1) {
            putchar('A'+i) ;
        }
        lettre = lettre >> 1
    }
}



int main (void) {
char depart ;
printf("ENtrez une chaine de caractère"),
scanf("%c", &depart);

int res = quibit(depart);
printf("le resultat inversé est %c", res);

return 0;
}





