from flask import Flask, render_template, jsonify
import sqlite3

app = Flask(__name__)

def get_db_connection():
    conn = sqlite3.connect('recettes.db')
    conn.row_factory = sqlite3.Row
    return conn

@app.route('/')
def index():
    return render_template('index.html')

@app.route('/api/recettes')
def api_recettes():
    conn = get_db_connection()
    recettes = conn.execute('SELECT id_recette, nom_recette, temps_prep, difficulte, categorie_recette FROM RECETTE').fetchall()
    conn.close()
    return jsonify([dict(r) for r in recettes])

@app.route('/api/recette/<int:id_recette>')
def api_recette_details(id_recette):
    conn = get_db_connection()
    
    recette = conn.execute('SELECT * FROM RECETTE WHERE id_recette = ?', (id_recette,)).fetchone()
    
    ingredients = conn.execute('''
        SELECT i.nom_ing, c.quantite, c.unite_mesure
        FROM COMPOSER c
        JOIN INGREDIENT i ON c.id_ingredient = i.id_ingredient
        WHERE c.id_recette = ?
    ''', (id_recette,)).fetchall()

    instructions = conn.execute('SELECT num_etape, description_action FROM INSTRUCTION WHERE id_recette = ? ORDER BY num_etape', (id_recette,)).fetchall()
    
    conn.close()
    
    return jsonify({
        'recette': dict(recette),
        'ingredients': [dict(i) for i in ingredients],
        'instructions': [dict(i) for i in instructions]
    })

if __name__ == '__main__':
    print("Ouvre http://127.0.0.1:5000 dans ton navigateur.")
    app.run(debug=True)