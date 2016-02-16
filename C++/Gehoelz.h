#include <iostream>
#ifndef GEHOELZ_H_
#define GEHOELZ_H_

class Gehoelz {
	/*
	 * Attribute der Klasse
	 */
private:
	std::string	art;
	int			pflanzjahr;
	float		preis;


public:
	/*
	 * Konstruktor der Klasse
	 */
	Gehoelz(std::string art, int pflanzjahr, float preis);

	/*
	 * Get- und Set Methoden für die Attribute
	 */
	std::string& getArt();
	void setArt(const std::string& art);
	int getPflanzjahr();
	void setPflanzjahr(int pflanzjahr);
	float getPreis();
	void setPreis(float preis);

	/*
	 * virtuelle getInfo Methode
	 */
	virtual std::string getInfo();

	/*
	 * Ein Trick um eine abstrakte Klasse zu generieren OHNE getInfo()
	 * als rein virtuelle Klasse zu definieren!
	 * Die Implementierung MUSS erhalten beliben, da sonst nicht polymorph!!
	 */
	virtual void abstract()=0;
};
#endif
