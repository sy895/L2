//question 4

//classe Jeu
public class Jeu {
    private Carte [] cartes;

    public Jeu(){
        this.cartes = new Cartes[52];// initialise le tableau de 52 cartes
        int index = 0;
        for (Couleur c : Couleur.values()) {
            for (Hauteur h : Hauteur.values()){
                this.cartes[index] = new Carte(h,c);
                index ++,
            }
        }
    }

    // méthode qui permet d'afficher sur la console chaque carte du jeu
    public void afficheJeu() {
        for(Carte carte : this.cartes){
            System.out.println(carte);
        }
    }
}