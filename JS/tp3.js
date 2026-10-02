//Exercice 1  Code de Csar

// crire une fonction codeCesar(msg, key) qui code la chane en majuscules msg au moyen de la cl key en utilisant le code de Csar.
function codeCesar(msg, key){
let res = '';
  for(let i = 0; i <  msg.length; i++) {
    let charCode = msg.charCodeAt(i);
    let nvCharCode= ((charCode-65 + key) % 26) +65;
  res += String.fromCharCode(nvCharCode);
  }
  return res;
}

console.log(codeCesar('COUCOU', 3));
//FRXFRX
console.log(codeCesar('ZORRO', 3));
//CRUUR


//2 crire une fonction decodeCesar(msg, key) qui dcode la chane en majuscules msg au moyen de la cl key en utilisant le code de Csar.
function decodeCesar(msg,key) {
let res = '';
  for (let i = 0; i <  msg.length; i++) {
    let charCode = msg.charCodeAt(i);
    let nvCharCode = ((charCode - 65 - key + 26) % 26)+ 65;
    res += String.fromCharCode(nvCharCode);
  }
  return res;
}

console.log(decodeCesar('CRUUR', 3));
//ZORRO



// 3.crire une fonction codeCesar2(msg, key) qui code la chane en majuscules msg et contenant potentiellement des espaces au moyen de la cl key en utilisant le code de Csar.

function codeCesar2(msg, key) {
let res = '' ;
  for (let i = 0; i <msg.length; i++) {
    if (msg[i] === ' ') {
      res += ' ';
    } else 
    {
      let charCode = msg.charCodeAt(i);
      let nCharCode = ((charCode-65 + key) % 26) + 65 ;
      res += String.fromCharCode(nCharCode);
    }
  }
return res;
}

console.log(codeCesar2('COUCOU TOUT LE MONDE', 3)); 
//FRXFRX WRXW OH PRQGH

//3 bis
function decodeCesar2(msg,key) {
let res = '';
    for (let i = 0; i < msg.length; i++) {
    if (msg[i] ===  ' ') {
      res += ' ';
    } else 
    {
      let charCode = msg.charCodeAt(i) ;
      let nCharCode = ((charCode - 65 - key + 26) % 26)+65;
      res += String.fromCharCode(nCharCode);
    }
  }
  return res;
}

console.log(decodeCesar2('FRXFRX WRXW OH PRQGH', 3)); 
//COUCOU TOUT LE MONDE


// 4.crire une fonction codeCesar3(msg, key, blanks) qui code la chane en majuscules msg au moyen de la cl key en utilisant le code de Csar et qui laisse les caractres de la chane blanks en clair.

function codeCesar3(msg, key, blanks) {
let res = '';
  for (let i = 0; i < msg.length;  i++) {
    if (blanks.includes(msg[i])) {
      res += msg[i];
    } else 
    {
      let charCode = msg.charCodeAt(i);
    let nCharCode = ((charCode - 65 + key) % 26) + 65;
      res += String.fromCharCode(nCharCode);
    }
  }
  return res;
}

console.log(codeCesar3('COUCOU, TOUT LE MONDE !', 3, ', !'));
//FRXFRX, WRXW OH PRQGH !



// crire une fonction decodeCesar3(msg, key, blanks) qui dcode la chane en majuscules msg au moyen de la cl key en utilisant le code de Csar et qui laisse les caractres de la chane blanks en clair.
function decodeCesar3(msg, key, blanks) {
let res = '' ;
  for (let i = 0; i < msg.length; i++) {
  if (blanks.includes(msg[i])) {
      res += msg[i];
    } else 
    {
      let charCode = msg.charCodeAt(i);
      let nCharCode = ((charCode - 65- key + 26) % 26)+65;
      res += String.fromCharCode(nCharCode);
    }
  }
  return res;
}

console.log(decodeCesar3('FRXFRX, WRXW OH PRQGH !', 3, ', !')); 
//COUCOU, TOUT LE MONDE !





//Exercice 2  Code par substitution


//crire une fonction codeSubstitution(msg, key) (resp. decodeSubstitution(msg, key)) qui renvoie le code (resp. dcodage) par substitution de la chane msg contenant des majuscules et des espaces par la cl key (la premire lettre montre comment est cod le 'A', la seconde le 'B', etc.).


function codeSubstitution(msg, key) {
let lettre ='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
let res = '';
  for (let i = 0; i < msg.length; i++) {
    if (msg[i] === ' ' ) {
      res += ' ' ;
    } else 
    {
    let index = lettre.indexOf(msg[i]);
      res += key[index] ;
    }
  }
  return res;
}

console.log(codeSubstitution('CECI EST UN TEST', 'AZERTYUIOPQSDFGHJKLMWXCVBN')); 
//ETEO TLM WF MTLM



function decodeSubstitution(msg, key) {
let lettre ='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
let res = '' ;
  for (let i = 0; i<msg.length ; i++) {
  if (msg[i] === ' ') {
      res += ' ';
    } else
    {
      let index = key.indexOf(msg[i]);
      res += lettre[index];
    }
  }
  return res;
}

console.log(decodeSubstitution('ETEO TLM WF MTLM', 'AZERTYUIOPQSDFGHJKLMWXCVBN')); 
//CECI EST UN TEST
