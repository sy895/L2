//exercice 1

/*Ecrire une fonction qui prend en paramètre un entier positif n et retourne 1 si le nombre n est uniforme. La
fonction retourne 0 sinon. Un nombre est dit uniforme s’il est une répétition d’un même chiﬀre. Par exemple
les nombres 111, 33333, 7777 sont des nombres uniformes alors que les nombres 123, 3332, 8879179 ne le sont
pas.

#include <stdio.h>

int uniforme(unsigned int n) {
    unsigned int dernier_nb = n % 10;
    while (n > 0) {
        if (n % 10 != dernier_nb) {
            return 0;
        }
        n /= 10;
    }
    return 1;
}

int main(void) {
    unsigned int n;
    unsigned int res;

    printf("Entrer un nb: ");
    scanf("%u", &n);

    res = uniforme(n);
    printf("Solution %u\n", res);

    return 0;
}


//Entrer un nb: 1111
//Solution 1



//exercice 2
Ecrire une fonction récursive qui réalise la fonction de Hanoï vue en cours. Tester votre fonction avec n=2,
n=3, n=10, n=50 (Hum!)


#include <stdio.h>

void hanoi(int nb_disques, int dep, int intermediaire, int dest) {
    if (nb_disques == 1) {
        printf("Deplacer un disque de %d vers %d\n", dep, dest);
    } else {
        hanoi(nb_disques - 1, dep, dest, intermediaire);
        printf("Deplacer un disque de %d vers %d\n", dep, dest);
        hanoi(nb_disques - 1, intermediaire, dep, dest);
    }
}

int main(void) {
    int n;
    printf("Entrer le nombre de disques: ");
    scanf("%d", &n);
    hanoi(n, 1, 2, 3);
    return 0;
}


//exercice 3
Écrire un programme en C qui :
• lit un entier n,
• lit n entiers positifs ou nuls, puis les stocke en mémoire grâce à une allocation dynamique,
• aﬃche d’abord le nombre d’entiers nuls,
• aﬃche ensuite les nombres pairs,
• et enfin, aﬃche les nombres impairs.


une allocation dynamique sert à réserver de la mémoire pdt l'exécution du programme 
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, i, count = 0;
    int *tab;

    printf("Entrer le nombre d'entiers: ");
    scanf("%d", &n);

    tab = malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    for (i = 0; i < n; i++) {
        if (tab[i] == 0)
            count++;
    }

    printf("Nombre d'entiers nuls: %d\n", count);

    printf("Nombres pairs: ");
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 == 0)
            printf("%d ", tab[i]);
    }

    printf("\nNombres impairs: ");
    for (i = 0; i < n; i++) {
        if (tab[i] % 2 != 0)
            printf("%d ", tab[i]);
    }

    printf("\n");
    free(tab);
    return 0;
}
