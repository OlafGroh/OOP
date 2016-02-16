<?php
require_once('Gehoelz.php');

class Baum extends Gehoelz {
	/*
	 * Attribute der Klasse
	 */
	private $maxHoehe;
	
	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 * Konstruktor ab PHP 5.3.3
	 */
	public function __construct($art, $pflanzjahr, $preis, $maxHoehe) {
		/*
		 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		parent::__construct($art, $pflanzjahr, $preis);
		$this->maxHoehe = $maxHoehe;
	}
	
	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public function getMaxHoehe() {
		return $this->maxHoehe;
	}
	
	public function setMaxHoehe($maxHoehe) {
		$this->maxHoehe = $maxHoehe;
	}
		
	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	public function getInfo() {
		return parent::getInfo() .  " Maxihoehe: " . $this->maxHoehe;
	}
}

?>
