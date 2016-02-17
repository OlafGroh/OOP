using System;

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Strauch : Gehoelz{

	/* Attribute der Klasse */
	/* Attriubutes of the class */
	private bool istGiftig;

	/* Konstruktor:Alle Parameter in den Attrubuten der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
	/* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
	public Strauch(String art, int pflanzjahr, float preis, bool istGiftig) : base(art, pflanzjahr, preis) {
		this.istGiftig = istGiftig;
	}


	/* Get- und Set Methoden für alle Attribute der Klasse */
	/* Get and set methods for all attrubutes of the class */
	public bool getIstGiftig() {
		return istGiftig;
	}

	public void setIstGiftig(bool istGiftig) {
		this.istGiftig = istGiftig;
	}


	/* Polymorphe Methode  */
	/* Polymorphic method */
	public String getInfo() {
		return base.getInfo() + " ist Giftig: " + this.istGiftig;
	}
}
