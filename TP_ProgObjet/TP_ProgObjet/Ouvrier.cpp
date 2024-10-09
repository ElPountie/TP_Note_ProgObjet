#include "Ouvrier.h"

int Ouvrier::id = 0;
int Ouvrier::compteur = 0;

Ouvrier::Ouvrier()
{
	id++;
	compteur++;
	disponible = true;
}

Ouvrier::~Ouvrier()
{
	compteur--;
}

void Ouvrier::travailler(stringstream& ss)
{
	string s = ss.str();
	cout << "Ouvrier " << id << " travaille a " << s << endl;
}

int Ouvrier::getId()
{
	return id;
}

int Ouvrier::getCompteur()
{
	return compteur;
}
