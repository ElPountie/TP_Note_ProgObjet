#pragma once
#include <vector>
#include "Ouvrier.h"

class Chef : public Ouvrier {
private:
    std::vector<Ouvrier*> equipe;

public:
    Chef();
    ~Chef();
    void ajouter(Ouvrier* ouvrier);
    void supprimerOuvrier(int index);
	void setChantier(Adresse chantier);
};