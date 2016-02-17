import java.util.ArrayList;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Gaertnerei {

  /* Attribute der Klasse */
  /* Attributes of the class */
  private ArrayList<Gehoelz> pflanzen;

  /* Konstruktor:Alle Parameter in den Attributen der Klasse speichern */
  /* Constructor:store all parameters in the attributes of the class */
  public Gaertnerei() {
    this.pflanzen = new ArrayList<Gehoelz>();
  }

  /* Hinzufügen eines neuen Elementes zur ArrayList */
  /* add a new element to the ArrayList */
  public void einkaufen(Gehoelz g) {
    this.pflanzen.add(g);
  }

  /* Das Element mit geg. Art UND geg. Pflanzjahr wird aus der ArrayList entfernt */
  /* The element with given Art AND given. Pflanzjahr is removed from the ArrayList */
  public Gehoelz verkaufen(String art, int pflanzjahr) {
    Gehoelz tmp  = null;
    for(int count=0; count<this.pflanzen.size(); count++) {
      tmp = this.pflanzen.get(count);
      if( tmp.getArt() == art && tmp.getPflanzjahr() == pflanzjahr) {
        this.pflanzen.remove(count);
        return tmp;
      }
    }

    return null;
  }

  /* ArrayList mit allen Elementen erzeugen, deren Verkaufspreis kleiner wie der geg. ist */
  /* ArrayList generate with all elements whose selling price is less as the given */
  public ArrayList<Gehoelz> getWoodByLimit(float preis) {
    ArrayList<Gehoelz> liste = new ArrayList<Gehoelz>();
    Gehoelz tmp  = null;
    for(int count=0; count<this.pflanzen.size(); count++) {
      tmp = this.pflanzen.get(count);
      if( tmp.getPreis() < preis) {
        liste.add(tmp);
      }
    }
    return liste;
  }
}
