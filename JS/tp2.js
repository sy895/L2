/*
function estPalindrome (mot){
mot = mot.toLowerCase();
let inverse = mot.split('').reverse().join('');
return mot === inverse;
}
  console.log(estPalindrome('toto'));
  console.log(estPalindrome('radar'));
  console.log(estPalindrome('abba'));
  console.log(estPalindrome('SOS')); 


function compteMots(s){
return s.split(' ').length;
}
  
  console.log(compteMots('la maman de Colette et de Daniel'));


function compteMots2(s) {
return s.trim().split(/\s+/).length;
  }
  console.log(compteMots2(' la maman    de Colette et de   Daniel  '));
  
  */

function compteMots3(s, sep) {
let l = new RegExp('[' + sep + ']+', 'g');
s = s.replace(l, ' ');
return s.trim().split(/\s+/).length;
}
console.log(compteMots3('Ceci, mais oui, est une phrase !', ' !,'));