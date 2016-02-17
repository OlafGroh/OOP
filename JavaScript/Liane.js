/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
function Liane(art, pflanzjahr, preis) {
  /* Keine zusätzlichen Attrubute */
  /* No additional attributes */

  /* Konstruktorfunktion:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
  /* Constructorfunction:store all parameters in the attributes of the base class, call the constructor of the base class */
  Gehoelz.call(this, art, pflanzjahr, preis);

  /* Keine zusätzlichen Get- und Set Methoden */
  /* No additional get and set methodes */

  /* Kein Überschreiben der Methoden getInfo() */
  /* No overriding the methods getInfo() */
}
