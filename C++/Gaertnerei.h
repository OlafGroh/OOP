#ifndef GAERTNEREI_H_
#define GAERTNEREI_H_
#include <vector>
#include "Gehoelz.h"

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Gaertnerei {

private:
	std::vector<Gehoelz*> pflanzen;

public:
	Gaertnerei();
	void einkaufen(Gehoelz *g);
	Gehoelz* verkaufen(std::string art, int pflanzjahr);
	std::vector<Gehoelz*> getWoodByLimit(float preis);
};
#endif
