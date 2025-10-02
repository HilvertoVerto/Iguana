#include "Abstract/Fabrica.h"
#include "Abstract/Herramientas.h"
#include "Abstract/Personaje.h"

#include "Guerrero/FabricaGuerrero.h"
#include "Guerrero/Guerrero.h"
#include "Guerrero/HerramientasGuerrero.h"

#include "Mago/FabricaMago.h"
#include "Mago/Mago.h"
#include "Mago/HerramientasMago.h"

#include "Ladron/FabricaLadron.h"

#include <iostream>

using namespace std;
int main(){
    cout << "-- Fabrica personajes --" << endl << "1. Guerrero" << endl << "2. Mago" << endl << "3. Ladron" << endl;
    int x = 0;
    Fabrica* fabrica = nullptr;
    Personaje* personaje = nullptr;
    Herramientas* herramientas = nullptr;

    do{
        if(cin >> x && x > 0 && x <= 3){ break; }
    }while(true);

    
    switch(x){
        case 1:
            fabrica = new FabricaGuerrero();
            break;
        case 2:
            fabrica = new FabricaMago();
            break;
        case 3:
            fabrica = new FabricaLadron();
            break;
    }

    personaje = fabrica->crearPersonaje();
    herramientas = fabrica->crearHerramientas();

    cout << "-- Persoaje --" << endl;
    cout << "  Edad: " << personaje->getEdad() << endl << "  Altura: " << personaje->getAltura() << endl << endl;
    
    cout << "-- Herramientas --" << endl;
    cout << "  Arma 1: " << herramientas->getArma()[0] << ", mide " << herramientas->getTamanio()[0] << "m" << endl;
    cout << "  Arma 2: " << herramientas->getArma()[1] << ", mide " << herramientas->getTamanio()[1] << "m" << endl;
    return 0;
}