#include <string>
#include <vector>
using namespace std;

#include "Personnage.h"
#include "Objet.h"
#include "Monstre.h"
#include "Malediction.h"


Personnage::Personnage(sexe sex){
	_sexe=sex;
}

Personnage::~Personnage(){

}

bool Personnage::combat(Monstre monstreACombattre){
	if (_force>monstreACombattre.get_force()){
		return true;
	}
	return false;
}

void Personnage::calculerForce(Objet aEquiper){
	_force+=aEquiper.get_force();
}

void Personnage::ajouterNiveau(int niveau){
	_niveau+=niveau;
}

void Personnage::incidentFacheux(Monstre monstre){

}

void Personnage::afficherSacADos(){
	int i=0;
	while(i<=sac_a_dos.size()){
		sac_a_dos[i].print_info();
		i++;
	}
}

void Personnage::battreMonstre(Monstre monstre){	
	int i=0;	
	while(i<monstre.get_recompense_tresor()){
		ouvrirTresor();
		i++;
	}
	ajouterNiveau(monstre.get_recompense_niveau());
}


Carte Personnage::ouvrirPorteDebut(){

}

Carte Personnage::ouvrirPorte(){

}
