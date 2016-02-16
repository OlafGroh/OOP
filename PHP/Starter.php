<?php
require_once('Baum.php');
require_once('Liane.php');
require_once('Strauch.php');

function main() {
	/*
	 * ZUm Testen einige Objekte erstelt und die Methode getInfo aufgerufen
	 */
	
	$b1 = new Baum("Eiche", 2012, 299, 25);
	$b2 = new Baum("Pappel", 2010, 199, 15);
	
	$s1 = new Strauch("Stechapfel", 1999, 2.5, true);
	
	$l1 = new Liane("qwe", 1990, 15);
	
	print "Baum: " . $b1->getInfo()  . "\n";
	print "Baum: " . $b2->getInfo()  . "\n";
	
	print "Strauch: " . $s1->getInfo() . "\n";
	
	print "Liane: " . $l1->getInfo() . "\n";
		
}

/*
 * Hier main aufrufen und starten like C, C++ and Java
 */
main();
?>