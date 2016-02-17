#include <iostream>
#include <sstream>
#include "Baum.h"

    /*
     * autor:   Olaf Groh
     * date:    17/02/2016
     * version: 1.0
     */

     /* Konstruktor:Alle Parameter in den Attrubuten der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
     /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
	Baum::Baum(std::string art, int pflanzjahr, float preis, int maxHoehe) : Gehoelz(art, pflanzjahr, preis) {
		this->maxHoehe = maxHoehe;
	}

    /* Get- und Set Methoden für alle Attribute der Klasse */
	/* Get and set methods for all attrubutes of the class */
	int Baum::getMaxHoehe() {
		return this->maxHoehe;
	}

	void Baum::setMaxHoehe(int maxHoehe) {
		this->maxHoehe = maxHoehe;
	}

    /* Polymorphe Methode  */
	/* Polymorphic method */
	std::string Baum::getInfo() {
		std::ostringstream output;
		output << Gehoelz::getInfo() << " Maxhoehe: " << this->maxHoehe;
		return output.str();
	}
    /* Implementierung der Markermethode */
    /* Implemetation of the mark method */
	void Baum::abstract(){}
