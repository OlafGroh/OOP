/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Baum extends Gehoelz{

  /* Attribute der Klasse */
  /* Attributes of the class */
  private int maxHoehe;

  /* Konstruktor:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
  /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
  public Baum(String art, int pflanzjahr, float preis, int maxHoehe) {
    super(art, pflanzjahr, preis);
    this.maxHoehe		= maxHoehe;
  }

  /* Get- und Set Methoden für alle Attribute der Klasse */
  /* Get and set methods for all attributes of the class */
  public int getMaxHoehe() {
    return this.maxHoehe;
  }

  public void setMaxHoehe(int maxHoehe) {
    this.maxHoehe = maxHoehe;
  }

  /* Polymorphe Methode */
  /* Polymorphic method */
  public String getInfo() {
    return super.getInfo() +  " maxHoehe: " + this.maxHoehe;
  }
}
