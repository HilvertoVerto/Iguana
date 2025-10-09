#ifndef PERSONAJE_H
#define PERSONAJE_H

#include <string>

class Personaje{
	protected:
		const int edad;
		const float altura;
		const std::string nombre;
	public:
		Personaje(int _edad, float _altura, std::string _nombre): edad(_edad), altura(_altura), nombre(_nombre){}

		int getEdad() const{ return edad; }
		float getAltura() const{ return altura; }
		std::string getNombre() const{ return nombre; }
		virtual ~Personaje() = default;
};

#endif
