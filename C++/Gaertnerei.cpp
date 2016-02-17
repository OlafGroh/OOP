#include "Gaertnerei.h"
    /*
     * autor:   Olaf Groh
     * date:    17/02/2016
     * version: 1.0
     */
     Gaertnerei::Gaertnerei() {}

     /* Hinzufügen eines neuen Elementes zum vector */
     /* add a new element to the vector */
     void Gaertnerei::einkaufen(Gehoelz *g) {
         std::vector<Gehoelz*>::iterator it;
         it = pflanzen.end();
         it = pflanzen.insert ( it , g );
     }

     /* Das Element mit geg. Art UND geg. Pflanzjahr wird aus der vector entfernt */
     /* The element with given Art AND given. Pflanzjahr is removed from the vector */
     Gehoelz* Gaertnerei::verkaufen(std::string art, int pflanzjahr) {
         Gehoelz *tmp  = 0;
         for (unsigned int count=0; count < pflanzen.size(); count++) {
             tmp = pflanzen[count];
             if( tmp->getArt() == art && tmp->getPflanzjahr() == pflanzjahr) {
                 pflanzen.erase(pflanzen.begin()+count);
             }
         }
         return tmp;
     }

     /* vector mit allen Elementen erzeugen, deren Verkaufspreis kleiner wie der geg. ist */
     /* vector generate with all elements whose selling price is less as the given */
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
