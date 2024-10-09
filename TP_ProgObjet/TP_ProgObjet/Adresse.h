#pragma once
#include <string>
#include <iostream>
using namespace std;

class Adresse
{
private:
	string nom;
	double latitude;
	double longitude;

public:
	Adresse();
	Adresse(string nom, double latitude, double longitude);
	~Adresse();

	void toStream(ostream& os);
	void toStream();
	void toStream(stringstream& ss);
	string afficher();


	// Getters
	string getNom();
	double getLatitude();
	double getLongitude();
	// Setters
	void setNom(string nom);
	void setLatitude(double latitude);
	void setLongitude(double longitude);
};

