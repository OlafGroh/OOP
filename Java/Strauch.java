package ga1_aufgabe_2_1;

public class Strauch extends Gehoelz{
	
	private boolean istGiftig;

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 */
	public Strauch(String art, int pflanzjahr, float preis, boolean istGiftig) {
		/*
		 * Aufrufen den Kinstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		super(art, pflanzjahr, preis);

		/*
		 * Alle übergebene Parameter in die Attribute der Klasse speichern,
		 * da diese sonst nach dem Konstruktor nicht mehr vorhanden sind!
		 */
		this.istGiftig = istGiftig;
	}

	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public boolean isIstGiftig() {
		return istGiftig;
	}

	public void setIstGiftig(boolean istGiftig) {
		this.istGiftig = istGiftig;
	}

	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	public String getInfo() {
		return super.getInfo() +  " ist Giftig: " + this.istGiftig;
	}		
	
}
