#include "Ouvrier.h"

int Ouvrier::id = 0;
int Ouvrier::compteur = 0;

Ouvrier::Ouvrier() {
    id++;
    compteur++;
    disponible = true;
    chantier = Adresse();
}

Ouvrier::~Ouvrier() {
    compteur--;
}

void Ouvrier::travailler(stringstream& ss) {
	//Add address to stream
	ss << chantier.afficher();
    string s = ss.str();
    cout << "Ouvrier " << id << " travaille a " << s << endl;
}

void Ouvrier::travailler(ostream& os)
{
	os << "Ouvrier " << id << " travaille a " << chantier.afficher() << endl;
}

int Ouvrier::getId()
{
	return id;
}

int Ouvrier::getCompteur() {
    return compteur;
}

Adresse Ouvrier::getChantier() {
    return chantier;
}

void Ouvrier::setChantier(Adresse chantier) {
    this->chantier = chantier;
}