#include <iostream>
#include <sstream>
#include "Gehoelz.h"
    /*
     * autor:   Olaf Groh
     * date:    17/02/2016
     * version: 1.0
     */

     /* Konstruktor:Alle Parameter in den Attrubuten der Klasse speichern */
 	/* Constructor:store all parameters in the attributes of the class */
     Gehoelz::Gehoelz(std::string art, int pflanzjahr, float preis) {
 		this->art			= art;
 		this->pflanzjahr	= pflanzjahr;
 		this->preis			= preis;
 	}

    /* Get- und Set Methoden für alle Attribute der Klasse */
	/* Get and set methods for all attrubutes of the class */
	std::string& Gehoelz::getArt() {
		return art;
	}

	void Gehoelz::setArt(const std::string& art) {
		this->art = art;
	}

	int Gehoelz::getPflanzjahr() {
		return pflanzjahr;
	}

	void Gehoelz::setPflanzjahr(int pflanzjahr) {
		this->pflanzjahr = pflanzjahr;
	}

	float Gehoelz::getPreis() {
		return preis;
	}

	void Gehoelz::setPreis(float preis) {
		this->preis = preis;
	}

    /* Methode wird in allen Subklassen (ausser Liane) überschrieben */
	/* Method are overwritten in all (not in Liane) sub classes */
	std::string Gehoelz::getInfo() {
		std::ostringstream output;
		output << "Art: " << this->art << " Pflanzjahr: " << this->pflanzjahr << " Preis: " << this->preis;
		return output.str();
	}
