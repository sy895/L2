function infoPopup() {
  const nom = navigator.appName;
  const version = navigator.appVersion;
  const plateforme = navigator.platform;
  const userAgent = navigator.userAgent;

  alert(
    "Navigateur : " + nom + "\n" +
    "Version : " + version + "\n" +
    "Plateforme : " + plateforme + "\n" +
    "User agent : " + userAgent
  );
}

// window.document
document.write("<h3>window.document</h3>");
document.write("Nombre : 42 ");
document.writeln("Test writeln.");

let texte = "exemple";
document.write(" Variable : " + texte);
document.write(" Pi " + Math.PI);

let alea = Math.floor(Math.random() * 101);
document.write(" Aléatoireentre 0 et 100 : " + alea);

let temperature = prompt("Température ?");
let seuil = 20;

if (temperature > seuil) {
  document.write(" Chaud.");
} else {
  document.write(" Froid.");
}

document.write("ecran : ");
document.write("largeur " + screen.width + " px, ");
document.write("hauteur " + screen.height + " px, ");
document.write("couleurs " + screen.colorDepth + " bits.");
