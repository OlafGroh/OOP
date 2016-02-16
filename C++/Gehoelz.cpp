#include <iostream>
#include <sstream>
#include "Gehoelz.h"

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

	Gehoelz::Gehoelz(std::string art, int pflanzjahr, float preis) {
		this->art			= art;
		this->pflanzjahr	= pflanzjahr;
		this->preis			= preis;
	}

	std::string Gehoelz::getInfo() {
		std::ostringstream output;
		output << "Art: " << this->art << " Pflanzjahr: " << this->pflanzjahr << " Preis: " << this->preis;
		return output.str();
	}




