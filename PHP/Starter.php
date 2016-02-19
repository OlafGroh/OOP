<?php
require_once('Baum.php');
require_once('Liane.php');
require_once('Strauch.php');
require_once('Gaertnerei.php');

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
function main() {

  /* einige Testdaten */
  /* some testdata */
  $b1 = new Baum("Eiche", 2012, 299, 25);
  $b2 = new Baum("Pappel", 2010, 199, 15);
  $l1 = new Liane("Gemeiner Efeu", 1990, 15);
  $s1 = new Strauch("Stechapfel", 1999, 2.5, true);

  print "Baum: "    . $b1->getInfo()  . "\n";
  print "Baum: "    . $b2->getInfo()  . "\n";
  print "Liane: "   . $l1->getInfo() . "\n";
  print "Strauch: " . $s1->getInfo() . "\n";


  /* Objekt vom Typ Gaertnerei erstellen */
  /* create an object from type Gaertnerei */
  $gae1 = new Gaertnerei();

  /* testen der einkaufen Methode einkaufen */
  /* test the einkaufen method */
  $gae1->einkaufen($b1);
  $gae1->einkaufen($b2);
  $gae1->einkaufen($l1);
  $gae1->einkaufen($s1);

  /* testen der verkaufen Methode einkaufen */
  /* test the verkaufen method */
  $gae1->verkaufen("Eiche" , 2012);

  /* testen der getWoodByLimit Methode einkaufen */
  /* test the getWoodByLimit method */
  $tmp = $gae1->getWoodByLimit(199.01);

  /* testen ob die Methode die richtigen Werte zurück liefert */
  /* test if the returnvalues of the method are right */
  print "\n";
  for($c=0; $c<count($tmp); $c++) {
    print "[" . $c . "] = "  . $tmp[$c]->getInfo() . "\n";
  }

  /* die Methodenerweiterungen der Klassen Baum und Strauch testen */
  /* test of the extension of the classes Baum and Strauch */
  print "\n";
  for($c=0; $c<count($tmp); $c++) {
    $objtmp = $tmp[$c];
    if( $objtmp instanceof Baum) {
        $baum = $objtmp;
        print "Instanz war vom Typ Baum: Art=" . $baum->getArt() . " maximale Höhe=" . $baum->getMaxHoehe() . "\n";
    }else if( $objtmp instanceof Liane) {
      $liane = $objtmp;
      print "Instanz war vom Typ Liane : Art=" . $liane->getArt() . "\n";
    }else if( $objtmp instanceof Strauch) {
      $strauch = $objtmp;
      print "Instanz war vom Typ Strauch : Art=" . $strauch->getArt() . " ist Giftig=" . $strauch->getIstGiftig() . "\n";
    }
  }
}

/* Einstiegspunkt wie z.B in C/C++ und Java nachbilden */
/* replicate entry point as e.g. in C/C ++ and Java */
main();
?>
