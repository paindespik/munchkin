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
	~Personnage();
	Cartes ouvirPorte();

private:
	sexe _sexe;
	std::vector<Carte> sac_a_dos;
	std::vector<carte> equipement;
	nb_main;
	nb_pied;
	nb_tete;
	int niveau;
	int force;
};
#endif;