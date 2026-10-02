/**
 * Classe de test pour la gestion d'une promotion d'étudiants
 * @author Dentelle de Charbon
 * @version 1.0
 */
public class TestPromotion {
    public static void main(String[] args) {
        System.out.println("=== TEST DE LA CLASSE PROMOTION ===\n");
        
        // Création d'une promotion
        Promotion promo2024 = new Promotion("L2 POO 2024");
        System.out.println("Promotion créée : " + promo2024);
        System.out.println();
        
        // Ajout d'étudiants dans la promotion
        System.out.println("--- Ajout d'étudiants ---");
        promo2024.ajouteEtudiant("Dupont", "Jean");
        promo2024.ajouteEtudiant("Martin", "Marie");
        promo2024.ajouteEtudiant("Durand", "Pierre");
        promo2024.ajouteEtudiant("Bernard", "Sophie");
        promo2024.ajouteEtudiant("Petit", "Luc");
        System.out.println("5 étudiants ajoutés");
        promo2024.affichePromotion();
        System.out.println();
        
        // Attribution de notes à Jean Dupont (indice 0) - il sera diplômé
        System.out.println("--- Attribution de notes à Jean Dupont ---");
        promo2024.donneNote(0, 12.5f);
        promo2024.donneNote(0, 14.0f);
        promo2024.donneNote(0, 11.5f);
        promo2024.donneNote(0, 13.0f);
        promo2024.donneNote(0, 15.0f);
        System.out.println(promo2024.getEtudiant(0));
        System.out.println();
        
        // Attribution de notes à Marie Martin (indice 1) - elle sera diplômée
        System.out.println("--- Attribution de notes à Marie Martin ---");
        promo2024.donneNote(1, 16.0f);
        promo2024.donneNote(1, 15.5f);
        promo2024.donneNote(1, 17.0f);
        promo2024.donneNote(1, 14.0f);
        promo2024.donneNote(1, 18.0f);
        System.out.println(promo2024.getEtudiant(1));
        System.out.println();
        
        // Attribution de notes à Pierre Durand (indice 2) - il ne sera pas diplômé
        System.out.println("--- Attribution de notes à Pierre Durand ---");
        promo2024.donneNote(2, 8.0f);
        promo2024.donneNote(2, 9.5f);
        promo2024.donneNote(2, 7.0f);
        promo2024.donneNote(2, 8.5f);
        promo2024.donneNote(2, 9.0f);
        System.out.println(promo2024.getEtudiant(2));
        System.out.println("Pierre tente d'améliorer sa plus mauvaise note (7.0)...");
        promo2024.donneNote(2, 10.0f); // Remplace le 7.0
        System.out.println(promo2024.getEtudiant(2));
        promo2024.donneNote(2, 11.0f); // Remplace le 8.0
        System.out.println(promo2024.getEtudiant(2));
        System.out.println();
        
        // Attribution de notes à Sophie Bernard (indice 3) - elle sera diplômée
        System.out.println("--- Attribution de notes à Sophie Bernard ---");
        promo2024.donneNote(3, 11.0f);
        promo2024.donneNote(3, 12.0f);
        promo2024.donneNote(3, 10.5f);
        promo2024.donneNote(3, 13.0f);
        promo2024.donneNote(3, 10.0f);
        System.out.println(promo2024.getEtudiant(3));
        System.out.println();
        
        // Luc Petit n'a que 3 notes - pas diplômé
        System.out.println("--- Attribution de notes à Luc Petit (incomplet) ---");
        promo2024.donneNote(4, 14.0f);
        promo2024.donneNote(4, 15.0f);
        promo2024.donneNote(4, 13.0f);
        System.out.println(promo2024.getEtudiant(4));
        System.out.println();
        
        // Affichage de la promotion complète
        System.out.println("\n--- État de la promotion ---");
        promo2024.affichePromotion();
        System.out.println();
        
        // Affichage des étudiants diplômés (Étape 6)
        System.out.println();
        promo2024.afficheDiplomes();
        System.out.println();
        
        // Test des compteurs (Étape 7)
        System.out.println("--- Statistiques ---");
        System.out.println("Nombre total d'étudiants : " + promo2024.getNbEtudiant());
        System.out.println("Nombre de diplômés : " + promo2024.getNbDiplomes());
        System.out.println();
        
        // Test de la création d'une nouvelle promotion avec les diplômés (Étape 9)
        System.out.println("--- Création d'une nouvelle promotion avec les diplômés ---");
        Promotion promo2025 = promo2024.nouvellePromotion("L3 POO 2025");
        System.out.println("\nNouvelle promotion créée :");
        promo2025.affichePromotion();
        
        System.out.println("\nPromotion 2024 après transfert des diplômés :");
        promo2024.affichePromotion();
        System.out.println();
        
        // Test : un étudiant diplômé ne peut plus recevoir de notes
        System.out.println("--- Test : étudiant diplômé ne peut plus recevoir de notes ---");
        System.out.println("Tentative d'ajouter une note à Jean Dupont (maintenant en L3) :");
        boolean ajout = promo2025.getEtudiant(0).ajouteNote(18.0f);
        System.out.println("Note ajoutée ? " + ajout);
        System.out.println(promo2025.getEtudiant(0));
        System.out.println();
        
        System.out.println("=== FIN DES TESTS ===");
    }
}