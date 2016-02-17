import java.util.ArrayList;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Starter {

	public static void main(String[] args) {

    /* einige Testdaten */
    /* some testdata */
		Baum b1     = new Baum("Eiche", 2012, 299, 25);
		Baum b2     = new Baum("Pappel", 2010, 199, 15);
		Liane l1    = new Liane("Gemeiner Efeu", 1990, 15);
		Strauch s1  = new Strauch("Stechapfel", 1999, 2.5f, true);


		System.out.println("Baum: " + b1.getInfo());
		System.out.println("Baum: " + b2.getInfo());
		System.out.println("Liane: " + l1.getInfo());
		System.out.println("Strauch: " + s1.getInfo());

    /* Objekt vom Typ Gaertnerei erstellen */
    /* create an object from type Gaertnerei */
    Gaertnerei gae1 = new Gaertnerei();

    /* testen der einkaufen Methode einkaufen */
    /* test the einkaufen method */
    gae1.einkaufen(b1);
    gae1.einkaufen(b2);
    gae1.einkaufen(l1);
    gae1.einkaufen(s1);

    /* testen der verkaufen Methode einkaufen */
    /* test the verkaufen method */
    gae1.verkaufen("Eiche" , 2012);

    /* testen der getWoodByLimit Methode einkaufen */
    /* test the getWoodByLimit method */
    ArrayList<Gehoelz> tmp;
    tmp = gae1.getWoodByLimit(199.01f);

    /* testen ob die Methode die richtigen Werte zurück liefert */
    /* test if the returnvalues of the method are right */
    System.out.println();
    for(int c=0; c<tmp.size(); c++) {
      System.out.println("[" + c + "] = " + (tmp.get(c)).getInfo() );
    }
  }

}
