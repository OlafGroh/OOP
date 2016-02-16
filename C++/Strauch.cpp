#include <iostream>
#include <sstream>
#include "Strauch.h"


	Strauch::Strauch(std::string art, int pflanzjahr, float preis, bool istGiftig) : Gehoelz(art, pflanzjahr, preis) {
		this->istGiftig = istGiftig;
	}

	std::string Strauch::getInfo() {
		std::ostringstream output;
		std::string boolval;
		/*
		 * ein kleiner Hack um die Ausgabe von 1 zu true
		 * und 0 zu false zu ändern
		 */
		if( this->istGiftig )
			boolval = "true";
		else
			boolval = "false";
		output << Gehoelz::getInfo() << " istGiftig: " << boolval << std::endl;
		return output.str();
	}

	void Strauch::abstract(){}






