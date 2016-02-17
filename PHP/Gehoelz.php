<?php

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
abstract class Gehoelz {

  /* Attribute der abstrakten Basisklasse */
  /* Attributes of the abstract base class */
  private $art;
  private $pflanzjahr;
  private $preis;

  public function __construct($art, $pflanzjahr, $preis) {
    $this->art        = $art;
    $this->pflanzjahr = $pflanzjahr;
    $this->preis      = $preis;
  }

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attributes of the class */
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

  /* Methode wird in allen Subklassen (ausser Liane) überschrieben */
  /* Method are overwritten in all (not in Liane) sub classes */
  public function getInfo() {
    return "Art: " . $this->art . " Pflanzjahr: " . $this->pflanzjahr . " Preis: " . $this->preis;
  }

}

?>
