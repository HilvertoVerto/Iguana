#include "FabricaLadron.h"

Personaje* FabricaLadron::crearPersonaje(){
    return new Ladron();
};

Herramientas* FabricaLadron::crearHerramientas(){
    return new HerramientasLadron();
};