#ifndef FABRICA_LADRON
#define FABRICA_LADRON

#include "../Abstract/Fabrica.h"
#include "../Abstract/Personaje.h"
#include "../Abstract/Herramientas.h"

#include "Ladron.h"
#include "HerramientasLadron.h"

class FabricaLadron: public Fabrica{
    public:
        Personaje* crearPersonaje(){
            return new Ladron();
        }
        Herramientas* crearHerramientas(){
            return new HerramientasLadron();
        }
};

#endif