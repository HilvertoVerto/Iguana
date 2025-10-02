#ifndef HERRAMIENTAS_LADRON_H
#define HERRAMIENTAS_LADRON_H

#include "../Abstract/Herramientas.h"

class HerramientasLadron: public Herramientas{
    public:
        HerramientasLadron(): Herramientas({0.2, 0.4}, {"Daga", "Cuchillo lanzable"}){}
};

#endif