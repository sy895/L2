/**
 * 
 * @author Ghy la reine
 * @version 1.0
 * question 1 et 2
 */


//exercice 1
public class DemoLivre {

    public static void main(String[] args){ //ne change pas tjrs ça 
        System.out.println("Test Livre.java");
        
        System.out.println("test constructeur");
        Livre livre1 = new Livre("Mon livre", "Sy", "Hachette"); //new -> crée objet ds la mémoire
        livre1.afficher_livre();
        System.out.println();

//la fontion ajoute_exemplaire
        System.out.println("ajout d'un ex de livre");
        livre1.ajoute_exemplaire();
        livre1.afficher_livre();
        System.out.println();

// la fonction ajoutes_exemplaire pour plusieurs 
        System.out.println("ajout de plusieurs exemplaires de livre");
        livre1.ajoute_exemplaires(2);
        livre1.afficher_livre();
        System.out.println();


// la fonction perte_livre
        System.out.println("perte d'un livre");
        boolean oui_perte = livre1.perte_livre();
        livre1.afficher_livre();
        System.out.println();

    





    }
}