#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include <vector>
#include "carte.h"

class Personnage {
public:
	enum sexe{
		homme,
		femme,
		hermaphrodite
	};
	Personnage(sexe sex);
	~Personnage();
	Carte ouvirPorteDebut();
	Carte ouvrirPorte();
	Carte ouvrirTresor();
	bool combat(Carte monstreACombattre);
	void calculerForce(carte aEquiper);
	void ajouterNiveau(int niveau);
	void incidentFacheux(Monstre monstre);
	void effetMalediction(Malediction malediction);
	void battreMonstre(Monstre monstre);
	virtual void afficherSacADos() const;

private:
	sexe _sexe;
	std::vector<Carte> sac_a_dos;
	std::vector<carte> equipement;
	nb_main;
	nb_pied;
	nb_tete;
	int _niveau;
	int _force;
};
#endif;