#ifndef FABRICA_GUERRERO_H
#define FABRICA_GUERRERO_H

#include "../../Abstract/Fabrica.h"
#include "../../Abstract/Herramientas.h"
#include "../../Abstract/Personaje.h"

#include "Guerrero.h"
#include "HerramientasGuerrero.h"



class FabricaGuerrero: public Fabrica{
	public:
		Personaje* crearPersonaje() override{
			return new Guerrero();
		}
		Herramientas* crearHerramientas() override{
			return new HerramientasGuerrero();
		}
};

#endif
