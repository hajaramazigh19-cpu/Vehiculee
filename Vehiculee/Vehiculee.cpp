// Vehiculee.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Moteur.h"
#include "voiture.h"
#include "vehicule.h"
#include "voiture_electro.h"
#include <iostream>
using namespace std;

int main()
{
    Moteur* m1 = new Moteur(2020, 150);
    Moteur* m2 = new Moteur(2023, 200);
    Moteur* m3 = new Moteur(2019, 120);

    
    vehicule v("Renault", 50, 1, 'R', 'b');
    v.afficher();
    v.accelerer(20);
    v.afficher();

    
    voiture c1("Peugeot", 4, 101, 'B', 80, 'c', m1);
    c1.afficher();
    c1.accelerer(30);
    c1.afficher();

  
    voiture c2("Dacia", 2, 102, 'N', 60, 'd', m3);
    c2 = c1;
    c2.afficher();

  
    vehicule* e1 = new voiture_electro ("Tesla", 100, 85, m2);
    e1->afficher();
    e1->accelerer(40);
    e1->afficher();

    return 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
