#include "Gehoelz.h"
#ifndef STRAUCH_H_
#define STRAUCH_H_

class Strauch : public Gehoelz {
private:
	bool istGiftig;

public:

	/*
	 * Konstruktor der Klasse
	 */
	Strauch(std::string art, int pflanzjahr, float preis, bool istGiftig);

	/*
	 * getInfo Methode hier nicht mehr als rein virtuell deklariert!
	 */
	std::string getInfo();

	void abstract();
};
#endif
