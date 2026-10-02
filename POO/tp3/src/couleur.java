//qst 1
public enum Couleur {
    PIQUE("\u2660"),
    COEUR("\u2665"),
    CARREAU("\u2666"),
    TREFLE("\u2663");


    private String symbole;


    //constructeur privé
    private Couleur(String symbole){
      this.symbole = symbole;
    }

    //méthode toString()
    public String toString(){
        return this.symbole;
    }

}