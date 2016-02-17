import java.util.ArrayList;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Gaertnerei {

  /* Attribute der abstrakten Basisklasse */
	/* Attriubutes of the abstract base class */
	private ArrayList<Gehoelz> pflanzen;

  /* Konstruktor:Alle Parameter in den Attributen der Klasse speichern */
	/* Constructor:store all parameters in the attributes of the class */
	public Gaertnerei() {
		this.pflanzen = new ArrayList<Gehoelz>();
	}

	public void einkaufen(Gehoelz g) {
		this.pflanzen.add(g);
	}

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
