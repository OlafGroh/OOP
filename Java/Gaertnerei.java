package ga1_aufgabe_2_2;

import java.util.ArrayList;

import ga1_aufgabe_2_1.Gehoelz;

public class Gaertnerei {

	/*
	 * Datenstruktur um Gehoelze zu verwalten
	 */
	private ArrayList<Gehoelz> pflanzen;
	
	/*
	 * Konstruktor um die Variable pflanzen zu initialisieren
	 */
	public Gaertnerei() {
		this.pflanzen = new ArrayList<Gehoelz>();
	}
	
	/*
	 * fügt der Datensruktur ein übergebenes Element hinzu
	 */
	public void einkaufen(Gehoelz g) {
		this.pflanzen.add(g);
	}
	
	/*
	 * verkaufen einer Pflanze, wenn gefunden liefert es die Referenz zurück, sonst null
	 */
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
	
	/*
	 * eine Liste zurück gegben, die alle Gehölze enthät, die
	 * günstiger sind wie der Übergabewert!
	 */
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
