//exercice 3

import guilines.IJeuDesBilles;//importe l'interface
import java.util.Random;//importe la classe random, pr choisir la couleur des billes au hasard
import java.util.List;//liste d'elt 
import java.util.ArrayList;//stocker liste de pt
import java.awt.Point;//importe class ArrayList 


public class MonJeu implements IJeuDesBilles {
    private int [][] grille;
    private int nbLignes;
    private int nbColonnes;
    private int nbCouleurs;
    private int score;
    private int nbBillesAjoutees;
    private Random random;
    private int nbBillesAlignee;

    public MonJeu() {
        this.nbLignes=9;
        this.nbColonnes=9;
        this.score=0;
        this.nbCouleurs=3;
        this.nbBillesAjoutees=3;
        this.grille= new int [nbLignes][nbColonnes];
        this.random = new Random();
        //ex5
        this.nbBillesAlignee =3;


        for (int i=0; i<nbLignes; i++){
            for (int j=0; j<nbColonnes; j++) {
                grille[i][j] = -1;
            }
        }
        genererNouvellesBilles(5);
    }

    public int getNbLignes(){
        return nbLignes;
    }

    public int getNbColonnes(){
        return nbColonnes;
    }

    public int getNbCouleurs(){
        return nbCouleurs;
    }


    public int getNbBillesAjoutees(){
        return nbBillesAjoutees;
    }


    public int getCouleur(int lig, int col){
        return grille[lig][col];
    }


    public int getScore(){
        return score;
    }
    
    public int[] getNouvellesCouleurs(){
        return new int[0]; //tab vide 
    }

    public boolean partieFinie(){
        return false ;
    }

    public void reinit(){
       for (int i=0 ; i<nbLignes; i++) {
        for (int j=0; j< nbColonnes; j++){
            grille[i][j] = -1; //reinit la grille
        }
       }
       score=0;
    }


    //deplacer une bille
    // remodifier ex 6 bug
    public List <Point> deplace (int ligD, int colD, int ligA, int colA){
        if (grille[ligD][colD] == -1){
            return new ArrayList<Point>();
        }
        if (grille[ligA][colA]!=-1){
            return new ArrayList<Point>();
        }

        //ex5 on rappelle la fonction 
        if (!cheminExiste(ligD,colD,ligA,colA)){
            return new ArrayList<Point>();
        }
        grille[ligA][colA]=grille[ligD][colD];
        grille[ligD][colD]=-1;
        //ex6
        boolean alignement = verifierAlignement(ligA, colA);
        if(alignement) {
            supprimerAlignement(ligA, colA);
        }
        else {
            genererNouvellesBilles(3);
        }
        List <Point> casesModifiees = new ArrayList<Point>();
        for (int i=0 ; i < nbLignes; i++){
            for(int j=0; j<nbColonnes; j++){
                casesModifiees.add(new Point(j,i));
            }
        }
        return casesModifiees;
    }





    private void genererNouvellesBilles(int nb){
        for (int i=0; i<nb; i++){
            int lig, col;
            int couleur = random.nextInt(nbCouleurs);
            do{
                lig = random.nextInt(nbLignes);
                col = random.nextInt(nbColonnes);
            }
            while (grille[lig][col] != -1);
            grille[lig][col]= couleur ;
        }
    }


//exercice5 controler le deroulement du jeu


    private boolean verifierAlignement (int lig, int col){
        int couleur = grille[lig][col];
        int compteurHorizontal = 1;
        int compteurVertical = 1 ; 
        if (couleur == -1){
            return false;
        }
        for (int i= col -1 ; i >=0 && grille[lig][i] == couleur; i--){
            compteurHorizontal ++;
        }
        for (int i= col +1 ; i < nbColonnes && grille[lig][i] == couleur; i++){
            compteurHorizontal ++;
        }
        for (int i= lig -1 ; i >=0 && grille[i][col] == couleur; i--){
            compteurVertical ++;
        }
        for (int i= lig +1 ; i <nbLignes &&  grille[i][col] == couleur; i++){
            compteurVertical ++;
        }
        return compteurHorizontal >= nbBillesAlignee || compteurVertical >= nbBillesAlignee;

    }



    private void supprimerAlignement(int lig, int col){
        int couleur = grille [lig][col];
        if (couleur == -1){
            return;
        }
        int compteurH = 1;
        int compteurV = 1;
        int droite = col+1;
        int gauche = col - 1 ;
        int haut = lig-1;
        int bas = lig+1;

        while (gauche >=0 && grille[lig][gauche] == couleur){
            compteurH ++;
            gauche --;
        }
        while (droite < nbColonnes && grille [lig][droite]== couleur){
            compteurH ++;
            droite ++;
        }
        if (compteurH >= nbBillesAlignee){
            for (int i = gauche + 1; i< droite ; i++){
                grille[lig][i] = -1;
                score += 2;
            }
        }
        while (haut >= 0 && grille[haut][col]== couleur){
            compteurV++;
            haut --;
        }
        while (bas < nbLignes && grille[bas][col] == couleur){
            compteurV++ ; 
            bas ++;
        }
        if (compteurV>= nbBillesAlignee){
            for (int i = haut+1 ; i< bas; i++ ){
                grille[i][col] = -1;
                score += 2;
            }
        }
    }


/*
ex6
Dans la version impl´ ement´ ee actuellement, un d´ eplacement de bille est possible si la case d’ar-
riv´ ee est libre. Dans la version originale, le d´ eplacement n’est possible que s’il existe un chemin
de cases vides entre la bille choisie et la case d’arriv´ ee (une bille ne se d´ eplace qu’horizontale-
ment ou verticalement). Modifiez le code pour prendre en compte cette r` egle;
*/
    private boolean cheminExiste(int colD, int ligD, int ligA, int colA){
        if (ligD==ligA && colD == colA){
            return false;
        }
        int [] deltaLig = {-1, 1, 0, 0};
        int [] deltaCol = {0, 0, -1, 1};
        boolean [][] visite = new boolean[nbLignes][nbColonnes];
        List<Point> aExplorer = new ArrayList <Point>();
        aExplorer.add(new Point(colD, ligD));
        visite [ligD][colD]=true ;
        while (!aExplorer.isEmpty()){
            Point actuel = aExplorer.remove(0);
            int lig = actuel.y;
            int col = actuel.x;
            for (int i=0; i<4; i ++){
                int nouvLig= lig +deltaLig[i];
                int nouvCol = col + deltaCol [i];
                if(nouvLig >=0 && nouvLig < nbLignes && nouvCol >=0 && nouvCol < nbColonnes){
                    if (nouvLig == ligA && nouvCol == colA) {
                        return true;
                    }
                    if (grille [nouvLig][nouvCol]==-1 && !visite[nouvLig][nouvCol]){
                        visite[nouvLig][nouvCol] = true;
                        aExplorer.add(new Point(nouvCol, nouvLig));
                    }
                }
                
            }
        
        }
        return false;
    }
    
}