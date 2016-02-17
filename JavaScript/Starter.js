/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
function main() {

   /* einige Testdaten */
   /* some testdata */
   var b1 = new Baum("Eiche", 2012, 299, 25);
   var b2 = new Baum("Pappel", 2010, 199, 15);
   var l1 = new Liane(" Gemeiner Efeu", 1990, 15);
   var s1 = new Strauch("Stechapfel", 1999, 2.5, true);

   console.log("Baum: ".concat(b1.getInfo()) );
   console.log("Baum: ".concat(b2.getInfo()) );
   console.log("Liane: ".concat(l1.getInfo()) );
   console.log("Strauch: ".concat(s1.getInfo()) );
}

/* Einstiegspunkt wie z.B in C/C++ und Java nachbilden */
/* replicate entry point as e.g. in C / C ++ and Java */
main();
