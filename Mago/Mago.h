#ifndef MAGO_H
#define MAGO_H

#include "../Abstract/Personaje.h"

class Mago: public Personaje{
    public:
        Mago(): Personaje(300, 1.6, "Babidi"){}
};

#endif