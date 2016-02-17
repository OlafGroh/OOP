<?php
require_once('Baum.php');
require_once('Liane.php');
require_once('Strauch.php');

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
}

/* Einstiegspunkt wie z.B in C/C++ und Java nachbilden */
/* replicate entry point as e.g. in C / C ++ and Java */
main();
?>
