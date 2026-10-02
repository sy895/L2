// recrursif donc pas de while, fin il peut y avor mais pas dans ce cas
//l'utilisateur rentre 4 et il obtient 12 convertion bianire to decimale
/*
Exercice 1:
• Dites dans quel ordre les instructions suivantes, associées à une boucle for, sont exécutées :
#include <stdio.h>
int main (void)
{
for (instructions 1; instructions 2; instructions 3)
{
    instuctions 4
}

return(0);
}
// 1 → 2 → 4 → 3 → 2 → 4 → 3 → 2 → (faux) → fin


• Est-il possible de modifier le programme ci-dessous afin de confirmer l’ordre d’exécution des instructions
de la boucle "for".

#include <stdio.h>
int main (void)
{
int i;
for (i=0; i!=5; i++)
{
    printf("2 : condition vérifiée (i=%d)\n", i);
    printf("4 : corps de la boucle (i=%d)\n", i);
    printf("3 : incrémentation va être exécutée\n");
    
}
printf ("La valeur de i est %d :\n", i);
return(0);
}

2 : condition vérifiée (i=0)
4 : corps de la boucle (i=0)
3 : incrémentation va être exécutée
2 : condition vérifiée (i=1)
4 : corps de la boucle (i=1)
3 : incrémentation va être exécutée
2 : condition vérifiée (i=2)
4 : corps de la boucle (i=2)
3 : incrémentation va être exécutée
2 : condition vérifiée (i=3)
4 : corps de la boucle (i=3)
3 : incrémentation va être exécutée
2 : condition vérifiée (i=4)
4 : corps de la boucle (i=4)
3 : incrémentation va être exécutée
La valeur de i est 5 :



Exercice 2
En utilisant les opérations bit à bit, écrire une fonction itérative en C qui prend en paramètre un entier positif
nb et retourne le nombre de bits égaux à 1 dans sa représentation binaire. Par exemple, pour l’entier passé en
paramètre 14, qui s’écrit 1110 en binaire, la fonction doit retourner 3.

#include <stdio.h>
int compter(unsigned int nb) {
    int cpt = 0;
    while (nb > 0) {
        if (nb & 1) {// Teste si le bit de poids faible est 1
            cpt++;
        }
        nb = nb >> 1;// Décale les bits d’un cran vers la droite
    }
    return cpt;
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

//Veuillez rentrer un entier positif : 12
//Le nombre de bits égaux à 1 dans 12 est : 2


Exercice 3
En utilisant les opérations bit à bit, écrire une fonction récursive en C qui prend en paramètre un entier positif
nb et retourne 1 si le nombre passé en paramètre est une puissance de 2. La fonction retourne 0 sinon. Par
exemple, si l’entier passé en paramètre est 14, alors la fonction retournera 0. Par contre, si l’entier passé en
paramètre est 16, aloùrs la fonction retournera 1




#include <stdio.h>  //
int est_puissance(unsigned int nb) {
    if (nb == 1) {
        return 1;
    }
    if (nb == 0 || (nb & 1)) {
        return 0;
    }
    return est_puissance(nb >> 1);
}


//version prof

int ispower (int n){
if (n==0) return 0;
else {
if (n&1)}

}
int main(void) {
    unsigned int nb;
    printf("Veuillez rentrer un nb positif : ");  
    if (scanf("%u", &nb) != 1) {
        printf("Erreur\n");
        return 1;
    }

    int resultat = est_puissance(nb);
    if (resultat) {
        printf("%u est une puissance de 2.\n", nb);  
    } else {
        printf("%u n'est pas une puissance de 2.\n", nb);
    }
    return 0;
}

//Veuillez rentrer un nb positif : 16
//16 est une puissance de 2.



//exercice 4

//Que fait le programme suivant, justifier votre réponse.
//il donne l'ecriture ascii correspondante sans s'arrêter


#include <stdio.h>
int main (void)
{
unsigned char i;
unsigned short int j=256;
for (i=0; i!=j; i++)
{
}
return(0);
}

Le caractère numéro 0 est :  
Le caractère numéro 1 est :  
Le caractère numéro 2 est :  
Le caractère numéro 3 est :  
Le caractère numéro 4 est :  
Le caractère numéro 5 est :  
Le caractère numéro 6 est :  
Le caractère numéro 7 est :  
Le caractère numéro 8 est : 
Le caractère numéro 9 est : 	 
Le caractère numéro 10 est : 
 
Le caractère numéro 11 est : 
                              
Le caractère numéro 12 est : 
                              
 e caractère numéro 13 est : 
Le caractère numéro 14 est :  
Le caractère numéro 15 est :  
Le caractère numéro 16 est :  
Le caractère numéro 17 est :  
Le caractère numéro 18 est :  
Le caractère numéro 19 est :  
Le caractère numéro 20 est :  
Le caractère numéro 21 est :  
Le caractère numéro 22 est :  
Le caractère numéro 23 est :  
Le caractère numéro 24 est :  
Le caractère numéro 25 est :  
Le caractère numéro 26 est :  
Le caractère numéro 27 est : 
Le caractère numéro 28 est :  
Le caractère numéro 29 est :  
Le caractère numéro 30 est :  
Le caractère numéro 31 est :  
Le caractère numéro 32 est :   
Le caractère numéro 33 est : ! 
Le caractère numéro 34 est : " 
Le caractère numéro 35 est : # 
Le caractère numéro 36 est : $ 
Le caractère numéro 37 est : % 
Le caractère numéro 38 est : & 
Le caractère numéro 39 est : ' 
Le caractère numéro 40 est : ( 
Le caractère numéro 41 est : ) 
Le caractère numéro 42 est : * 
Le caractère numéro 43 est : + 
Le caractère numéro 44 est : , 
Le caractère numéro 45 est : - 
Le caractère numéro 46 est : . 
Le caractère numéro 47 est : / 
Le caractère numéro 48 est : 0 
Le caractère numéro 49 est : 1 
Le caractère numéro 50 est : 2 
Le caractère numéro 51 est : 3 
Le caractère numéro 52 est : 4 
Le caractère numéro 53 est : 5 
Le caractère numéro 54 est : 6 
Le caractère numéro 55 est : 7 
Le caractère numéro 56 est : 8 
Le caractère numéro 57 est : 9 
Le caractère numéro 58 est : : 
Le caractère numéro 59 est : ; 
Le caractère numéro 60 est : < 
Le caractère numéro 61 est : = 
Le caractère numéro 62 est : > 
Le caractère numéro 63 est : ? 
Le caractère numéro 64 est : @ 
Le caractère numéro 65 est : A 
Le caractère numéro 66 est : B 
Le caractère numéro 67 est : C 
Le caractère numéro 68 est : D 
Le caractère numéro 69 est : E 
Le caractère numéro 70 est : F 
Le caractère numéro 71 est : G 
Le caractère numéro 72 est : H 
Le caractère numéro 73 est : I 
Le caractère numéro 74 est : J 
Le caractère numéro 75 est : K 
Le caractère numéro 76 est : L 
Le caractère numéro 77 est : M 
Le caractère numéro 78 est : N 
Le caractère numéro 79 est : O 
Le caractère numéro 80 est : P 
Le caractère numéro 81 est : Q 
Le caractère numéro 82 est : R 
Le caractère numéro 83 est : S 
Le caractère numéro 84 est : T 
Le caractère numéro 85 est : U 
Le caractère numéro 86 est : V 
Le caractère numéro 87 est : W 
Le caractère numéro 88 est : X 
Le caractère numéro 89 est : Y 
Le caractère numéro 90 est : Z 
Le caractère numéro 91 est : [ 
Le caractère numéro 92 est : \ 
Le caractère numéro 93 est : ] 
Le caractère numéro 94 est : ^ 
Le caractère numéro 95 est : _ 
Le caractère numéro 96 est : ` 
Le caractère numéro 97 est : a 
Le caractère numéro 98 est : b 
Le caractère numéro 99 est : c 
Le caractère numéro 100 est : d 
Le caractère numéro 101 est : e 
Le caractère numéro 102 est : f 
Le caractère numéro 103 est : g 
Le caractère numéro 104 est : h 
Le caractère numéro 105 est : i 
Le caractère numéro 106 est : j 
Le caractère numéro 107 est : k 
Le caractère numéro 108 est : l 
Le caractère numéro 109 est : m 
Le caractère numéro 110 est : n 
Le caractère numéro 111 est : o 
Le caractère numéro 112 est : p 
Le caractère numéro 113 est : q 
Le caractère numéro 114 est : r 
Le caractère numéro 115 est : s 
Le caractère numéro 116 est : t 
Le caractère numéro 117 est : u 
Le caractère numéro 118 est : v 
Le caractère numéro 119 est : w 
Le caractère numéro 120 est : x 
Le caractère numéro 121 est : y 
Le caractère numéro 122 est : z 
Le caractère numéro 123 est : { 
Le caractère numéro 124 est : | 
Le caractère numéro 125 est : } 
Le caractère numéro 126 est : ~ 
Le caractère numéro 127 est :  
Le caractère numéro 128 est : ? 
Le caractère numéro 129 est : ? 
Le caractère numéro 130 est : ? 
Le caractère numéro 131 est : ? 
Le caractère numéro 132 est : ? 
Le caractère numéro 133 est : ? 
Le caractère numéro 134 est : ? 
Le caractère numéro 135 est : ? 
Le caractère numéro 136 est : ? 
Le caractère numéro 137 est : ? 
Le caractère numéro 138 est : ? 
Le caractère numéro 139 est : ? 
Le caractère numéro 140 est : ? 
Le caractère numéro 141 est : ? 
Le caractère numéro 142 est : ? 
Le caractère numéro 143 est : ? 
Le caractère numéro 144 est : ? 
Le caractère numéro 145 est : ? 
Le caractère numéro 146 est : ? 
Le caractère numéro 147 est : ? 
Le caractère numéro 148 est : ? 
Le caractère numéro 149 est : ? 
Le caractère numéro 150 est : ? 
Le caractère numéro 151 est : ? 
Le caractère numéro 152 est : ? 
Le caractère numéro 153 est : ? 
Le caractère numéro 154 est : ? 
Le caractère numéro 155 est : ? 
Le caractère numéro 156 est : ? 
Le caractère numéro 157 est : ? 
Le caractère numéro 158 est : ? 
Le caractère numéro 159 est : ? 
Le caractère numéro 160 est : ? 
Le caractère numéro 161 est : ? 
Le caractère numéro 162 est : ? 
Le caractère numéro 163 est : ? 
Le caractère numéro 164 est : ? 
Le caractère numéro 165 est : ? 
Le caractère numéro 166 est : ? 
Le caractère numéro 167 est : ? 
Le caractère numéro 168 est : ? 
Le caractère numéro 169 est : ? 
Le caractère numéro 170 est : ? 
Le caractère numéro 171 est : ? 
Le caractère numéro 172 est : ? 
Le caractère numéro 173 est : ? 
Le caractère numéro 174 est : ? 
Le caractère numéro 175 est : ? 
Le caractère numéro 176 est : ? 
Le caractère numéro 177 est : ? 
Le caractère numéro 178 est : ? 
Le caractère numéro 179 est : ? 
Le caractère numéro 180 est : ? 
Le caractère numéro 181 est : ? 
Le caractère numéro 182 est : ? 
Le caractère numéro 183 est : ? 
Le caractère numéro 184 est : ? 
Le caractère numéro 185 est : ? 
Le caractère numéro 186 est : ? 
Le caractère numéro 187 est : ? 
Le caractère numéro 188 est : ? 
Le caractère numéro 189 est : ? 
Le caractère numéro 190 est : ? 
Le caractère numéro 191 est : ? 
Le caractère numéro 192 est : ? 
Le caractère numéro 193 est : ? 
Le caractère numéro 194 est : ? 
Le caractère numéro 195 est : ? 
Le caractère numéro 196 est : ? 
Le caractère numéro 197 est : ? 
Le caractère numéro 198 est : ? 
Le caractère numéro 199 est : ? 
Le caractère numéro 200 est : ? 
Le caractère numéro 201 est : ? 
Le caractère numéro 202 est : ? 
Le caractère numéro 203 est : ? 
Le caractère numéro 204 est : ? 
Le caractère numéro 205 est : ? 
Le caractère numéro 206 est : ? 
Le caractère numéro 207 est : ? 
Le caractère numéro 208 est : ? 
Le caractère numéro 209 est : ? 
Le caractère numéro 210 est : ? 
Le caractère numéro 211 est : ? 
Le caractère numéro 212 est : ? 
Le caractère numéro 213 est : ? 
Le caractère numéro 214 est : ? 
Le caractère numéro 215 est : ? 
Le caractère numéro 216 est : ? 
Le caractère numéro 217 est : ? 
Le caractère numéro 218 est : ? 
Le caractère numéro 219 est : ? 
Le caractère numéro 220 est : ? 
Le caractère numéro 221 est : ? 
Le caractère numéro 222 est : ? 
Le caractère numéro 223 est : ? 
Le caractère numéro 224 est : ? 
Le caractère numéro 225 est : ? 
Le caractère numéro 226 est : ? 
Le caractère numéro 227 est : ? 
Le caractère numéro 228 est : ? 
Le caractère numéro 229 est : ? 
Le caractère numéro 230 est : ? 
Le caractère numéro 231 est : ? 
Le caractère numéro 232 est : ? 
Le caractère numéro 233 est : ? 
Le caractère numéro 234 est : ? 
Le caractère numéro 235 est : ? 
Le caractère numéro 236 est : ? 
Le caractère numéro 237 est : ? 
Le caractère numéro 238 est : ? 
Le caractère numéro 239 est : ? 
Le caractère numéro 240 est : ? 
Le caractère numéro 241 est : ? 
Le caractère numéro 242 est : ? 
Le caractère numéro 243 est : ? 
Le caractère numéro 244 est : ? 
Le caractère numéro 245 est : ? 
Le caractère numéro 246 est : ? 
Le caractère numéro 247 est : ? 
Le caractère numéro 248 est : ? 
Le caractère numéro 249 est : ? 
Le caractère numéro 250 est : ? 
Le caractère numéro 251 est : ? 
Le caractère numéro 252 est : ? 
Le caractère numéro 253 est : ? 
Le caractère numéro 254 est : ? 
Le caractère numéro 255 est : ? 



//exercice  5

Ecrire une fonction C qui prend en paramètres un chiﬀre c et un entier positif n et retourne le nombre de fois
que le chiﬀre c est présent dans les nombres entre 0 et n. Par exemple, si c=7 et n=100, alors la fonction
retournera 20 (car il y a 20 fois le chiﬀre 7 dans les nombres compris entre 0 et 100).



#include <stdio.h>
int nombre_chiffre(unsigned int c, unsigned int n) {
    int compteur = 0;
    for (unsigned int i = 0; i <= n; i++) {
        unsigned int nombre = i;
        do {
            if (nombre % 10 == c) { //%10 -> donne le dernier nb 
                compteur++;
            }
            nombre /= 10; //supp le dernier chiffre du nb 
        } while (nombre > 0);
    }
    
    return compteur;
}

int main(void) {
    unsigned int c, n;
    printf("Entrez le chiffre à chercher (0-9) : ");
    if (scanf("%u", &c) != 1 || c > 9) {
        printf("Erreur : veuillez entrer un chiffre valide (0-9)\n");
        return 1;
    }
    printf("Entrez la limite n : ");
    if (scanf("%u", &n) != 1) {
        printf("Erreur : veuillez entrer un entier positif\n");
        return 1;
    }
    int res = nombre_chiffre(c, n);
    printf("Le chiffre %u apparaît %d fois entre 0 et %u\n", c, res, n);
    return 0;
}

//Entrez le chiffre à chercher (0-9) : 3
//Entrez la limite n : 100
//Le chiffre 3 apparaît 20 fois entre 0 et 100


exercice 6
Cet exercice (d’intérêt pédagogique seulement) montre que l’on peut utiliser plusieurs indirections imbriquées.
Compléter le programme suivant pour aﬃcher la valeur de i, en utilisant uniquement la variable pointeur


#include <stdio.h>
int main (void)
{
int i=-20;
int *p1;
int **p2;
int ***p3;
int ****p4;

p1=&i;
p2=&p1;
p3=&p2;
p4=&p3;

printf ("La valeur de i est : %d.\n ", ****p4);
return(0);
}
****p4 ≡ *(*(*(*p4))) → ça retombe sur i.

La valeur de i est : -20. 




//exercice 7
Les séquences suivantes sont connues sous le nom de suites de Conway :
Chaque séquence i (avec i >= 2), représentée par un long entier positif, est obtenue depuis la séquence (i 1)
en comptant chaque occurrence des chiﬀres (1,2,3), puis on imprime le nombre d’occurrences et l’occurrence en
question.
Par exemple, supposons que l’on part de "1211". Nous avons "une occurrence de 1", "une occurrence de 2"
et "deux occurrences de 1", ce qui donne : "111221" comme séquence successeur de "1211".
Les suites de conway sont uniquement composées des chiﬀres 1, 2 et 3 (si le point de départ est 1).
Ecrire une fonction C qui a l’entête suivante :

unsigned long int suivant (unsigned long int s)

Cette fonction prend en paramètre un entier positif qui représente une séquence de conway donnée et retourne
la séquence suivante.




#include <stdio.h>
unsigned long int inverser(unsigned long int n) {
    unsigned long int resultat = 0;
    while (n > 0) {
        resultat = resultat * 10 + (n % 10); //dernier chiffre
        n /= 10; //su^primer dernier chiffre 
    }
    return resultat;
}

unsigned long int suivant(unsigned long int s) {  // Inverser le nombre pour le lire de gauche à droite pcq onn lit de droite à gauche
    s = inverser(s);
    unsigned long int resultat = 0;
    while (s > 0) {
        int chiffre_actuel = s % 10;
        int compteur = 1;
        s /= 10;
        
        // Compter les occurrences consécutives du même chiffre
        while (s > 0 && s % 10 == chiffre_actuel) {
            compteur++;
            s /= 10;
        }
        
        // Ajouter "compteur" puis "chiffre_actuel" au résultat
        resultat = resultat * 10 + chiffre_actuel;
        resultat = resultat * 10 + compteur;
    }
    return inverser(resultat); //Inverser le résultat pour avoir l'ordre correct
}

int main(void) {
    unsigned long int s;
    printf("Entrez une séquence de Conway : ");
    if (scanf("%lu", &s) != 1) {
        printf("Erreur de saisie\n");
        return 1;
    }
    
    printf("\nSéquence de départ : %lu\n", s);
    for (int i = 1; i <= 8; i++) {  // Générer et afficher les 10 premières séquences
        s = suivant(s);
        printf("Séquence %2d : %lu\n", i, s);
    }
    
    return 0;
}
Entrez une séquence de Conway : 1211

Séquence de départ : 1211
Séquence  1 : 211211
Séquence  2 : 21122112
Séquence  3 : 1221222112
Séquence  4 : 122132112211
Séquence  5 : 2122211213112211
Séquence  6 : 6950751247318655662
Séquence  7 : 4028176447037358661
Séquence  8 : 973554774910360041





//exercice 3, version prof
#include <stdio.h>
int ispower (int n){
    if (n==0) return 0;
    else {
    if (n&1) return ((n>>1 == 0));
        else return ispower (n>>1);
}
    
    }

int main(void) {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    if (ispower(n))
        printf("%d est une puissance de 2.\n", n);
        else
            printf("%d n'est pas une puissance de 2.\n", n);
    
        return 0;
    }

//Entrez un entier : 12
//12 n'est pas une puissance de 2.




//exercice 8
On souhaiterait réaliser des divisions réelles avec une précision (nombre de chiﬀres après la virgule) fixée par
l’utilisateur.
• Ecrire une fonction C qui a l’entête suivante :
void diviser (int p, int q, int precision)
Elle consiste à imprimer le résultat de la division de p sur q avec une précision égale à "precision". La
fonction ne retourne aucune valeur. Par exemple, la fonction appelée avec les paramètres (1, 97, 1000)
imprimera:
0.0103092783505154639175257731958762886597938144329896907216494845360824742268041237
113402061855670103092783505154639175257731958762886597938144329896907216494845360824
742268041237113402061855670103092783505154639175257731958762886597938144329896907216
494845360824742268041237113402061855670103092783505154639175257731958762886597938144
3298969072164948453608247422680412371134020618556701030927835051546391752577319587628
8659793814432989690721649484536082474226804123711340206185567010309278350515463917525
77319587628865979381443298969072164948453608247422680412371134020618556701030927835051
5463917525773195876288659793814432989690721649484536082474226804123711340206185567010
30927835051546391752577319587628865979381443298969072164948453608247422680412371134020
61855670103092783505154639175257731958762886597938144329896907216494845360824742268041
23711340206185567010309278350515463917525773195876288659793814432989690721649484536082
4742268041237113402061855670103092783505154639175257731958762886597
Remarque : La fonction division et de type void et elle ne retourne aucune valeur; ce qui signifie que l’on
ne vous demande pas de retourner le résultat de la division. Par ailleurs, il n’est pas nécessaire de stocker
le résultat de la division dans un tableau. Ce qui est demandé est un simple aﬃchage du résultat de la
division (et l’aﬃchage peut se faire chiﬀre par chiﬀre). Attention le %.xf ne permettra pas de répondre de
manière satisfaisante à la question.
• Tester votre fonction depuis le programme main.
/ici
#include <stdio.h>

unsigned int creer_n_bits(unsigned int n) {
    unsigned int res = 0;
    for (unsigned int i = 0; i < n; i++) {
        res = res << 1;  // Décalage à gauche
        res = res | 1;    // Ajouter un 1 en position la plus faible
    }
    return res;
}

int main(void) {
    unsigned int n;
    printf("Rentrez une valeur positive: ");
    
    if (scanf("%u", &n) != 1) {
        printf("Veuillez rentrer des valeurs positives\n");
        return 1;
    }
    
    unsigned int resultat = creer_n_bits(n);
    printf("Nombre avec %u bits à 1: %u (0x%X)\n", n, resultat, resultat);
    
    return 0;
}

#include <stdio.h>
void diviser (int p, int q, int precision) {
    unsigned int quotient;
    unsigned int reste;
    unsigned int res;

}
else 
while (q>0) {
    if (p == q) { //cas où les nb sont équivalents
       printf ("1");
    else{
        reste = p % q ;
        res = p/q;





    }

}




int main (void){
int p,q,precision;

    }
    else{
}
return 0;
}
}$


#include <stdio.h>
#include <math.h>

int main(void) {
    double x = exp(1000);
    if (x == HUGE_VAL) {
        printf("test\n");
    } else {
        printf("test : %f\n", x);
    }
    return 0;
}

ecrire une fonction en c qui prends en parametre un entier positif n et retourne un nb qui contient exactement n '1' dans les bits ls plus faibles
garde ma mehode à base de decaler gauche oboucle
*/


#include <stdio.h>

int exo(unsigned int n) {
    unsigned int res = 0;
    for (int i = 0; i < n; i++) {
        res = res << 1;
        res = res | 1;
    }
    return res;
}

int main(void) {
    unsigned int n;
    printf("veuillez donner un entier: ");
    scanf("%u", &n);

    unsigned int resultat = exo(n);
    printf("rep : %u\n", resultat);
    
    return 0;
}

//Entrez un entier : 5
//rep : 31
