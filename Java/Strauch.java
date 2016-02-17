/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Strauch extends Gehoelz{

  /* Attribute der Klasse */
	/* Attriubutes of the class */
	private boolean istGiftig;

	public Strauch(String art, int pflanzjahr, float preis, boolean istGiftig) {
		super(art, pflanzjahr, preis);
		this.istGiftig = istGiftig;
	}

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attrubutes of the class */
  public boolean getIstGiftig() {
		return this.istGiftig;
	}

	public void setIstGiftig(boolean istGiftig) {
		this.istGiftig = istGiftig;
	}

  /* Polymorphe Methode  */
  /* Polymorphic method */
	public String getInfo() {
		return super.getInfo() +  " ist Giftig: " + this.istGiftig;
	}

}
