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

string Adresse::getNom()
{
	return nom;
}

double Adresse::getLatitude()
{
	return latitude;
}

double Adresse::getLongitude()
{
	return longitude;
}

void Adresse::setNom(string nom)
{
	this->nom = nom;
}

void Adresse::setLatitude(double latitude)
{
	this->latitude = latitude;
}

void Adresse::setLongitude(double longitude)
{
	this->longitude = longitude;
}

