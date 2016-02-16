#include <iostream>
#include <sstream>
#include "Liane.h"


	Liane::Liane(std::string art, int pflanzjahr, float preis) : Gehoelz(art, pflanzjahr, preis) {}

	std::string Liane::getInfo() {
		std::ostringstream output;
		output << Gehoelz::getInfo() << std::endl;
		return output.str();
	}

	void Liane::abstract(){}


