#ifndef HERRAMIENTAS_GUERRERO_H
#define HERRAMIENTAS_GUERRERO_H

#include "../Abstract/Herramientas.h"

#include <vector>

class HerramientasGuerrero: public Herramientas{
	public:
		HerramientasGuerrero(): Herramientas(0.8, {"Espata", "Escudo"}){}
};

#endif
