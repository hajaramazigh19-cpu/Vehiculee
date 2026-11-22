#include "voiture_electro.h"

voiture_electro::voiture_electro(string marque, int vitese, int charge, Moteur* m1):vehicule(marque,vitese)
{
	this->charge = charge;
	this->moteur = m1;
}

void voiture_electro::afficher() const
{
	this->vehicule::afficher();
	this->moteur->afficher();
	cout << "la charge est : " << charge << endl;
}

voiture_electro voiture_electro::operator=(const voiture_electro& V)
{
	if (this != &V) {
		this->charge = V.charge;
		this->vehicule::operator = (V);
		delete this->moteur;
		this->moteur = new Moteur(*V.moteur);
		
	}return *this;
}

void voiture_electro::accelerer(int vit)
{
	this->vehicule::accelerer( vit);
}



voiture_electro::~voiture_electro()
{
	delete this->moteur;
}	
