#pragma once
#include "Moteur.h"
#include "vehicule.h"
class voiture_electro :
    public vehicule
{

private:
    int charge;
	Moteur* moteur;
public:
	voiture_electro(string marque, int vitese, int charge, Moteur* m);
	void afficher() const;
	voiture_electro operator=( const voiture_electro& V);
	void accelerer(int);
	~voiture_electro();	

};

