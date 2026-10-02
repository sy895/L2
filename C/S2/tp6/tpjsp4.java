import java.util.*;

public class PascalLeLapin {
    public static void main(String[] a) {
        Set<LPA> mesLPA = new HashSet<LPA>();
        /* du code ici en quantité
           pour créer les enfants, les jardins, les chocolats
           les LPA, ... Que vous NE DEVEZ PAS écrire !
        */

        // Faire tourner mes LPA
        boolean continuer = true;
        while (continuer) {
            continuer = false;
            for (LPA lpa : mesLPA) {
                lpa.deposerChocolatJardin();
                if (lpa.avancer()) {
                    continuer = true;
                }
            }
        }
    }
}