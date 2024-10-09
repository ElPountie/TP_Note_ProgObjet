#include <iostream>
#include "Ouvrier.h"
#include "Adresse.h"
using namespace std;

int main() {
	const char* nom = "eiffel";
	const double latitude = 48.8585;
	const double longitude = 3.1103;

	Adresse tour(nom, latitude, longitude);

	std::cout << (tour.getNom() == nom) << std::endl;
	std::cout << (tour.getLatitude() == latitude) << std::endl;
	std::cout << (tour.getLongitude() == longitude) << std::endl;
}