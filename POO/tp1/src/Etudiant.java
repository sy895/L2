/**
 * Classe représentant un étudiant avec ses notes et son statut de diplôme
 * @author Dentelle de Charbon
 * @version 2.0
 */
public class Etudiant {
    /** Nombre maximum de notes qu'un étudiant peut avoir */
    public final static int MAXNOTES = 5;
    
    /** Note minimale possible */
    public final static int MINVALUE = 0;
    
    /** Note maximale possible */
    public final static int MAXVALUE = 20;
    
    /** Moyenne requise pour être admis */
    public final static int MOYENNE_ADM = 10;
    
    /** Nombre de notes requises pour être diplômé */
    public final static int NB_NOTES = 5;
    
    private final String nom;
    private final String prenom;
    private float[] lesNotes;
    private int nbNotes;
    private boolean estDiplome;
    
    /**
     * Constructeur d'un étudiant.
     * @param nom le nom de l'étudiant
     * @param prenom le prénom de l'étudiant
     */
    public Etudiant(String nom, String prenom) {
        this.nom = nom;
        this.prenom = prenom;
        this.lesNotes = new float[MAXNOTES];
        this.nbNotes = 0;
        this.estDiplome = false;
    }
    
    /**
     * Accesseur pour le nom de l'étudiant
     * @return le nom de l'étudiant
     */
    public String getNom() {
        return nom;
    }
    
    /**
     * Accesseur pour le prénom de l'étudiant
     * @return le prénom de l'étudiant
     */
    public String getPrenom() {
        return prenom;
    }
    
    /**
     * Vérifie si l'étudiant est diplômé
     * @return vrai si l'étudiant est diplômé
     */
    public boolean estDiplome() {
        return estDiplome;
    }
    
    /**
     * Calcule et retourne la moyenne de l'étudiant
     * @return la moyenne sur les notes obtenues
     */
    public float getMoyenne() {
        if (nbNotes == 0) {
            return 0;
        }
        float somme = 0;
        for (int i = 0; i < nbNotes; i++) {
            somme += lesNotes[i];
        }
        return somme / nbNotes;
    }
    
    /**
     * Trouve l'indice de la plus mauvaise note
     * @return l'indice de la plus mauvaise note, ou -1 si aucune note
     */
    private int indicePluseMauvaiseNote() {
        if (nbNotes == 0) {
            return -1;
        }
        int indiceMin = 0;
        for (int i = 1; i < nbNotes; i++) {
            if (lesNotes[i] < lesNotes[indiceMin]) {
                indiceMin = i;
            }
        }
        return indiceMin;
    }
    
    /**
     * Ajoute une note à un étudiant.
     * Si l'étudiant est déjà diplômé, ne fait rien.
     * Si l'étudiant a déjà 5 notes, remplace la plus mauvaise si la nouvelle est meilleure.
     * Vérifie si l'étudiant devient diplômé après l'ajout.
     * @param note la note qu'on veut ajouter à l'étudiant
     * @return vrai si l'ajout ou le remplacement a été fait
     */
    public boolean ajouteNote(float note) {
        // Si déjà diplômé, on ne fait rien
        if (estDiplome) {
            return false;
        }
        
        // Vérification que la note est valide
        if (note < MINVALUE || note > MAXVALUE) {
            return false;
        }
        
        // Si on n'a pas encore 5 notes, on ajoute simplement
        if (nbNotes < MAXNOTES) {
            lesNotes[nbNotes] = note;
            nbNotes++;
        } else {
            // On a déjà 5 notes, on remplace la plus mauvaise si la nouvelle est meilleure
            int indicePirNote = indicePluseMauvaiseNote();
            if (note > lesNotes[indicePirNote]) {
                lesNotes[indicePirNote] = note;
            } else {
                return false; // Pas de remplacement
            }
        }
        
        // Vérifier si l'étudiant devient diplômé
        if (nbNotes == NB_NOTES && getMoyenne() >= MOYENNE_ADM) {
            estDiplome = true;
        }
        
        return true;
    }
    
    /**
     * Retourne une présentation textuelle d'un étudiant :
     * son nom, son prénom, son nombre de notes, sa moyenne et son statut
     * @return la représentation textuelle
     */
    public String toString() {
        String statut = estDiplome ? " (DIPLÔMÉ)" : "";
        if (nbNotes > 0) {
            return prenom + " " + nom + ", " + nbNotes + " note(s), moyenne : " 
                   + String.format("%.2f", getMoyenne()) + statut;
        } else {
            return prenom + " " + nom + ", aucune note" + statut;
        }
    }
}