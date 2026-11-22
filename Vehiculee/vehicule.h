#pragma once
#include "Moteur.h"
#include<iostream>
using namespace std;

class vehicule
{
private:
	string marque;
	int vitesse;
	int ref;
	char color;
	char model;
	
public:

	vehicule(string marque="M", int vitesse = 0, int ref = 0, char color = ' ', char model = 'a');
	virtual void afficher() const ;
	 void accelerer(int);
	virtual ~vehicule();
	vehicule operator=(const vehicule & V);
};

