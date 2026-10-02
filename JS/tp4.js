
// 1 crire la fonction randomInt1(max) qui renvoie un nombre entier tir alatoirement entre 0 (inclu) et max (exclu). (NB on utilisera pour cela la mthode Math.random())
function randomInt1 (max) {
return Math.floor(Math.random() * max);
}

console.log(randomInt1(1));
//0

  
//2 crire la fonction randomInt2(min, max) qui renvoie un nombre entier tir alatoirement entre min (inclu) et max (exclu).
function randomInt2 (min, max) {
return Math.floor(Math.random() * (max - min))+min;
}

console.log(randomInt2(1, 3));
//1
  

//3 crire la fonction randomIntArray(min, max, n) qui renvoie un tableau de n entiers tirs alatoirement compris entre min (inclu) et max exclu.
function randomIntArray (min, max, n) {
let tab = [];
    for (let i = 0; i < n; i++) {
      tab.push(randomInt2(min , max));
    }
    return tab;
}

var tab = randomIntArray(1, 11, 10);
console.log(tab);
[
    10, 9, 7, 2, 3,
     1, 5, 9, 2, 3
  ]
  
  

// 4 crire la fonction moyenne(tab) qui prend comme argument un tableau tab normalement indic et renvoyant la moyenne de ses lments. La tester plusieurs fois avec des tableaux d'entiers gnrs alatoirement de 10.000 lments compris entre 1 (inclu) et 101 (exclu). Que remarquer ? Qu'en dduire ?
function moyenne (tab) {
let somme = 0;
    for(let i = 0; i < tab.length; i++) {
      somme += tab[i];
    }
    return somme /tab.length;
  }

console.log(moyenne(tab)); 
//5.1 


  

//5 crire la fonction occurences(tab, min, max) prenant comme arguments un tableau tab normalement indic, contenant des nombres entiers entre min (inclus) et max (exclus) et qui renvoie un objet associant  chaque valeur comprise entre min et max le nombre d'occurrences de cette valeur dans le tableau. La tester plusieurs fois avec des tableaux d'entiers gnrs alatoirement de 10.000 lments compris entre 1 (inclu) et 101 (exclu). Que remarquer ? Qu'en dduire ?
function occurences(tab, min, max) {
let occ = {};
    for (let i = min; i < max; i++) {
      occ[i] =  0;
    }
    for (let i = 0; i < tab.length; i++) {
    occ [tab[i]]++ ;
    }
    return occ;
  }
var tabbis = randomIntArray(1, 11, 10);
console.log(occurences(tabbis, 1, 11)); 



/*{
    '1': 0,
    '2': 2,
    '3': 2,
    '4': 0,
    '5': 0,
    '6': 2,
    '7': 0,
    '8': 1,
    '9': 0,
    '10': 3
  }
    */



// 6 crire la fonction stats(tab, min, max) prenant comme arguments un tableau tab normalement indic, contenant potentiellement des nombres entiers entre min (inclus) et max (exclus) et qui renvoie un objet associant  chaque valeur comprise entre min et max la proportion d'occurrences de cette valeur dans le tableau. La tester plusieurs fois avec des tableaux d'entiers gnrs alatoirement de 10.000 lments compris entre 1 (inclu) et 101 (exclu). Que remarquer ? Qu'en dduire ?
function stats (tab, min, max) {
let occ = occurences(tab,min, max) ;
let j = {};
  for (let i = min; i < max;  i++) {
    j[i] = occ[i] /tab.length;
  }
  
  return j;
}

var tab2 = randomIntArray(1, 11, 10);
console.log(stats(tab2, 1, 11)); 
/*
{
  '1': 0.2,
  '2': 0.2,
  '3': 0,
  '4': 0.1,
  '5': 0.3,
  '6': 0,
  '7': 0,
  '8': 0.1,
  '9': 0,
  '10': 0.1
}
*/

