#include <string>
#include "Carte.h"
using namespace std;

void tour(Personnage personnageActuel){
	Carte premiereCarte=personnageActuel.ouvrirPorteDebut();
	if (Premierecarte.get_type()==monstre){
		if (personnageActuel.combat(premiereCarte)){
			int i=0;
			while(i<premiereCarte._recompense){
				personnageActuel.ajouterNiveau(premiereCarte._recompenseNiveau);
				personnageActuel.ouvrirTresor();
				i++;
			}
		}

	}
}