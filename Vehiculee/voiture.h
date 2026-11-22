#pragma once
#include "vehicule.h"
#include "Moteur.h"
class voiture :
    public vehicule
{
private:
    int qte;
	Moteur* moteur;
public:
	voiture(string marque,  int qte, int ref, char color, int vitesse, char model, Moteur* moteur);
    void afficher() const ;
    ~voiture();
	void accelerer(int a);
	voiture operator=(const voiture& V);
};

