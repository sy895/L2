/**
 * 
 * @author Ghy la reine
 * @version 1.0
 * question 1 et 2
 */

/*

    //constantes
    public static final String LITTERATURE_FRANCAISE  = "litterature francaise";
    public static final String LITTERATURE_JEUNESSE  = "litterature jeunesse";
    public static final String LITTERATURE_ETRANGERE = "litterature etrangere";
    public static final String POLICIER  = "policier";
    public static final String POLITIQUE = "politique";
    public static final String SCIENCES = "sciences";
    public static final String SCIENCES_HUMAINES= "sciences humaines";
    public static final String NON_SPECIFIE = "non_specifie";
*/

    //attributs
public class Livre{
    private int nb_exemplaires; //ca varie 
    public final String titre;
    public final String nom_auteur;
    public final String nom_editeur;
    private Genre genre; 


 //Execice 2

//question 2 
        //constructeur
/** 
        @param titre 
        @param nom_auteur
        @param nom_editeur
*/


    public Livre(String titre, String nom_auteur, String nom_editeur){
        this.titre = titre;
        this.nom_auteur= nom_auteur ;
        this.nom_editeur= nom_editeur;
        this.nb_exemplaires = 0;
        this.genre = genre.NON_SPECIFIE;
    }


    public String getTitre(){
        return titre;
    }

    public String getAuteur(){
        return nom_auteur;
    }

    public String getEditeur(){
        return nom_editeur;
    }

    public Genre getGenre() {
        return genre;
    }

    public int getNbexemplairs() {
        return nb_exemplaires;
    }

    public void setGenre(Genre genre){
        this.genre=genre;
    }
//question 3
public boolean ajoute_exemplaire() {
    nb_exemplaires ++;
    return true;
}

/** 
    @param nombre //nb exemplaire à ajouter
    @return 
*/

public boolean ajoute_exemplaires(int nb){
    if (nb>0) {
        nb_exemplaires += nb;
        return true;
    }
    return false;
}


//question 4
public boolean perte_livre() {
    if (nb_exemplaires>0) {
        nb_exemplaires--;
        return true;
        }
    return false;
}


//question 5
public boolean est_present_bibliobus(){
    return nb_exemplaires > 0;
}


//question 6
public void afficher_livre(){
    System.out.println("Titre:" + titre);
    System.out.println("Nom auteur :" + nom_auteur);
    System.out.println("nom de l'editeur:" + nom_editeur);
    System.out.println("nb d' exemplaires:" + nb_exemplaires);
    System.out.println("les genres:" + genre);
}


//question 7
/** 
    @param autreLivre
    @return
*/
public boolean meme_oeuvre(Livre autreLivre){ 
    if (autreLivre == null) {//comme c'est des String on peut pas utiliser "=="
        return false;
    }
    return  this.titre.equals(autreLivre.titre) &&
            this.nom_auteur.equals(autreLivre.nom_auteur) &&
            this.nom_editeur.equals(autreLivre.nom_editeur);
}


//question 8
/** 
    @param nv_editeur
    @return
*/
public Livre changer_editeur(String nv_editeur){
    Livre nouveauLivre = new Livre(this.titre, this.nom_auteur, nv_editeur);
    nouveauLivre.nb_exemplaires = 1;
    nouveauLivre.genre = this.genre;
    return nouveauLivre;
}
}





 
