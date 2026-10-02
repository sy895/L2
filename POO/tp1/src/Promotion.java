/**
 * Classe représentant une promotion d'étudiants
 * @author Dentelle de Charbon
 * @version 1.0
 */
public class Promotion {
    /** Nombre maximum d'étudiants dans une promotion */
    public final static int MAX_ETUDIANT = 30;
    
    private String nomPromotion;
    private Etudiant[] etudiants;
    private int nbEtudiant;
    
    /**
     * Constructeur d'une promotion
     * @param nomPromotion le nom de la promotion
     */
    public Promotion(String nomPromotion) {
        this.nomPromotion = nomPromotion;
        this.etudiants = new Etudiant[MAX_ETUDIANT];
        this.nbEtudiant = 0;
    }
    
    /**
     * Accesseur pour le nom de la promotion
     * @return le nom de la promotion
     */
    public String getNomPromotion() {
        return nomPromotion;
    }
    
    /**
     * Retourne un étudiant à un indice donné
     * @param indice l'indice de l'étudiant dans la promotion
     * @return l'étudiant à cet indice, ou null si l'indice est invalide
     */
    public Etudiant getEtudiant(int indice) {
        if (indice >= 0 && indice < nbEtudiant) {
            return etudiants[indice];
        }
        return null;
    }
    
    /**
     * Ajoute un étudiant dans la promotion
     * @param nom le nom de l'étudiant
     * @param prenom le prénom de l'étudiant
     * @return vrai si l'ajout a réussi, faux si la promotion est pleine
     */
    public boolean ajouteEtudiant(String nom, String prenom) {
        if (nbEtudiant < MAX_ETUDIANT) {
            etudiants[nbEtudiant] = new Etudiant(nom, prenom);
            nbEtudiant++;
            return true;
        }
        return false;
    }
    
    /**
     * Donne une note à un étudiant de la promotion
     * @param indice l'indice de l'étudiant dans la promotion
     * @param note la note à attribuer
     * @return vrai si la note a été ajoutée
     */
    public boolean donneNote(int indice, float note) {
        if (indice >= 0 && indice < nbEtudiant) {
            return etudiants[indice].ajouteNote(note);
        }
        return false;
    }
    
    /**
     * Retourne le nombre d'étudiants dans la promotion
     * @return le nombre d'étudiants
     */
    public int getNbEtudiant() {
        return nbEtudiant;
    }
    
    /**
     * Retourne le nombre d'étudiants diplômés
     * @return le nombre d'étudiants diplômés
     */
    public int getNbDiplomes() {
        int compteur = 0;
        for (int i = 0; i < nbEtudiant; i++) {
            if (etudiants[i].estDiplome()) {
                compteur++;
            }
        }
        return compteur;
    }
    
    /**
     * Affiche tous les étudiants diplômés de la promotion
     */
    public void afficheDiplomes() {
        System.out.println("=== Étudiants diplômés de " + nomPromotion + " ===");
        int compteur = 0;
        for (int i = 0; i < nbEtudiant; i++) {
            if (etudiants[i].estDiplome()) {
                System.out.println(etudiants[i]);
                compteur++;
            }
        }
        if (compteur == 0) {
            System.out.println("Aucun étudiant diplômé pour le moment.");
        }
        System.out.println("Total : " + compteur + " diplômé(s)");
    }
    
    /**
     * Crée une nouvelle promotion avec les étudiants diplômés de la promotion actuelle.
     * Les étudiants diplômés sont supprimés de la promotion actuelle.
     * @param nomPromo le nom de la nouvelle promotion
     * @return la nouvelle promotion avec les diplômés
     */
    public Promotion nouvellePromotion(String nomPromo) {
        Promotion nouvellePromo = new Promotion(nomPromo);
        
        // Parcourir les étudiants et ajouter les diplômés à la nouvelle promotion
        int i = 0;
        while (i < nbEtudiant) {
            if (etudiants[i].estDiplome()) {
                // Ajouter à la nouvelle promotion (nouveau étudiant, pas de notes)
                nouvellePromo.ajouteEtudiant(etudiants[i].getNom(), etudiants[i].getPrenom());
                
                // Supprimer de la promotion actuelle en décalant les étudiants
                for (int j = i; j < nbEtudiant - 1; j++) {
                    etudiants[j] = etudiants[j + 1];
                }
                etudiants[nbEtudiant - 1] = null; // Libérer la dernière case
                nbEtudiant--;
                // Ne pas incrémenter i car on a décalé les étudiants
            } else {
                i++;
            }
        }
        
        return nouvellePromo;
    }
    
    /**
     * Affiche tous les étudiants de la promotion
     */
    public void affichePromotion() {
        System.out.println("=== Promotion " + nomPromotion + " ===");
        System.out.println("Nombre d'étudiants : " + nbEtudiant);
        for (int i = 0; i < nbEtudiant; i++) {
            System.out.println("[" + i + "] " + etudiants[i]);
        }
        System.out.println("Diplômés : " + getNbDiplomes() + "/" + nbEtudiant);
    }
    
    /**
     * Représentation textuelle de la promotion
     * @return la représentation textuelle
     */
    public String toString() {
        return "Promotion " + nomPromotion + " : " + nbEtudiant + " étudiant(s), " 
               + getNbDiplomes() + " diplômé(s)";
    }
}