//#include <iostream>
//#include <sstream>
#include "Liane.h"

    /* Konstruktor:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
    /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
    Liane::Liane(std::string art, int pflanzjahr, float preis) : Gehoelz(art, pflanzjahr, preis) {}

    /* Keine zusätzlichen Get- und Set Methoden */
    /* No additional get and set methodes */

    /* Kein Überschreiben der Methoden getInfo() */
    /* No overriding the methods getInfo() */
    void Liane::abstract(){}
