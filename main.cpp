#include "Abstract/Fabrica.h"
#include "Abstract/Herramientas.h"
#include "Abstract/Personaje.h"

#include "FamiliasConcretas/Guerrero/FabricaGuerrero.h"
#include "FamiliasConcretas/Mago/FabricaMago.h"
#include "FamiliasConcretas/Ladron/FabricaLadron.h"

#include "Utilidades/LimpiarPantalla.h"

#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
    int x = 0;
    Fabrica* fabrica = nullptr;
    Personaje* personaje = nullptr;
    Herramientas* herramientas = nullptr;

    LimpiarPantalla limpiarPantalla;

    limpiarPantalla.limpiar();

    do{
        cout << "-- Fabrica personajes --" << endl << "1. Guerrero" << endl << "2. Mago" << endl << "3. Ladron" << endl;
        if(cin >> x && x > 0 && x <= 3){ break; }
        else{ 
            cin.clear();
            cin.ignore();

            limpiarPantalla.limpiar();

            cout << "Dato invalido" << endl;
        }
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

    limpiarPantalla.limpiar();

    cout << "-- Persoaje --" << endl;
    cout << "  Edad: " << personaje->getEdad() << endl << "  Altura: " << personaje->getAltura() << endl << endl;
    
    cout << "-- Herramientas --" << endl;
    cout << "  Arma 1: " << herramientas->getArma()[0] << ", mide " << herramientas->getTamanio()[0] << "m" << endl;
    cout << "  Arma 2: " << herramientas->getArma()[1] << ", mide " << herramientas->getTamanio()[1] << "m" << endl;

    cout << endl << "...";
    cin.ignore();
    cin.get();

    return 0;
}