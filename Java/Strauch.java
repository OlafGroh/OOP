/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Strauch extends Gehoelz{

  /* Attribute der Klasse */
  /* Attributes of the class */
  private boolean istGiftig;

  /* Konstruktor:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
  /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
  public Strauch(String art, int pflanzjahr, float preis, boolean istGiftig) {
    super(art, pflanzjahr, preis);
    this.istGiftig = istGiftig;
  }

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attributes of the class */
  public boolean getIstGiftig() {
    return this.istGiftig;
  }

  public void setIstGiftig(boolean istGiftig) {
    this.istGiftig = istGiftig;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  public String getInfo() {
    return super.getInfo() +  " ist Giftig: " + this.istGiftig;
  }
}
