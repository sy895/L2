
/* exercice 1, Écrire une fonction maxi(n,m) qui renvoie la plus grand des deux valeurs*/

function maxi(n,m) {
   return Math.max (n,m); /*module Math */
}
console.log (maxi(2,3));
console.log (maxi(2,2));
console.log (maxi(2,-2));


/* exercice 2, Écrire une fonction maxi(n,m) qui renvoie la plus grand des deux valeurs*/

function abs(n) {
   return Math.abs (n); /*module Math */
}
console.log (abs(-4));
console.log (abs(-0));
console.log (abs(3.14));


/* exercice 3 */

/*1) Écrire une fonction harm( n ) calculant la somme des n premiers termes de la suite harmonique. */
function harm(n) {
   const euler = 0.5772156649 ;
   if (n <=0)return 0;
   return Math.log (n) + euler; /*module Math */
}
console.log (harm(0));
console.log (harm(1));
console.log (harm(100));
console.log (harm(1000));

/*2)Écrire une fonction harmAlt( n ) calculant la somme des n premiers termes de la suite harmonique alternée. */

function harmAlt(n) {
   if (n <=0)return 0;
   let res = 0 ;
   for (let i=1 ; i<=n ; i++) {
      res += ((-1) ** i) /i ;
   }
 
   return res ;
}
console.log (harmAlt(0));
console.log (harmAlt(1));
console.log (harmAlt(1000));
console.log (harmAlt(100000));``


/* 3. Sachant que la suite harmonique alternée converge vers -ln(2), écrire une fonction nbIterHarmAlt(epsilon) calculant le nombre de pas nécessaire pour atteindre une précision epsilon de la valeur de -ln(2).*/

function nbIterHarmAlt(epsilon) {
   const loga = -Math.log(2) ; //module Math
   let res = 0 ;
   let n = 0 ;
   while (true) {
   n ++ ;
   res += (n % 2 === 0 ? 1 : -1) / n ;
   if (Math.abs(res- loga) < epsilon) {
      return n ;
   }

   }
   }

console.log (nbIterHarmAlt(1));
console.log (nbIterHarmAlt(0.1));
console.log (nbIterHarmAlt(0.001));
console.log (nbIterHarmAlt(0.00001));


/*exercice 4, ecrire une fonction celsiusToFahrenheit(n,m) qui affiche sur la console la table de
conversion des degrés Celsius en degrés Fahrenheit de 0 à n avec un pas paramétrable m */

function celsiusToFahrenheit(n,m){
   if(n<=0||m<=0) return NaN;
   for(let c=0;c<=n;c+=m){
   let f = (9 * c) / 5+32;
   console.log(c+" Celsius en "+f+" Farenheigt");
   }
   return NaN;
   }
   
   console.log(celsiusToFahrenheit(200,10)); 
   
   
 