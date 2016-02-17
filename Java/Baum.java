/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Baum extends Gehoelz{

	private int maxHoehe;

  /* Attribute der abstrakten Basisklasse */
	/* Attriubutes of the abstract base class */
	public Baum(String art, int pflanzjahr, float preis, int maxHoehe) {
		super(art, pflanzjahr, preis);
		this.maxHoehe		= maxHoehe;
	}

  /* Get- und Set Methoden für alle Attribute der Klasse */
	/* Get and set methods for all attrubutes of the class */
	public int getMaxHoehe() {
		return this.maxHoehe;
	}

	public void setMaxHoehe(int maxHoehe) {
		this.maxHoehe = maxHoehe;
	}

  /* Polymorphe Methode  */
	/* Polymorphic method */
	public String getInfo() {
		return super.getInfo() +  " Maxihoehe: " + this.maxHoehe;
	}

}
