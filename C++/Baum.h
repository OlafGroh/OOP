#include "Gehoelz.h"
#ifndef BAUM_H_
#define BAUM_H_

class Baum : public Gehoelz {

private:
	int maxHoehe;

public:

	/*
	 * Konstruktor der Klasse
	 */
	Baum(std::string art, int pflanzjahr, float preis, int maxHoehe);

	/*
	 * getInfo Methode hier nicht mehr als rein virtuell deklariert!
	 */
	std::string getInfo();

	void abstract();
};
#endif
