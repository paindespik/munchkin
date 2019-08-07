#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include <vector>

class Personnage {
public:
	enum sexe{
		homme,
		femme,
		hermaphrodite
	};
	Personnage(sexe sex);
	Cartes ouvirPorte();

private:
	sexe _sexe;
	vector<Carte> sac_a_dos;
	vector<carte> equipement;
	nb_main;
	nb_pied;
	nb_tete;
	int niveau;
	int force;
};
#endif;