#include <string>
#include <iostream>
#include "joueur.h"
using namespace std;

Joueur::Joueur(string nom, sexe sex){
	_nom=nom;
	_sexe=sex;
}

void Joueur::afficher() const {
	cout << "nom : " << _nom << endl;
	cout << "sexe : " << _sexe << endl;
}