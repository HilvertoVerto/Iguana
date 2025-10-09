#ifndef FABRICA_H
#define FABRICA_H

#include "Personaje.h"
#include "Herramientas.h"

#include <string>

class Fabrica{
	public:
		virtual Personaje* crearPersonaje() = 0;
		virtual Herramientas* crearHerramientas() = 0; 
		virtual ~Fabrica() = default;
};

#endif
