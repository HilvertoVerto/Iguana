#ifndef LADRON_H
#define LADRON_H

#include "../../Abstract/Personaje.h"

class Ladron: public Personaje{
    public:
        Ladron(): Personaje(20, 1.5, "Yusmairobis"){}
};

#endif