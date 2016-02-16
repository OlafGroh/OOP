package ga1_aufgabe_2_1;

public class Liane extends Gehoelz{

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 */	
	public Liane(String art, int pflanzjahr, float preis) {
		/*
		 * Aufrufen den Konstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		super(art, pflanzjahr, preis);
		
		/*
		 * Da Liane keine zusätzlichen Attribute enthält muss hier auch nichts
		 * weiter getan werden!
		 */
	}

	
	/*
	 * keine Get- und Set Methoden, da keine zusätzlichen Attribute vorhanden sind!
	 */
	
	/*
	 * kein Überschreiben von getInfo, da die Ausgabe nicht erwitert werden muss!
	 */
}
