#include <string>
#include <iostream>
#include "Carte.h"
#include "Personnage.h"
#include "Monstre.h"
#include "Malediction.h"

using namespace std;

void attaquerMonstre(Personnage personnageActuel){

		int nb_carte_monstre=0;
		int i=0;
		int choix;
		while(i<personnageActuel.sac_a_dos.size()){
			if(personnageActuel.sac_a_dos[i].get_type==monstre){
				nb_carte_monstre++;
			}
			i++;
		}
		
		if(nb_carte_monstre!=0){
			personnageActuel.afficherSacADos();
			cout << "voulez-vous jouer un monstre (0 pour non et 1 pour oui)" << endl;
			cin >> choix;
			if (choix==1){
				cout << "quel est le numero de la carte que vous souhaitez jouer? " <<endl;
				int choixCarte=0;
				cin >> choixCarte;
				while(choixCarte>= personnageActuel.sac_a_dos.size() || personnageActuel.sac_a_dos[choixCarte].get_type()!=monstre){
					cout<< "vous devez donner un nombre entre 0 et la taille-1 de votre sac a dos" << endl;
					cin >> choixCarte; 
				}
				if (personnageActuel.combat(personnageActuel.sac_a_dos[choixCarte])){
					personnageActuel.battreMonstre(personnageActuel.sac_a_dos[choixCarte]);
			
				}
				else{
					personnageActuel.incidentFacheux(premiereCarte);
				}

			}
		}
	}


void tour(Personnage personnageActuel){
	int i=0;
	Carte premiereCarte=personnageActuel.ouvrirPorteDebut();
	if (premiereCarte.get_type()==monstre){
		if (personnageActuel.combat(premiereCarte)){
			personnageActuel.battreMonstre(premiereCarte);
		}
		else{
			personnageActuel.incidentFacheux(premiereCarte);
		}


	}
	else if (premiereCarte.get_type()==malediction){
		personnageActuel.effetMalediction(premiereCarte);
		attaquerMonstre(personnageActuel);

	}
	else if(premiereCarte.get_type()==sort){
		
	}
}