//Avc 1000 elt
console.log(stats(randomIntArray(1, 11, 10000), 1, 11));
  
/*
{
  '1': 0.0957,
  '2': 0.1019,
  '3': 0.0955,
  '4': 0.1031,
  '5': 0.0996,
  '6': 0.0996,
  '7': 0.1018,
  '8': 0.1007,
  '9': 0.1021,
  '10': 0.1
}


*/

//Exercice 2 - Excusotron
//crire une fonction excusotron(textArray) prenant le tableau textArray de tableaux de schmes de phrases et produisant une excuse alatoire, compose  chaque fois d'un des lments de chaque tableau de schmes.

function excusotron(textArray) {
let excuse = '';
  for (let i = 0; i < textArray.length; i++) {
  let alea = randomInt1 (textArray[i].length);
    excuse += textArray[i][alea] +  ' ';
}
    
  return excuse;
  }
  
  var pipoText1 = [["Ce matin,", "Tantt,"], ["j'ai eu une panne"], ["de rveil.", "d'oreiller."]];


console.log(excusotron(pipoText1));


//Ce matin, j'ai eu une panne de rveil. 





  
var pipoText2 = [ [ "Tt dans la matine,", "Vers 4h du matin,", "Hier soir,", "Tard dans la nuit,", "En pleine nuit," ], [ "alors que", "pendant que", "au moment o", "tandis que", "comme", "cependant que" ], [ "je dormais aprs avoir relu pour la 3me fois la Comdie humaine de Balzac,", "je sommeillais en attendant de me lever pour mon footing quotidien de 5h du matin,", "je somnollais aprs avoir pass en revue une tude du Figaro Economique,", "je m'tais assoupi sur une des oeuvres passionnantes de Friedrich Wilheim Nietzsche,", "je me reposais aprs avoir pratiqu 2h intenses de Squash,", "je m'tais endormis sur un article fort intressant du Herald Tribune,", "je faisais un somme aprs avoir fini de traduire Guerre & Paix en Mandarin,", "je m'tais assoupi sur la brillante mission 'Chasse et Pche'," ], [ "mon chat", "mon chien", "ma vieille grand-mre", "mon perroquet", "mon sanglier domestique", "ma belle-mre", "mon iguane asthmatique" ], [ "a jou avec le fil lectrique de", "s'est pris les pates dans le fil lectrique de", "a appuy par mgarde sur le bouton OFF de", "a effleur par inadvertance le Snooze de", "a renvers du Coca sur", "a fait tomber dans la baignoire", "a reboot" ], [ "mon radio-rveil qui n'a donc pas sonn, et ce n'est" ], [ "que lorsque les pompiers sont entrs en hurlant 'AU FEU!'", "qu'au moment o les huissiers (venus pour le voisin) ont enfonc la porte", "qu'avec l'arrive du SAMU, venu chercher ma grand-mre", "qu'aprs l'entre fracassante de la SPA", "qu'au moment o les pompes-funbres (venues chercher ma belle-mre) ont sonn  la porte", "que quand le plombier est venu rparer l'inondation", "qu'avec la visite d'un reprsentant du Tlthon venu me remercier pour mon gnreux don de la veille" ], [ "que je me suis rveill, trop en retard pour tre  l'heure  la fac.", "que j'ai repris connaissance et me suis prcipit tardivement  la fac.", "que j'ai ralis qu'il tait trop tard pour venir  la fac ce matin.", "que j'ai bondi hors de mon lit pour me ruer  la fac." ] ];



console.log(excusotron(pipoText2));
//Vers 4h du matin, au moment o je m'tais assoupi sur une des oeuvres passionnantes de Friedrich Wilheim Nietzsche, mon chien s'est pris les pates dans le fil lectrique de mon radio-rveil qui n'a donc pas sonn, et ce n'est qu'au moment o les pompes-funbres (venues chercher ma belle-mre) ont sonn  la porte que je me suis rveill, trop en retard pour tre  l'heure  la fac. 