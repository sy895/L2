CREATE TABLE RECETTE (
    id_recette INT PRIMARY KEY,
    nom_recette VARCHAR(255) NOT NULL,
    temps_prep INT,
    difficulte VARCHAR(50),
    categorie_recette VARCHAR(100)
);

CREATE TABLE INGREDIENT (
    id_ingredient INT PRIMARY KEY,
    nom_ing VARCHAR(255) NOT NULL,
    prix DECIMAL(10,2),
    categorie_ingredient VARCHAR(100)
);

CREATE TABLE USTENSILE (
    id_ustensile INT PRIMARY KEY,
    nom_ustensile VARCHAR(255) NOT NULL
);

CREATE TABLE MENU (
    id_menu INT PRIMARY KEY,
    nom_menu VARCHAR(255),
    date_semaine DATE
);

CREATE TABLE ALLERGENE (
    id_allergene INT PRIMARY KEY,
    nom_allergene VARCHAR(255) NOT NULL
);

CREATE TABLE REGIME (
    id_regime INT PRIMARY KEY,
    libelle_regime VARCHAR(255) NOT NULL
);

CREATE TABLE MAGASIN (
    id_magasin INT PRIMARY KEY,
    nom_magasin VARCHAR(255) NOT NULL,
    enseigne VARCHAR(255)
);

CREATE TABLE PAYS (
    id_pays INT PRIMARY KEY,
    nom_pays VARCHAR(255) NOT NULL
);

CREATE TABLE STOCK (
    id_stock INT PRIMARY KEY,
    quantite_dispo DECIMAL(10,2),
    id_ingredient INT,
    FOREIGN KEY (id_ingredient) REFERENCES INGREDIENT(id_ingredient)
);

CREATE TABLE REGION (
    id_region INT PRIMARY KEY,
    nom_region VARCHAR(255) NOT NULL,
    id_pays INT,
    FOREIGN KEY (id_pays) REFERENCES PAYS(id_pays)
);

CREATE TABLE VILLE (
    id_ville INT PRIMARY KEY,
    code_postal VARCHAR(20),
    nom_ville VARCHAR(255) NOT NULL,
    id_region INT,
    FOREIGN KEY (id_region) REFERENCES REGION(id_region)
);

CREATE TABLE ADRESSE (
    id_adresse INT PRIMARY KEY,
    numero_rue VARCHAR(50),
    nom_rue VARCHAR(255),
    id_ville INT,
    FOREIGN KEY (id_ville) REFERENCES VILLE(id_ville)
);

CREATE TABLE INSTRUCTION (
    id_instruction INT PRIMARY KEY,
    num_etape INT,
    description_action TEXT,
    id_recette INT,
    FOREIGN KEY (id_recette) REFERENCES RECETTE(id_recette)
);

CREATE TABLE COMPOSER (
    id_recette INT,
    id_ingredient INT,
    quantite DECIMAL(10,2),
    unite_mesure VARCHAR(50),
    PRIMARY KEY (id_recette, id_ingredient),
    FOREIGN KEY (id_recette) REFERENCES RECETTE(id_recette),
    FOREIGN KEY (id_ingredient) REFERENCES INGREDIENT(id_ingredient)
);

CREATE TABLE APPARTIENT (
    id_recette INT,
    id_menu INT,
    jour_semaine VARCHAR(50),
    moment_repas VARCHAR(50),
    PRIMARY KEY (id_recette, id_menu),
    FOREIGN KEY (id_recette) REFERENCES RECETTE(id_recette),
    FOREIGN KEY (id_menu) REFERENCES MENU(id_menu)
);

CREATE TABLE NECESSITE (
    id_recette INT,
    id_ustensile INT,
    PRIMARY KEY (id_recette, id_ustensile),
    FOREIGN KEY (id_recette) REFERENCES RECETTE(id_recette),
    FOREIGN KEY (id_ustensile) REFERENCES USTENSILE(id_ustensile)
);

CREATE TABLE PRESENTER (
    id_ingredient INT,
    id_allergene INT,
    PRIMARY KEY (id_ingredient, id_allergene),
    FOREIGN KEY (id_ingredient) REFERENCES INGREDIENT(id_ingredient),
    FOREIGN KEY (id_allergene) REFERENCES ALLERGENE(id_allergene)
);

CREATE TABLE CONVENIR (
    id_ingredient INT,
    id_regime INT,
    PRIMARY KEY (id_ingredient, id_regime),
    FOREIGN KEY (id_ingredient) REFERENCES INGREDIENT(id_ingredient),
    FOREIGN KEY (id_regime) REFERENCES REGIME(id_regime)
);

CREATE TABLE REAPPROVISIONNER (
    id_stock INT,
    id_magasin INT,
    PRIMARY KEY (id_stock, id_magasin),
    FOREIGN KEY (id_stock) REFERENCES STOCK(id_stock),
    FOREIGN KEY (id_magasin) REFERENCES MAGASIN(id_magasin)
);

CREATE TABLE LOCALISER (
    id_magasin INT,
    id_adresse INT,
    PRIMARY KEY (id_magasin, id_adresse),
    FOREIGN KEY (id_magasin) REFERENCES MAGASIN(id_magasin),
    FOREIGN KEY (id_adresse) REFERENCES ADRESSE(id_adresse)
);