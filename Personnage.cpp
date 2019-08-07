#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include <vector>
#include "Personnage.h"
using namespace std;
#include "carte.h"

Personnage::Personnage(sexe sex){
	_sexe=sex;

}

Cartes ouvrirPorte(){

}

Personnage::~Personnage(){

}

bool Personnage::combat(Carte monstreACombattre){
	if (_force>monstreACombattre._force){
		return true;
	}
	return false;
}

void Personnage::calculerForce(carte aEquiper){
	_force+=aEquiper._force;
}

void Personnage::ajouterNiveau(int niveau){
	_niveau+=niveau;
}