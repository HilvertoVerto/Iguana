#ifndef FABRICA_MAGO_H
#define FABRICA_MAGO_H

#include "../../Abstract/Fabrica.h"
#include "../../Abstract/Herramientas.h"
#include "../../Abstract/Personaje.h"

#include "Mago.h"
#include "HerramientasMago.h"

class FabricaMago: public Fabrica{
    public:
        Personaje* crearPersonaje();
        Herramientas* crearHerramientas();
};

#endif