/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */

 /* Konstruktorfunktion:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
 /* Constructorfunction:store all parameters in the attributes of the base class, call the constructor of the base class */
function Baum(art, pflanzjahr, preis, maxHoehe) {
  Gehoelz.call(this, art, pflanzjahr, preis);

  /* Attribute der Klasse */
  /* Attributes of the class */
  var maxHoehe      = maxHoehe;
  var parentgetInfo = this.getInfo;

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attributes of the class */
  this.getMaxHoehe = function() {
    return maxHoehe;
  }

  this.setMaxHoehe = function(maxHoehe) {
    this.maxHoehe = maxHoehe;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  this.getInfo = function() {
    return parentgetInfo.call(this).concat(" maxHoehe: ",  maxHoehe);
  }
}
