#include <string>
#include 
#include "Carte.h"
#include "Personnage.h"
using namespace std;

void tour(Personnage personnageActuel){
	int i=0;
	Carte premiereCarte=personnageActuel.ouvrirPorteDebut();
	if (premiereCarte.get_type()==monstre){
		if (personnageActuel.combat(premiereCarte)){
			
			while(i<premiereCarte._recompense){

				personnageActuel.ouvrirTresor();
				i++;
			}
			personnageActuel.ajouterNiveau(premiereCarte._recompenseNiveau);

		}
		else{
			personnageActuel.incidentFacheux(premiereCarte);
		}


	}
	else if (premiereCarte.get_type()==malediction){
		personnageActuel.effetMalediction(premiereCarte);
		int nb_carte_monstre=0;
		i=0;
		while(i<personnageActuel.sac_a_dos.size()){
			if(sac_a_dos[i].get_type==monstre){
				nb_carte_monstre++;
			}
			i++;
			int choix;
		}
		if(nb_carte_monstre!=0){
			personnageActuel.afficherSacADos();
			cout << "voulez-vous jouer un monstre (0 pour non et 1 pour oui)" << endl;
			cin >> choix;
			if (choix==1){
				cout << "quel est le numero de la carte que vous souhaitez jouer? " <<endl;

			}
		}
	}
}