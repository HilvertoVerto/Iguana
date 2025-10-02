#ifndef HERRAMIENTAS_MAGO_H
#define HERRAMIENTAS_MAGO_H

#include "../Abstract/Herramientas.h"

class HerramientasMago: public Herramientas{
    public:
        HerramientasMago(): Herramientas(2.2, {"Libor", "Vara inecesariamente grande"}){}
};

#endif