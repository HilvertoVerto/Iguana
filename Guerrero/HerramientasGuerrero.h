#ifndef HERRAMIENTAS_GUERRERO_H
#define HERRAMIENTAS_GUERRERO_H

#include "../Abstract/Herramientas.h"

#include <vector>

class HerramientasGuerrero: public Herramientas{
	public:
		HerramientasGuerrero(): Herramientas({1.0, 0.5}, {"Espata", "Escudo"}){}
};

#endif
