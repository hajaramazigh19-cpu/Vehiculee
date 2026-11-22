#include "Moteur.h"
#include <iostream>
using namespace std;

Moteur::Moteur(int a, int p)
{
	this->annee = a;
	this->puissance = p;

}

void Moteur::afficher()
{
	cout << "l annee est" << annee << endl;
	cout << "la puissance est" << puissance << endl;
}

Moteur::~Moteur()
{
}

