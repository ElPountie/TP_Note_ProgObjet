#include "Adresse.h"
#include <iostream>
#include <cstring>

Adresse::Adresse()
{
	int nom = 0;
	float latitude = 0.;
	float longitude = 0.;
}


Adresse::Adresse(int numero, float* latitude, float* longitude)
{
	this->numero = numero;
	this->latitude = *latitude;
	this->longitude = *longitude;
}

Adresse::~Adresse()
{
	std::cout << "Destruction de l'adresse" << std::endl;
}

void Adresse::afficher()
{
	std::cout << "Adresse : " << numero << " " << latitude << " " << longitude << std::endl;
}