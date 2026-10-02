#include <stdio.h>
#include <stdlib.h>
#include "pile_liste.h"

PileListe* creer_pile_liste() {
    PileListe *pile = (PileListe*)malloc(sizeof(PileListe));
    if (pile == NULL) {
        fprintf(stderr,  "Faux");
        return NULL;

    }
    pile -> sommet = NULL;
    pile -> taille = 0;
    return pile;

}

int est_vide_pile_liste( PileListe *pile) {
    if (pile == NULL){
        return 1;
    }
    return pile -> sommet == NULL;

}

int empiler_liste(PileListe *pile, int valeur) {
    NoeudPile *nouveau = (NoeudPile*)malloc(sizeof(NoeudPile));
    if (nouveau == NULL) {
        fprintf(stderr, "Faux");
        return (0);
    }
    nouveau -> valeur= valeur;
    nouveau -> suivant = pile -> sommet;
    pile -> sommet = nouveau;
    pile-> taille ++;
    return 1;
}


int depiler_liste(PileListe *pile, int *valeur){
    if (pile == NULL || est_vide_pile_liste(pile)) {
        fprintf(stderr, "Faux");
        return 0;
    }
    NoeudPile *temp = pile->sommet ;
    *valeur = temp -> valeur;
    pile -> sommet = temp -> suivant ;
    free(temp);
    pile-> taille -- ;
    return 1;
}

int sommet_pile_liste(PileListe *pile, int *valeur) {
    if (pile == NULL || est_vide_pile_liste(pile)) {
        fprintf(stderr, "Faux");
        return (0);

    }
    *valeur = pile -> sommet -> valeur;
    return 1;

}

void afficher_pile_liste(PileListe *pile) {
    if (pile == NULL || est_vide_pile_liste(pile)) {
        printf("Pille vide");
        return;
    }
    NoeudPile *courant = pile -> sommet;
    while (courant != NULL) {
        printf("[%d]", courant-> valeur);
        if (courant -> suivant != NULL){
            printf("---> ");
        }
        courant = courant -> suivant;
    }
    printf("<-- base");

}


void detruire_pile_liste(PileListe *pile) {
    if (pile == NULL) return ;
    NoeudPile *courant  =  pile -> sommet;
    while (courant != NULL){
        NoeudPile *temp = courant;
        courant = courant -> suivant;
        free(temp);
    }
    free(pile);
}

int taille_pile_liste(PileListe *pile){
    if (pile== NULL) {
        return 0;
    }
    return pile -> taille;
}






int verifier_parentheses(const char *expression){
    PileListe *pile =  creer_pile_liste();
    for (int i =0; expression[i]!= '\0'; i++) {
        char c = expression [i];
        if (c == '(' || c == '[' || c == '{') {
            empiler_liste(pile,c);
        }
        else if (c == ')'|| c == ']' || c == '}') {
            if(est_vide_pile_liste(pile)) {
                detruire_pile_liste(pile);
                return 0;
            }
            int sommet ;
            sommet_pile_liste(pile, &sommet);
           
            depiler_liste(pile, &sommet);
            if ((c == ')' && sommet != '(') ||
                ( c == ']' && sommet != '[') ||
                (c == '}' && sommet != '{')) {
                    detruire_pile_liste(pile);
                    return 0;
                }
        }
        
    }
    int resultat = est_vide_pile_liste(pile);
    detruire_pile_liste(pile);
    return resultat;
}

    


void test_parenthesage() {
    printf("\nVÉRIFICATION PARENTHÉSAGE\n\n");
    const char *tests[] = {
        "(a + b)",
        "((a + b) * c)",
        "(a + b))",
        "((a + b)",
        ")(a + b)(",
        "{[()]}",
        "{[(])}",
        "a + b * c",
        NULL
    };
    for (int i = 0; tests[i] != NULL; i++) {
        int valide = verifier_parentheses(tests[i]);
        printf("%-20s -> %s\n", tests[i], valide ? "VALIDE" : "INVALIDE");
    }
    }



    int main() {
        int val;
        PileListe *pile = creer_pile_liste();
        empiler_liste(pile,10);
        afficher_pile_liste(pile);
        depiler_liste(pile, &val);
        printf("depiler : %d", val);
        detruire_pile_liste(pile);
        test_parenthesage();
        return 0;
    }


"""
1) la pile est ideale car elle suit un ordre LIFO
2)
complexite temporelle 
et spaciale dans le pire des cas 

"""





