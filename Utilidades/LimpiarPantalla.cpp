#include "LimpiarPantalla.h"

#include <cstdlib>

void LimpiarPantalla::limpiar(){
    #ifdef _WIN32
        system("cls");
    #elif defined(__linux__) || defined(__APPLE__)
        system("clear");
    #endif
};