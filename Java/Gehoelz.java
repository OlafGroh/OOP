package ga1_aufgabe_2_1;

public abstract class Gehoelz {
	
	/*
	 * Attribute der abstrakten Basisklasse
	 */
	private String	art;
	private int		pflanzjahr;
	private float	preis;

	/*
	 * Konstruktor um alle Attribute zu initialisieren
	 */
	public Gehoelz(String art, int pflanzjahr, float preis) {
		/*
		 * Alle übergebene Parameter in die Attribute der Klasse speichern,
		 * da diese sonst nach dem Konstruktor nicht mehr vorhanden sind!
		 */
		this.art		= art;
		this.pflanzjahr	= pflanzjahr;
		this.preis		= preis;
	}

	/*
	 * Get- und Set Methoden für alle Attribute der Klasse
	 */
	public String getArt() {
		return art;
	}

	public void setArt(String art) {
		this.art = art;
	}

	public int getPflanzjahr() {
		return pflanzjahr;
	}

	public void setPflanzjahr(int pflanzjahr) {
		this.pflanzjahr = pflanzjahr;
	}

	public float getPreis() {
		return preis;
	}

	public void setPreis(float preis) {
		this.preis = preis;
	}
	
	/*
	 * Methode getInfo, diese muss von jeder (ausser Liane) überschriben werden,
	 * wenn die Methode gleich lautet und die gleichen Parameter übernimmt und dennoch
	 * in der ableitenden Klasse eine andere Funktionalität aufweist, dann ist das 
	 * Polymorph!!
	 */
	public String getInfo() {
		return "Art: " +this.art + " Pflanzjahr: " + this.pflanzjahr + " Preis: " + this.preis;
	}
}
