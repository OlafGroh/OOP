#include <iostream>
#include "Liane.h"
#include "Baum.h"
#include "Strauch.h"
#include "Gaertnerei.h"
using namespace std;

int main() {

	Baum *b1	= new Baum("Eiche", 2012, 299, 25);
	Baum *b2	= new Baum("Pappel", 2010, 199, 15);

	Liane *l1	= new Liane("qwe", 1990, 15);

	Strauch *s1	= new Strauch("Stechapfel", 1999, 2.5f, true);


	cout << "Baum: " << b1->getInfo();
	cout << "Baum: " << b2->getInfo();

	cout << "Liane: " << l1->getInfo();

	cout << "Strauch: " << s1->getInfo();

	//Aufgabe 2.2
	Gaertnerei *gae1 = new Gaertnerei();

	/*
	 * testen der Methode einkaufen
	 */
	gae1->einkaufen(b1);
	gae1->einkaufen(b2);
	gae1->einkaufen(l1);
	gae1->einkaufen(s1);

	/*
	 * testen der Methode verkaufen
	 */
	gae1->verkaufen("Eiche" , 2012);

	/*
	 * testen der Methode getWoodByLimit
	 */
	std::vector<Gehoelz*> tmp;
	tmp = gae1->getWoodByLimit(199.01f);

	/*
	 * testen ob die Methode die richtigen Daten zurück liefert
	 */
	cout << endl << endl << endl;
	for(int c=0; c<tmp.size(); c++) {
		cout << "[" << c << "] = " << tmp[c]->getInfo();
	}

	return 0;
}
