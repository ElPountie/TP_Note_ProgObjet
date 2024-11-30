#include "Chef.h"

Chef::Chef() : Ouvrier() {
}

Chef::~Chef() {
    for (Ouvrier* ouvrier : equipe) {
        delete ouvrier;
    }
}

void Chef::ajouterOuvrier(Ouvrier& ouvrier) {
    equipe.push_back(&ouvrier);
}

void Chef::supprimerOuvrier(int index) {
    if (index >= 0 && index < equipe.size()) {
        delete equipe[index];
        equipe.erase(equipe.begin() + index);
    }
}