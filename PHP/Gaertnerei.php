<?php
require_once('Gehoelz.php');

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Gaertnerei {

  /* Attribute der Klasse */
  /* Attributes of the class */
  private $pflanzen;

  /* Konstruktor:Alle Parameter in den Attributen der Klasse speichern */
  /* Constructor:store all parameters in the attributes of the class */
  function __construct() {
    $this->pflanzen = array();
  }

  /* Hinzufügen eines neuen Elementes zur ArrayList */
  /* add a new element to the ArrayList */
  public function einkaufen($g) {
    $this->pflanzen[] = $g;
  }

  /* Das Element mit geg. Art UND geg. Pflanzjahr wird aus der ArrayList entfernt */
  /* The element with given Art AND given. Pflanzjahr is removed from the ArrayList */
  public function verkaufen($art, $pflanzjahr) {
    $tmp = NULL;
    for($count=0; $count<count($this->pflanzen); $count++) {
      $tmp = $this->pflanzen[$count];
      if( $tmp->getArt() == $art && $tmp->getPflanzjahr() == $pflanzjahr) {
        array_splice($this->pflanzen, $count, 1);
        return $tmp;
      }
    }

    return NULL;
  }

  /* ArrayList mit allen Elementen erzeugen, deren Verkaufspreis kleiner wie der geg. ist */
  /* ArrayList generate with all elements whose selling price is less as the given */
  public function getWoodByLimit($preis) {
    $liste = array();
    $tmp  = NULL;
    for($count=0; $count<count($this->pflanzen); $count++) {
      $tmp = $this->pflanzen[$count];
      if( $tmp->getPreis() < $preis) {
        $liste[] = $tmp;
      }
    }
    return $liste;
  }

}

?>
