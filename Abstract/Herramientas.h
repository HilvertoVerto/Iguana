#ifndef HERRAMIENTA_H
#define HERRAMIENTA_H

#include <string>
#include <vector>

class Herramientas{
	private:
		const float tamanio;
		const std::vector<std::string> armas;
	public:
		Herramientas(float _tamanio, std::vector<std::string> _armas): tamanio(_tamanio), armas(_armas){}
		float getTamanio() const{ return tamanio; }
		std::vector<std::string> getArma() const{ return armas; }
		virtual ~Herramientas() = default;
};

#endif
