#include <iostream>
#include <sstream>
#include "Strauch.h"

    /*
     * autor:   Olaf Groh
     * date:    17/02/2016
     * version: 1.0
     */

     /* Konstruktor:Alle Parameter in den Attributen der Basisklasse speichern, Konstruktor der Basiklasse aufrufen */
     /* Constructor:store all parameters in the attributes of the base class, call the constructor of the base class */
     Strauch::Strauch(std::string art, int pflanzjahr, float preis, bool istGiftig) : Gehoelz(art, pflanzjahr, preis) {
         this->istGiftig = istGiftig;
     }

    /* Get- und Set Methoden für alle Attribute der Klasse */
    /* Get and set methods for all attributes of the class */
    bool Strauch::getIstGiftig() {
        return this->istGiftig;
    }

    void Strauch::setIstGiftig(bool istGiftig) {
        this->istGiftig = istGiftig;
    }

    /* Polymorphe Methode */
    /* Polymorphic method */
    std::string Strauch::getInfo() {
        std::ostringstream output;
        output << Gehoelz::getInfo() << " ist Giftig: " << this->istGiftig;
        return output.str();
    }

    /* Implementierung der Markermethode */
    /* Implemetation of the mark method */
    void Strauch::abstract(){}
