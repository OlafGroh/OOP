#ifndef GAERTNEREI_H_
#define GAERTNEREI_H_
#include <vector>
#include "Gehoelz.h"

class Gaertnerei {

private:
	/*
	 * Datenstruktur um Gehoelze zu verwalten
	 */
	std::vector<Gehoelz*> pflanzen;

public:
	/*
	 * Konstruktor um die Variable pflanzen zu initialisieren
	 */
	Gaertnerei();

	/*
	 * fügt der Datensruktur ein übergebenes Element hinzu
	 */
	void einkaufen(Gehoelz *g);

	/*
	 * verkaufen einer Pflanze, wenn gefunden liefert es die Referenz zurück, sonst null
	 */
	Gehoelz* verkaufen(std::string art, int pflanzjahr);

	/*
	 * eine Liste zurück gegben, die alle Gehölze enthät, die
	 * günstiger sind wie der Übergabewert!
	 */
	std::vector<Gehoelz*> getWoodByLimit(float preis);

};
#endif
