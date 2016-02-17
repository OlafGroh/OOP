using System;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
public class Liane : Gehoelz{

	/* Keine zusätzlichen Attrubute */
	/* No additional attributes */

	/* Konstruktor:Alle Parameter in den Attrubuten der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
	/* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
	public Liane(String art, int pflanzjahr, float preis) : base(art, pflanzjahr, preis) {
	}

	/* Keine zusätzlichen Get- und Set Methoden */
	/* No additional get and set methodes */

	/* Kein Überschreiben der Methoden getInfo() */
	/* No overriding the methods getInfo() */
}
