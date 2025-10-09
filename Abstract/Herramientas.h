#ifndef HERRAMIENTA_H
#define HERRAMIENTA_H

#include <string>
#include <vector>

class Herramientas{
	private:
		const std::vector<float> tamanio;
		const std::vector<std::string> armas;
	public:
		Herramientas(std::vector<float> _tamanio, std::vector<std::string> _armas): tamanio(_tamanio), armas(_armas){}
		
		std::vector<float> getTamanio() const{ return tamanio; }
		std::vector<std::string> getArma() const{ return armas; }
		
		virtual ~Herramientas() = default;
};

#endif
