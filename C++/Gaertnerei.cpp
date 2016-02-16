#include "Gaertnerei.h"

	Gaertnerei::Gaertnerei() {

	}
	void Gaertnerei::einkaufen(Gehoelz *g) {
		std::vector<Gehoelz*>::iterator it;
		it = pflanzen.end();
		it = pflanzen.insert ( it , g );
	}


	Gehoelz* Gaertnerei::verkaufen(std::string art, int pflanzjahr) {
		Gehoelz *tmp  = 0;
		for (unsigned int count=0; count < pflanzen.size(); count++) {
		    //std::cout << ' ' << *it;
			tmp = pflanzen[count];
			if( tmp->getArt() == art && tmp->getPflanzjahr() == pflanzjahr) {
				pflanzen.erase(pflanzen.begin()+count);

			}
		}
		return tmp;
	}


	std::vector<Gehoelz*> Gaertnerei::getWoodByLimit(float preis) {
		std::vector<Gehoelz*> tmplist;
		Gehoelz *tmp  = 0;
				for (unsigned int count=0; count < pflanzen.size(); count++) {
					tmp = pflanzen[count];
					if( tmp->getPreis() < preis) {
						tmplist.push_back(tmp);
					}
				}
		return tmplist;
	}




