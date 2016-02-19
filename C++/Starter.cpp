#include <iostream>
#include "Liane.h"
#include "Baum.h"
#include "Strauch.h"
#include "Gaertnerei.h"
using namespace std;
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
int main() {

    /* einige Testdaten */
    /* some testdata */
    Baum *b1    = new Baum("Eiche", 2012, 299, 25);
    Baum *b2    = new Baum("Pappel", 2010, 199, 15);
    Liane *l1   = new Liane("Gemeiner Efeu", 1990, 15);
    Strauch *s1 = new Strauch("Stechapfel", 1999, 2.5f, true);


    cout << "Baum: "    << b1->getInfo() << endl;
    cout << "Baum: "    << b2->getInfo() << endl;
    cout << "Liane: "   << l1->getInfo() << endl;
    cout << "Strauch: " << s1->getInfo() << endl;

    /* Objekt vom Typ Gaertnerei erstellen */
    /* create an object from type Gaertnerei */
    Gaertnerei *gae1 = new Gaertnerei();

    /* testen der einkaufen Methode einkaufen */
    /* test the einkaufen method */
    gae1->einkaufen(b1);
    gae1->einkaufen(b2);
    gae1->einkaufen(l1);
    gae1->einkaufen(s1);

    /* testen der verkaufen Methode einkaufen */
    /* test the verkaufen method */
    gae1->verkaufen("Eiche" , 2012);

    /* testen der getWoodByLimit Methode einkaufen */
    /* test the getWoodByLimit method */
    std::vector<Gehoelz*> tmp;
    tmp = gae1->getWoodByLimit(199.01f);

    /* testen ob die Methode die richtigen Werte zurück liefert */
    /* test if the returnvalues of the method are right */
    cout << endl;
    for(int c=0; c<tmp.size(); c++) {
        cout << "[" << c << "] = " << tmp[c]->getInfo() << endl;
    }

    /* die Methodenerweiterungen der Klassen Baum und Strauch testen */
    /* test of the extension of the classes Baum and Strauch */
    cout << endl;
    for(int c=0; c<tmp.size(); c++) {
      Gehoelz *objtmp = tmp[c];
      Baum      *baum = dynamic_cast<Baum*>(objtmp);
      Liane     *liane = dynamic_cast<Liane*>(objtmp);
      Strauch   *strauch = dynamic_cast<Strauch*>(objtmp);
      if( baum != 0) {
        cout << "Instanz war vom Typ Baum: Art=" << baum->getArt() << " maximale Höhe=" << baum->getMaxHoehe() << endl;
      }else if( liane != 0) {
        cout << "Instanz war vom Typ Liane : Art=" << liane->getArt() << endl;
      }else if( strauch != 0) {
        cout << "Instanz war vom Typ Strauch : Art=" << strauch->getArt() << " ist Giftig=" << strauch->getIstGiftig() << endl;
      }
    }
    return 0;
}
