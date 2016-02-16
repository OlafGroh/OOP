#include <iostream>
#include <sstream>
#include "Baum.h"


	Baum::Baum(std::string art, int pflanzjahr, float preis, int maxHoehe) : Gehoelz(art, pflanzjahr, preis) {
		this->maxHoehe = maxHoehe;
	}

	std::string Baum::getInfo() {
		std::ostringstream output;
		output << Gehoelz::getInfo() << " Maxhoehe: " << this->maxHoehe << std::endl;
		return output.str();
	}

	void Baum::abstract(){}






