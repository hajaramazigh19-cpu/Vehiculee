#include "voiture.h"
#include "vehicule.h"
#include "Moteur.h"
voiture::voiture(string marque, int qte, int ref, char color, int vitesse, char model, Moteur* m) :
	vehicule(marque, vitesse, ref, color,model)
{
	this->qte = qte;
	this->moteur = m;

	
}

void voiture::afficher() const
{
	this->vehicule::afficher();
	cout << "la quantite est : " << qte << endl;
	this->moteur->afficher();
	
}

voiture::~voiture()
{
}

void voiture::accelerer(int vit)
{
	this->vehicule::accelerer(vit);
}

voiture voiture::operator=( const voiture& V)
{
	if (this != &V) {
		this->qte = V.qte;
		delete this->moteur;
		this->moteur = new Moteur(*V.moteur);
		this->vehicule::operator=(V);
	}
	return *this;
}
