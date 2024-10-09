#include "Adresse.h"
#include <iostream>
#include <sstream>
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

void Adresse::toStream(ostream& os)
{
	os << nom << " ( " << latitude << " ; " << longitude << " )";
}

void Adresse::toStream()
{
	cout << nom << " ( " << latitude << " ; " << longitude << " )";
}

void Adresse::toStream(stringstream& ss)
{
	ss << nom << " ( " << latitude << " ; " << longitude << " )";
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

