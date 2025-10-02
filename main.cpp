#include "Abstract/Fabrica.h"
#include "Abstract/Herramientas.h"
#include "Abstract/Personaje.h"

#include "Guerrero/FabricaGuerrero.h"
#include "Guerrero/Guerrero.h"
#include "Guerrero/HerramientasGuerrero.h"

#include "Mago/FabricaMago.h"
#include "Mago/Mago.h"
#include "Mago/HerramientasMago.h"

#include <iostream>

using namespace std;
int main(){
    cout << "-- Fabruca personajes --" << endl;
    Fabrica* fabrica = nullptr;

    fabrica = new FabricaGuerrero();

    Personaje* personaje = fabrica->crearPersonaje();

    cout << personaje->getEdad() << endl << personaje->getAltura() << endl;
}