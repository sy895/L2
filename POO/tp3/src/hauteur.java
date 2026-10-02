//question 2


public enum Hauteur {
    DEUX(2),
    TROIS(3),
    QUATRE(4),
    CINQ(5),
    SIX(6),
    SEPT(7),
    HUIT(8),
    NEUF(9),
    10("Valet"),
    11("Dame"),
    12("Roi"),
    13("As")
}


private int rang;

private Hauteur(int rang){
    this.rang = rang;
}

public int getRang(){
    return this.rang; 
}


@Override //redefinir une méthode(faacultatif)
public String toString(){
    switch(this){ //this -> insatnce actuelle de l'énumération (valet, dame, roi ou as)
        case VALET: return "V";
        case DAME: return "D";
        case ROI: return "R";
        case AS: return "A";
        default: return "" + this.rang; // ou String.valueOf(this.rang)
    }
}