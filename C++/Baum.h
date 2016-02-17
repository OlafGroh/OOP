#include "Gehoelz.h"
#ifndef BAUM_H_
#define BAUM_H_
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Baum : public Gehoelz {

private:
    /* Attribute der Klasse */
    /* Attriubutes of the class */
	int maxHoehe;

public:

	Baum(std::string art, int pflanzjahr, float preis, int maxHoehe);
	int getMaxHoehe();
    void setMaxHoehe(int maxHoehe);
	std::string getInfo();
	void abstract();
};
#endif
