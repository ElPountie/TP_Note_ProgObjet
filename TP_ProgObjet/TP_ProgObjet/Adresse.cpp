#include "Adresse.h"
#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

Adresse::Adresse()
{
	this->nom = "ISIMA";
	this->latitude = 45.7592;
	this->longitude = 3.1104;
}


Adresse::Adresse(string nom, double latitude, double longitude)
{
	this->nom = nom;
	this->latitude = latitude;
	this->longitude = longitude;
}

Adresse::~Adresse()
{
	//std::cout << "Destruction de l'adresse "<< nom << std::endl;
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

string Adresse::afficher()
{
	return nom + " ( " + to_string(latitude) + " ; " + to_string(longitude) + " )";

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

