#include <iostream>
#include "Ouvrier.h"
#include "Adresse.h"
#include "chef.h"
using namespace std;

int main() {
	Ouvrier o1;
	Ouvrier o2;
	Chef* c = new Chef();

	std::cout << (o1.getChantier().getNom() == "ISIMA") << std::endl;
	std::cout << (o2.getChantier().getNom() == "ISIMA") << std::endl;
	std::cout << (c->getChantier().getNom() == "ISIMA") << std::endl;


	c->ajouter(&o1);
	c->ajouter(&o2);
	c->setChantier(Adresse("notre dame", 48.8531, 2.3499));

	std::cout << (o1.getChantier().getNom() == "notre dame") << std::endl;
	std::cout << (o2.getChantier().getNom() == "notre dame") << std::endl;
	std::cout << (c->getChantier().getNom() == "notre dame") << std::endl;

	delete c;

	return 0;
}