using System;

public abstract class Gehoelz {

	/* Attribute der abstrakten Basisklasse */
	/* Attriubutes of the abstract base class */
	private String		art;
	private int				pflanzjahr;
	private float			preis;

	/* Konstruktor:Alle Parameter in den Attrubuten der Klasse speichern */
	/* Constructor:store all parameters in the attributes of the class */
	public Gehoelz(String art, int pflanzjahr, float preis) {
		this.art		= art;
		this.pflanzjahr	= pflanzjahr;
		this.preis		= preis;
	}

	/* Get- und Set Methoden für alle Attribute der Klasse */
	/* Get and set methodes for all attrubutes of the class */
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

	/* Methode wird in allen Subklassen (ausser Liane) überschrieben */
	/* Method are overwritten in all (not in Liane) sub classes */
	public String getInfo() {
		return "Art: " +this.art + " Pflanzjahr: " + this.pflanzjahr + " Preis: " + this.preis;
	}
}
