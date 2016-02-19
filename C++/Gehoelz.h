#include <iostream>
#ifndef GEHOELZ_H_
#define GEHOELZ_H_

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Gehoelz {
private:
    /* Attribute der abstrakten Basisklasse */
    /* Attributes of the abstract base class */
    std::string art;
    int         pflanzjahr;
    float       preis;


public:
    Gehoelz(std::string art, int pflanzjahr, float preis);
    std::string& getArt();
    void setArt(const std::string& art);
    int getPflanzjahr();
    void setPflanzjahr(int pflanzjahr);
    float getPreis();
    void setPreis(float preis);
    virtual std::string getInfo();

    /* Spezieller Trick um die Klasse als abstrakt zu  deklarieren */
    /* Spezial trick to become the class abstract */
    virtual void abstract()=0;
};
#endif
