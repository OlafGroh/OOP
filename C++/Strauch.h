#include "Gehoelz.h"
#ifndef STRAUCH_H_
#define STRAUCH_H_

/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Strauch : public Gehoelz {
private:
    /* Attribute der Klasse */
    /* Attributes of the class */
    bool istGiftig;

public:

    Strauch(std::string art, int pflanzjahr, float preis, bool istGiftig);
    bool getIstGiftig();
    void setIstGiftig(bool istGiftig);
    std::string getInfo();
    void abstract();
};
#endif
