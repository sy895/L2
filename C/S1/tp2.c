/*
#include <stdio.h>
int main (void)
{
unsigned char i;
i=250;
i=i+6;
printf("La valeur de i est %d \n", i);
return(0);
}

// La valeur de i est 0, pcq l'intervale des unsigned char ne depase pas 255 donc ça retourne 0



#include <stdio.h>
int main (void)
{
unsigned int i;
unsigned int derniers_chiffres;
printf ("Nb entier positif : \n" ) ;
scanf ("%u", &i ) ;
derniers_chiffres = i %100 ;

printf("Les 2 derniers chiffres du nombre lu sont %02u \n", derniers_chiffres);
return(0);
}



#include <stdio.h>
int main (void)
{
int i;
int j;
int k;
printf ("Entrez 3 nb entier : \n" ) ;
scanf ("%i", &i ) ;
scanf ("%i", &j ) ;
scanf ("%i", &k ) ;


printf(" Res = %i  \n", i );
printf(" Res = %i  \n", j );
printf(" Res = %i  \n", k );

return(0);
}
// Pour 3, 5 et 19 rien ne change, en revanche pour A,12 et 14 j'obtiens 
//  Res = 145948848  
 //Res = 2  
 //Res = 145948696  

// il ignore le scanf


#include <stdio.h>
int main (void)
{
printf ("%cn Impression avec les codes ASCII ... %cn", 92, 92);
return(0);
}
//\n Impression avec les codes ASCII ... \n% 


#include <stdio.h>
int main (void)
{
printf ("\n Impression avec deux caractères de retour à la ligne \n");
return(0);
}

//Impression avec deux caractères de retour à la ligne 
//pcq le code asii 92 correcpond à backslash
//non son programme ne fonctionne pas correctement


#include <stdio.h>
int main (void)
{
unsigned int i ;
scanf ("%u", &i) ;
i = i<<1 ;
printf ("La valeur de i est %u \n", i) ;
i = i<<4 ;
printf ("La valeur de i est %u \n", i) ;
i = i<<1 ;
printf ("La valeur de i est %u \n", i) ;
i = i<<4 ;
printf ("La valeur de i est %u \n", i) ;
i = i&1 ;
printf ("La valeur de i est %u \n", i) ;
i = i&4 ;
printf ("La valeur de i est %u \n", i) ;
i = 1<<1 ;
printf ("La valeur de i est %u \n", i) ;
i = 1<<4 ;
printf ("La valeur de i est %u \n", i) ;
return(0);
}




#include <stdio.h>
#include <limits.h>

int main(void) {
    printf("CHAR_BIT    = %d\n", CHAR_BIT);

    printf("SCHAR_MIN   = %d\n", SCHAR_MIN);
    printf("SCHAR_MAX   = %d\n", SCHAR_MAX);
    printf("UCHAR_MAX   = %u\n", UCHAR_MAX);
    printf("CHAR_MIN    = %d\n", CHAR_MIN);
    printf("CHAR_MAX    = %d\n", CHAR_MAX);

    printf("SHRT_MIN    = %d\n", SHRT_MIN);
    printf("SHRT_MAX    = %d\n", SHRT_MAX);
    printf("USHRT_MAX   = %u\n", USHRT_MAX);

    printf("INT_MIN     = %d\n", INT_MIN);
    printf("INT_MAX     = %d\n", INT_MAX);
    printf("UINT_MAX    = %u\n", UINT_MAX);

    printf("LONG_MIN    = %ld\n", LONG_MIN);
    printf("LONG_MAX    = %ld\n", LONG_MAX);
    printf("ULONG_MAX   = %lu\n", ULONG_MAX);

    return 0;
}

CHAR_BIT    = 8
SCHAR_MIN   = -128
SCHAR_MAX   = 127
UCHAR_MAX   = 255
CHAR_MIN    = -128
CHAR_MAX    = 127
SHRT_MIN    = -32768
SHRT_MAX    = 32767
USHRT_MAX   = 65535
INT_MIN     = -2147483648
INT_MAX     = 2147483647
UINT_MAX    = 4294967295
LONG_MIN    = -9223372036854775808
LONG_MAX    = 9223372036854775807
ULONG_MAX   = 18446744073709551615




#include <stdio.h>
int main (void)
{
int i=5, j=2;
float f;
f=4*(i/j);
printf("La valeur de f est : %.f. \n", f);
return(0);
}

//La valeur de f est : 8. 



#include <stdio.h>
int main (void)
{
int i=5, j=2;
float f;
f=4*(float)(i/j);
return(0);
printf("La valeur de f, après une application globale de l’opérateur cast, est : %f. \n", f);
return (0) ; 

}
//marche pas 


#include <stdio.h>
int main (void)
{
int i=5, j=2;
float f;
f=4*((float)i/(float)j);
printf("La valeur de f, après des applications locaux de l’opérateur cast, est : %f. \n", f);
return(0);
}

// La valeur de f, après des applications locaux de l’opérateur cast, est : 10.000000. 
// cast permet de convertir une expression d'un type données à un autre  sa syntaxe est (type) expression 


#include <stdio.h>
int main (void)
{
int i=5, j=2;
float f;
f=4*((float)i/(float)j);
printf("La valeur de f, après des applications locaux de l’opérateur cast, est : %f. \n", f);
return(0);
}








#include <stdio.h>

int main(void) {
    printf("Taille de int   : %zu octets\n", sizeof(int));
    printf("Taille de float : %zu octets\n", sizeof(float));
    printf("Taille de char  : %zu octets\n", sizeof(char));
    printf("Taille de double: %zu octets\n", sizeof(double));
    printf("Taille de long  : %zu octets\n", sizeof(long));
    printf("Taille de short : %zu octets\n", sizeof(short));
    return 0;
}




/****
Les huit erreurs de compilation
***/
#include <stdio.h>

int main(void) {
    int a, b = 1, c; 
    int f = 0;
    printf("Merci de saisir un premier nombre.\n");
    scanf("%d", &b);
    printf("Merci de saisir un deuxieme nombre.\n");
    scanf("%d", &c);
    a = b + c;         
    f = (a > 0);       
    if (f) {
        printf("La somme des deux nombres lus est strictement positive.\n");
    }
    return 0;
}


*/




#include <stdio.h>

int main(void) {
const colonne_echequier = 5 ;
const ligne_echequier = 5 ;

int reine1 ;
int reine2 ;
int reine3 ;
int reine4 ;
int reine5 ;


int score ;

  
}
  
    recherche locale




