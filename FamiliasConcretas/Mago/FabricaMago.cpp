#include "FabricaMago.h"

Personaje* FabricaMago::crearPersonaje(){
    return new Mago();
};

Herramientas* FabricaMago::crearHerramientas(){
    return new HerramientasMago();
};