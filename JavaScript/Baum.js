/*
 * Konstruktormethode um alle Attribute zu initialisieren
 */
function Baum(art, pflanzjahr, preis, maxHoehe) {
	/*
	 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
	 */
	Gehoelz.call(this, art, pflanzjahr, preis);

	var maxHoehe		= maxHoehe;
	
	/*
	 * Implementierung der Elterklasse "merken"
	 */
	var parentgetInfo = this.getInfo;
	
	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	this.getMaxHoehe = function() {
		return maxHoehe;
	}

	this.setMaxHoehe = function(maxHoehe) {
		this.maxHoehe = maxHoehe;
	}

	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	this.getInfo = function() {
		return parentgetInfo.call(this).concat(" Maxihoehe: ",  maxHoehe);
	}		
}