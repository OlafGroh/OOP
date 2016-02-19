<?php
require_once('Gehoelz.php');

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Baum extends Gehoelz {

  /* Attribute der Klasse */
  /* Attributes of the class */
  private $maxHoehe;

  /* Konstruktor:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
  /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
  public function __construct($art, $pflanzjahr, $preis, $maxHoehe) {
    parent::__construct($art, $pflanzjahr, $preis);
    $this->maxHoehe = $maxHoehe;
  }

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attributes of the class */
  public function getMaxHoehe() {
    return $this->maxHoehe;
  }

  public function setMaxHoehe($maxHoehe) {
    $this->maxHoehe = $maxHoehe;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  public function getInfo() {
    return parent::getInfo() .  " maxHoehe: " . $this->maxHoehe;
  }

}

?>
