package ga1_aufgabe_2_1;

public class Starter {

	public static void main(String[] args) {
		
		/*
		 * ZUm Testen einige Objekte erstelt und die Methode getInfo aufgerufen
		 */
		Baum b1 = new Baum("Eiche", 2012, 299, 25);
		Baum b2 = new Baum("Pappel", 2010, 199, 15);
		
		Liane l1 = new Liane("qwe", 1990, 15);
		
		Strauch s1 = new Strauch("Stechapfel", 1999, 2.5f, true);
		
		
		System.out.println("Baum: " + b1.getInfo());
		System.out.println("Baum: " + b2.getInfo());
		
		System.out.println("Liane: " + l1.getInfo());
		
		System.out.println("Strauch: " + s1.getInfo());

	}

}
