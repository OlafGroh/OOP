/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */

 /* Konstruktorfunktion:Alle Parameter in den Attrubuten der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
 /* Constructorfunction:store all parameters in the attributes of the base class, call the constructor of the base class */
function Strauch(art, pflanzjahr, preis, istGiftig) {
  Gehoelz.call(this, art, pflanzjahr, preis);

  /* Attribute der Klasse */
  /* Attriubutes of the class */
  var istGiftig		= istGiftig;
  var parentgetInfo = this.getInfo;

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attrubutes of the class */
  this.isIstGiftig = function() {
    return maxHoehe;
  }

  this.setIstGiftig = function(istGiftig) {
    this.istGiftig = istGiftig;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  this.getInfo = function() {
    return parentgetInfo.call(this).concat(" ist Giftig: ",  istGiftig);
  }
}
