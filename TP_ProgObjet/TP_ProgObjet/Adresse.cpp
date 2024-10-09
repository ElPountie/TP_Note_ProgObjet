#include "Adresse.h"
#include <iostream>
#include <cstring>

using namespace std;

Adresse::Adresse()
{
	this->nom = "";
	this->latitude = 0.;
	this->longitude = 0.;
}


Adresse::Adresse(string nom, double latitude, double longitude)
{
	this->nom = nom;
	this->latitude = latitude;
	this->longitude = longitude;
}

Adresse::~Adresse()
{
	std::cout << "Destruction de l'adresse" << std::endl;
}

void Adresse::afficher()
{
	std::cout << "Adresse : " << nom << " " << latitude << " " << longitude << std::endl;
}