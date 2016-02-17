/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
function Gehoelz(art, pflanzjahr, preis) {

	if (this.constructor === Gehoelz) {
        throw new Error("Fehler abstract class!");
      }

  /* Attribute der abstrakten Basisklasse */
  /* Attriubutes of the abstract base class */
  var art		= art;
  var pflanzjahr	= pflanzjahr;
  var preis		= preis;

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attrubutes of the class */
  this.getArt = function() {
    return art;
  }

  this.setArt = function(art) {
    this.art = art;
  }

  this.getPflanzjahr = function() {
    return pflanzjahr;
  }

  this.setPflanzjahr = function(pflanzjahr) {
    this.pflanzjahr = pflanzjahr;
  }

  this.getPreis = function() {
    return preis;
  }

  this.setPreis = function(preis) {
    this.preis = preis;
  }

  /* Methode wird in allen Subklassen (ausser Liane) überschrieben */
  /* Method are overwritten in all (not in Liane) sub classes */
  this.getInfo = function() {
    return "Art: ".concat( art, " Pflanzjahr: ", pflanzjahr, " Preis: ", preis);
  }
}
