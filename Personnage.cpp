#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include <vector>
using namespace std;

#include "Personnage.h"
#include "Carte.h"
#include "Monstre.h"
#include "Malediction.h"


Personnage::Personnage(sexe sex){
	_sexe=sex;
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

void Personnage::incidentFacheux(Monstre monstre){

}

void Personnage::afficherSacADos() const{
	int i=0;
	while(i<=sac_a_dos.size()){
		sac_a_dos[i].print_info();
		i++;
	}
}

void Personnage::battreMonstre(Monstre monstre){		
	while(i<monstre._recompense){
		ouvrirTresor();
		i++;
	}
	ajouterNiveau(premiereCarte._recompenseNiveau);
}


Carte Personnage::ouvrirPorteDebut(){

}

Carte Personnage::ouvrirPorte(){

}