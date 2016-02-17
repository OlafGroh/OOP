using System;
using System.Collections.Generic;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Gaertnerei {

  /* Attribute der abstrakten Basisklasse */
	/* Attributes of the abstract base class */
	private List<Gehoelz> pflanzen;

  /* Konstruktor:Alle Parameter in den Attributen der Klasse speichern */
	/* Constructor:store all parameters in the attributes of the class */
	public Gaertnerei() {
		this.pflanzen = new List<Gehoelz>();
	}

	public void einkaufen(Gehoelz g) {
		this.pflanzen.Add(g);
	}

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
