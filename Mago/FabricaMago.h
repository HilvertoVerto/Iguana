#ifndef FABRICA_MAGO_H
#define FABRICA_MAGO_H

#include "../Abstract/Fabrica.h"
#include "../Abstract/Herramientas.h"
#include "../Abstract/Personaje.h"

#include "Mago.h"
#include "HerramientasMago.h"

class FabricaMago: Fabrica{
    public:
        Personaje* crearPersonaje(){
            return new Mago();
        }
        Herramientas* crearHerramientas(){
            return new HerramientasMago();
        }
};

#endif