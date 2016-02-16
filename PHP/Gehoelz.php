<?php
abstract class Gehoelz {
	/*
	 * Attribute der abstrakten Basisklasse
	 */
	private $art;
	private $pflanzjahr;
	private $preis;

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 * Konstruktor ab PHP 5.3.3
	 */
	public function __construct($art, $pflanzjahr, $preis) {
		$this->art			= $art;
		$this->pflanzjahr	= $pflanzjahr;
		$this->preis		= $preis;
	}
	
	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public function getArt() {
		return $this->art;
	}
	
	public function setArt($art) {
		$this->art = art;
	}
	
	public function getPflanzjahr() {
		return $this->pflanzjahr;
	}
	
	public function setPflanzjahr($pflanzjahr) {
		$this->pflanzjahr = $pflanzjahr;
	}
	
	public function getPreis() {
		return $this->preis;
	}
	
	public function setPreis($preis) {
		$this->preis = $preis;
	}	

	/*
	 * Methode getInfo, diese muss von jeder (ausser Liane) überschriben werden,
	 * wenn die Methode gleich lautet und die gleichen Parameter übernimmt und dennoch
	 * in der ableitenden Klasse eine andere Funktionalität aufweist, dann ist das
	 * Polymorph!!
	 */
	public function getInfo() {
		return "Art: " . $this->art . " Pflanzjahr: " . $this->pflanzjahr . " Preis: " . $this->preis;
	}
}

?>
