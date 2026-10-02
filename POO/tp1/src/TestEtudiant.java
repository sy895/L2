/**
 * Classe qui permet de lancer une application qui teste la classe Etudiant.
 */
public class TestEtudiant {
    public static void main(String[] args) {
        // Création de deux étudiants
        Etudiant e1 = new Etudiant("Dupont", "Jean");
        Etudiant e2 = new Etudiant("Durand", "Paul");
        
        System.out.println("=== État initial ===");
        System.out.println(e1);
        System.out.println(e2);
        
        // Ajout de 2 notes chacun
        System.out.println("\n=== Ajout de 2 notes ===");
        e1.ajouteNote(15);
        e2.ajouteNote(17);
        e1.ajouteNote(13);
        e2.ajouteNote(8);
        System.out.println(e1);
        System.out.println(e2);
        
        // Ajout de 3 notes supplémentaires pour atteindre 5 notes
        System.out.println("\n=== Ajout de 3 notes supplémentaires ===");
        e1.ajouteNote(12);
        e1.ajouteNote(14);
        e1.ajouteNote(11);  // e1 a maintenant 5 notes : 15, 13, 12, 14, 11
        System.out.println(e1);
        System.out.println("Moyenne de " + e1.getPrenom() + " : " + e1.getMoyenne());
        System.out.println("Diplômé ? " + e1.estDiplome());
        
        e2.ajouteNote(12);
        e2.ajouteNote(9);
        e2.ajouteNote(7);   // e2 a maintenant 5 notes : 17, 8, 12, 9, 7
        System.out.println(e2);
        System.out.println("Moyenne de " + e2.getPrenom() + " : " + e2.getMoyenne());
        System.out.println("Diplômé ? " + e2.estDiplome());
        
        // Test du remplacement de la plus mauvaise note
        System.out.println("\n=== Test remplacement de notes ===");
        System.out.println("e2 a une mauvaise note (7). On lui donne 16 :");
        e2.ajouteNote(16);  // Devrait remplacer le 7 par 16
        System.out.println(e2);
        System.out.println("Moyenne de " + e2.getPrenom() + " : " + e2.getMoyenne());
        System.out.println("Diplômé ? " + e2.estDiplome());
        
        // On lui donne une note encore pire que sa pire note
        System.out.println("\ne2 reçoit une note de 5 (pire que sa pire note 8) :");
        e2.ajouteNote(5);   // Ne devrait rien changer
        System.out.println(e2);
        System.out.println("Moyenne de " + e2.getPrenom() + " : " + e2.getMoyenne());
        
        // Test si un étudiant diplômé refuse les notes
        System.out.println("\n=== Test étudiant diplômé ===");
        System.out.println("e1 est diplômé. On essaie de lui donner une note :");
        e1.ajouteNote(20);  // Ne devrait rien faire car e1 est diplômé
        System.out.println(e1);  // Devrait être inchangé
    }
}