/** 
@author sy895
@version 1.0

*/
//question 3
public class Carte{
    private Hauteur hauteur; //atributs pas modifiable
    private Couleur couleur;


    //constructeur
    public Carte(Hauteur hauteur, Couleur couleur){
        this hauteur = hauteur;
        this.couleur = couleur;
    }


    //acccesseur
    public Hauteur getHauteur(){
        retunr this.hauteur;
    }
//attributs nn modifiable
    public Couleur getCouleur(){
        return this.couleur;
    }

//attributs nn modifiable
    public int getRang(){
    return this.hauteur.getRang();
 
    }


    public String toString(){
        return this.hauteur.toString() + this.couleur.toString();

    }
}