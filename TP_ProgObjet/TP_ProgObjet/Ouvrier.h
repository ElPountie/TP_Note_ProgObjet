#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Adresse.h"
using namespace std;
class Ouvrier
{
private:
	static int id;
	static int compteur;
	bool disponible;
	Adresse chantier;

public:
	Ouvrier();
	~Ouvrier();
	void travailler(stringstream& ss);
	int getId();
	int getCompteur();
	Adresse getChantier();
	void setChantier(Adresse chantier);
};

