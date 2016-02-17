<?php
require_once('Gehoelz.php');

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Strauch extends Gehoelz {

  /* Attribute der Klasse */
  /* Attributes of the class */
  private $istGiftig;

  /* Konstruktor:Alle Parameter in den Attrubuten der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
  /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
  public function __construct($art, $pflanzjahr, $preis, $istGiftig) {
    parent::__construct($art, $pflanzjahr, $preis);
    $this->istGiftig = $istGiftig;
  }

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attrubutes of the class */
  public function getIstGiftig() {
    return $this->istGiftig;
  }

  public function setIstGiftig($istGiftig) {
    $this->istGiftig = $istGiftig;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  public function getInfo() {
    return parent::getInfo() .  " ist Giftig: " . $this->istGiftig;
  }
  
}
?>
