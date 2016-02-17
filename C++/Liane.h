#include "Gehoelz.h"
#ifndef LIANE_H_
#define LIANE_H_
/*
 * autor:   Olaf Groh
 * date:    17/02/2016
 * version: 1.0
 */
class Liane : public Gehoelz {
    /* Keine zusätzlichen Attribute */
    /* No additional attributes */

public:
    Liane(std::string art, int pflanzjahr, float preis);
    void abstract();
};
#endif
