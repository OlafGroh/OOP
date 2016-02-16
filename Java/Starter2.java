package ga1_aufgabe_2_2;

import java.util.ArrayList;

import ga1_aufgabe_2_1.Baum;
import ga1_aufgabe_2_1.Gehoelz;
import ga1_aufgabe_2_1.Liane;
import ga1_aufgabe_2_1.Strauch;

public class Starter {

	public static void main(String[] args) {
		
		Gaertnerei gae1 = new Gaertnerei();

		Baum b1 = new Baum("Eiche", 2012, 299.0f, 25);
		Baum b2 = new Baum("Pappel", 2010, 199.0f, 15);
		
		Liane l1 = new Liane("qwe", 1990, 10);
		
		Strauch s1 = new Strauch("Stechapfel", 1999, 2.5f, true);
		
		/*
		 * testen der Methode einkaufen
		 */		
		gae1.einkaufen(b1);
		gae1.einkaufen(b2);
		
		gae1.einkaufen(l1);
		
		gae1.einkaufen(s1);
		
		/*
		 * testen der Methode verkaufen
		 */
		gae1.verkaufen("Eiche" , 2012);
		
		
		/*
		 * testen der Methode getWoodByLimit
		 */
		ArrayList<Gehoelz> tmp;
		tmp = gae1.getWoodByLimit(199.01f);
		
		/*
		 * testen ob die Methode die richtigen Daten zurück liefert
		 */
		for(int c=0; c<tmp.size(); c++) {
			System.out.println("[" + c + "] = " + (tmp.get(c)).getInfo() );
		}
	}

}
