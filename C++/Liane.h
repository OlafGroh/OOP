#include "Gehoelz.h"
#ifndef LIANE_H_
#define LIANE_H_

class Liane : public Gehoelz {

public:
	/*
	 * Konstruktor der Klasse
	 */
	Liane(std::string art, int pflanzjahr, float preis);

	/*
	 * getInfo Methode hier nicht mehr als rein virtuell deklariert!
	 */
	std::string getInfo();


	void abstract();

};
#endif
