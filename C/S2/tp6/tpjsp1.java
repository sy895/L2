import java.util.*;


public class Enfant {
    /** son prénom */
    private String prenom;

    /** son poids */
    private float poids;


    public Enfant(String prenom, float poids) {
        this.prenom = prenom;
        this.poids = poids;
    }

    public float getPoids() { 
        return poids; 
    }

    public String getPrenom() { 
        return prenom; 
    }

    public void mangeChocolat(Chocolat c) {
        System.out.println("Miam!");
    }
}