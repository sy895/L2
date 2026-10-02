import java.util.*;

public class Jardin {
    /** son adresse */
    private String adresse;

    /** Les enfants qui habitent là */
    private Collection<Enfant> lesEnfants;

    public Jardin(String adresse) {
        this.adresse = adresse;
        lesEnfants = new ArrayList<Enfant>();
    }

    public Iterator<Enfant> getLesEnfantsIterator() {
        return lesEnfants.iterator();
    }

    public String getAdresse() { 
        return adresse; 
    }

    public boolean ajouteEnfant(Enfant e) {
        return lesEnfants.add(e);
    }
}