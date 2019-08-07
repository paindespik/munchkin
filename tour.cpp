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
			personnageActuel.battreMonstre();
			

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
				int choixCarte=0;
				cin >> choixCarte;
				while(choixCarte>= personnageActuel.sac_a_dos.size() || personnageActuel.sac_a_dos[choixCarte].get_type()!=monstre){
					cout<< "vous devez donner un nombre entre 0 et la taille-1 de votre sac a dos" << endl;
					cin >> choixCarte; 
				}
				if (personnageActuel.combat(sac_a_dos[choixCarte])){
					personnageActuel.battreMonstre();
			
				}
				else{
				personnageActuel.incidentFacheux(premiereCarte);
				}

			}
		}
	}
}