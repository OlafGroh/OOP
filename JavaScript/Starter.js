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
   var l1 = new Liane("Gemeiner Efeu", 1990, 15);
   var s1 = new Strauch("Stechapfel", 1999, 2.5, true);

   console.log("Baum: ".concat(b1.getInfo()) );
   console.log("Baum: ".concat(b2.getInfo()) );
   console.log("Liane: ".concat(l1.getInfo()) );
   console.log("Strauch: ".concat(s1.getInfo()) );

   /* Objekt vom Typ Gaertnerei erstellen */
   /* create an object from type Gaertnerei */
   var gae1 = new Gaertnerei();

   /* testen der einkaufen Methode einkaufen */
   /* test the einkaufen method */
   gae1.einkaufen(b1);
   gae1.einkaufen(b2);
   gae1.einkaufen(l1);
   gae1.einkaufen(s1);

   /* testen der verkaufen Methode einkaufen */
   /* test the verkaufen method */
   gae1.verkaufen("Eiche" , 2012);

   /* testen der getWoodByLimit Methode einkaufen */
   /* test the getWoodByLimit method */
   var tmp = gae1.getWoodByLimit(199.01);

   /* testen ob die Methode die richtigen Werte zurück liefert */
   /* test if the returnvalues of the method are right */
   console.log("");
   for(var c=0; c<tmp.length; c++) {
     console.log("[".concat(c).concat("] = ").concat(tmp[c].getInfo()) );
   }

   /* die Methodenerweiterungen der Klassen Baum und Strauch testen */
   /* test of the extension of the classes Baum and Strauch */
   console.log("");
   for(var c=0; c<tmp.length; c++) {
     var objtmp = tmp[c];
     if( objtmp instanceof Baum) {
       var baum = objtmp;
       console.log("Instanz war vom Typ Baum: Art=".concat( baum.getArt() ).concat(" maximale Höhe=").concat( baum.getMaxHoehe() ));
     }else if( objtmp instanceof Liane) {
       var liane = objtmp;
       console.log("Instanz war vom Typ Liane : Art=".concat( liane.getArt() ));
     }else if( objtmp instanceof Strauch) {
       var strauch = objtmp;
       console.log("Instanz war vom Typ Strauch : Art=".concat( strauch.getArt() ).concat(" ist Giftig=").concat( strauch.getIstGiftig() ));
     }
   }
}

/* Einstiegspunkt wie z.B in C/C++ und Java nachbilden */
/* replicate entry point as e.g. in C/C ++ and Java */
main();
