#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "Adresse.h"
using namespace std;

class Ouvrier {
private:
    static int id;
    static int compteur;
    bool disponible;
    Adresse chantier;

public:
    Ouvrier();
    virtual ~Ouvrier(); // Rendre le destructeur virtuel
    void travailler(stringstream& ss);
    int getId();
    static int getCompteur();
    Adresse getChantier();
    virtual void setChantier(Adresse chantier);
};