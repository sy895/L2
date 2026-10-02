import java.util.*;

public class LPA {
    /** les cadeaux */
    private Collection<Chocolat> lesChocolats;

    /** le parcours en termes de jardins */
    private List<Jardin> lesJardins;

    /** le jardin où le LPA se trouve */
    private Jardin monJardin;

    /** l'itérateur qui permet de parcourir les jardins */
    private Iterator<Jardin> iterJardins;

    public LPA(Collection<Chocolat> lesChocolats, List<Jardin> lesJardins) {
        this.lesJardins = lesJardins;
        this.lesChocolats = lesChocolats;
        // je démarre du premier Jardin
        this.iterJardins = lesJardins.iterator();
       
    }

/*
    public LPA(Collection<Chocolat> lesChocolats, List<Jardin> lesJardins) {
    this.lesJardins = new ArrayList<>(lesJardins);
    this.lesChocolats = new ArrayList<>(lesChocolats);
    iterJardins = this.lesJardins.iterator();
    avancer();
}dans l'ideal à quoi subtilité changement ou pas

*/

    // Q3
    public boolean avancer() {
        if (!iterJardins.hasNext()) {
            return false; 
        }
        monJardin = iterJardins.next();
        return true;
    }




    // Q4
    public void deposerChocolatEnfant(Enfant e) {
        Iterator<Chocolat> iterChocolats = lesChocolats.iterator();
        while (iterChocolats.hasNext()) {
            Chocolat c = iterChocolats.next();
            if (c.convient(e)) {
                iterChocolats.remove();
                e.mangeChocolat(c);
                return;
            }
        }
    }

    // Q5
    public void deposerChocolatJardin() {
        if (monJardin == null) {
            return;
        }

        Iterator<Enfant> iterEnfants = monJardin.getLesEnfantsIterator();
        while (iterEnfants.hasNext()) {
            Enfant e = iterEnfants.next();
            deposerChocolatEnfant(e);
        }
    }
}