#include "FabricaGuerrero.h"

Personaje* FabricaGuerrero::crearPersonaje(){
    return new Guerrero();
};

Herramientas* FabricaGuerrero::crearHerramientas(){
    return new HerramientasGuerrero();
};