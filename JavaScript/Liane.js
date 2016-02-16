/*
 * Konstruktormethode um alle Attribute zu initialisieren
 */
function Liane(art, pflanzjahr, preis) {
	/*
	 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
	 */
	Gehoelz.call(this, art, pflanzjahr, preis);
    
	/*
	 * Da Liane keine zusätzlichen Attribute enthält muss hier auch nichts
	 * weiter getan werden!
	 */

	/*
	 * keine Get- und Set Methoden, da keine zusätzlichen Attribute vorhanden sind!
	 */
	
	/*
	 * kein Überschreiben von getInfo, da die Ausgabe nicht erwitert werden muss!
	 */
	
}