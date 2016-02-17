using System;
using System.Collections.Generic;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Gaertnerei {

  /* Attribute der Klasse */
  /* Attributes of the class */
  private List<Gehoelz> pflanzen;

  /* Konstruktor:Alle Parameter in den Attributen der Klasse speichern */
  /* Constructor:store all parameters in the attributes of the class */
  public Gaertnerei() {
    this.pflanzen = new List<Gehoelz>();
  }

  /* Hinzufügen eines neuen Elementes */
  /* add a new element to the list */
  public void einkaufen(Gehoelz g) {
    this.pflanzen.Add(g);
  }

  /* Das Element mit geg. Art UND geg. Pflanzjahr wird aus der List entfernt */
  /* The element with given Art AND given. Pflanzjahr is removed from the List */
  public Gehoelz verkaufen(String art, int pflanzjahr) {
    Gehoelz tmp  = null;
    for(int count=0; count<this.pflanzen.Count; count++) {
      tmp = this.pflanzen[count];
      if( tmp.getArt() == art && tmp.getPflanzjahr() == pflanzjahr) {
        this.pflanzen.RemoveAt(count);
        return tmp;
      }
    }

    return null;
  }

  /* List mit allen Elementen erzeugen, deren Verkaufspreis kleiner wie der geg. ist */
  /* List generate with all elements whose selling price is less as the given */
  public List<Gehoelz> getWoodByLimit(float preis) {
    List<Gehoelz> liste = new List<Gehoelz>();
    Gehoelz tmp  = null;
    for(int count=0; count<this.pflanzen.Count; count++) {
      tmp = this.pflanzen[count];
      if( tmp.getPreis() < preis) {
        liste.Add(tmp);
      }
    }
    return liste;
  }
}
