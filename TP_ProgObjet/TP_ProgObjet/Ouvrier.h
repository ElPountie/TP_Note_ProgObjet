#pragma once
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Ouvrier
{
private:
	static int id;
	static int compteur;
	bool disponible;

public:
	Ouvrier();
	~Ouvrier();
	void travailler(stringstream& ss);
	int getId();
	int getCompteur();
};

