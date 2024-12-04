#include "chef.h"

Chef::Chef() : Ouvrier() {
}

Chef::~Chef() {
}

void Chef::ajouter(Ouvrier* ouvrier) {
    equipe.push_back(ouvrier);
}

void Chef::supprimerOuvrier(int index) {
    if (index >= 0 && index < equipe.size()) {
        delete equipe[index];
        equipe.erase(equipe.begin() + index);
    }
}

void Chef::setChantier(Adresse chantier) {
	__super::setChantier(chantier);
    for (Ouvrier* ouvrier : equipe) {
		ouvrier->setChantier(chantier);
	}
}