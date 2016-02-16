/*
 * Konstruktormethode um alle Attribute zu initialisieren
 */
function Strauch(art, pflanzjahr, preis, istGiftig) {
	/*
	 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
	 */
	Gehoelz.call(this, art, pflanzjahr, preis);

	var istGiftig		= istGiftig;
	
	/*
	 * Implementierung der Elterklasse "merken"
	 */
	var parentgetInfo = this.getInfo;
	
	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	this.isIstGiftig = function() {
		return maxHoehe;
	}

	this.setIstGiftig = function(istGiftig) {
		this.istGiftig = istGiftig;
	}

	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	this.getInfo = function() {
		return parentgetInfo.call(this).concat(" ist Giftig: ",  istGiftig);
	}		
}