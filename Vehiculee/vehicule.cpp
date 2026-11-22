#include "vehicule.h"

vehicule::vehicule(string marque, int vitesse, int ref, char color, char model)
{
	this->marque = marque;
	this->vitesse = vitesse;
	this->ref = ref;
	this->color = color;
	this->model = model;
		
}

void vehicule::afficher() const
{
	cout << "la marque est : " << marque << endl;	
	cout << "la vitesse est : " << vitesse << endl;
	std::cout << "ref = " << ref << std::endl;
	std::cout << "color = " << color << std::endl;
	std::cout << "model = " << this->model << std::endl;
	
}
void vehicule::accelerer(int a) {
	vitesse = vitesse + a;
}

vehicule::~vehicule()
{
}
 

 vehicule vehicule::operator=(const vehicule& V)
{
	this->ref = V.ref;
	this->color = V.color;
	this->model = V.model;
	this->marque = V.marque;
	this->vitesse=V.vitesse;
	return *this;
}
