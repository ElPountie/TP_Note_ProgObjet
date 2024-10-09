#pragma once
class Adresse
{
private:
	int numero;
	float latitude;
	float longitude;

public:
	Adresse();
	Adresse(int numero, float* latitude, float* longitude);
	~Adresse();
	void afficher();
};

