<?php
require_once('Gehoelz.php');

class Strauch extends Gehoelz {
	/*
	 * Attribute der Klasse
	 */
	private $istGiftig;
	
	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 * Konstruktor ab PHP 5.3.3
	 */
	public function __construct($art, $pflanzjahr, $preis, $istGiftig) {
		/*
		 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		parent::__construct($art, $pflanzjahr, $preis);
		$this->istGiftig = $istGiftig;
	}	

	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public function isIstGiftig() {
		return $this->istGiftig;
	}
	
	public function setIstGiftig($istGiftig) {
		$this->istGiftig = $istGiftig;
	}	

	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	public function getInfo() {
		return parent::getInfo() .  " ist Giftig: " . $this->istGiftig;
	}	
}
?>