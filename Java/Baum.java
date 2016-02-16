package ga1_aufgabe_2_1;

public class Baum extends Gehoelz{
	
	private int maxHoehe;

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 */
	public Baum(String art, int pflanzjahr, float preis, int maxHoehe) {
		/*
		 * Aufrufen den Kinstruktors der Basisklasse, hier also von Gehoelz!!
		 */
		super(art, pflanzjahr, preis);
				
		/*
		 * Alle übergebene Parameter in die Attribute der Klasse speichern,
		 * da diese sonst nach dem Konstruktor nicht mehr vorhanden sind!
		 */
		this.maxHoehe		= maxHoehe;
	}

	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public int getMaxHoehe() {
		return maxHoehe;
	}

	public void setMaxHoehe(int maxHoehe) {
		this.maxHoehe = maxHoehe;
	}
	
	/*
	 * Methode getInfo wird überschrieben, die Implementierung der Basisklasse wird aufgerufen
	 * und das zusätzliche Attribut angehängt
	 */
	public String getInfo() {
		return super.getInfo() +  " Maxihoehe: " + this.maxHoehe;
	}	
	
}
