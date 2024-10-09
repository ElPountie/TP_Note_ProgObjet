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
	void afficher();
};

