<?php
require_once('Gehoelz.php');

class Liane extends Gehoelz {

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 * Konstruktor ab PHP 5.3.3
	 */
	public function __construct($art, $pflanzjahr, $preis) {
		/*
		 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		parent::__construct($art, $pflanzjahr, $preis);
	
		/*
		 * Da Liane keine zusätzlichen Attribute enthält muss hier auch nichts
		 * weiter getan werden!
		 */
	}
	
	/*
	 * keine Get- und Set Methoden, da keine zusätzlichen Attribute vorhanden sind!
	 */
	
	/*
	 * kein Überschreiben von getInfo, da die Ausgabe nicht erwitert werden muss!
	 */	
	
}

?>