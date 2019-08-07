#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include <vector>
#include "Carte.h"
#include "Objet.h"
#include "Monstre.h"
#include "Malediction.h"


enum sexe{
	homme,
	femme,
	hermaphrodite
};

class Personnage {
public:
	Personnage(sexe sex);
	~Personnage();
	Carte ouvrirPorteDebut();
	Carte ouvrirPorte();
	Carte ouvrirTresor();
	bool combat(Monstre monstreACombattre);
	void calculerForce(Objet aEquiper);
	void ajouterNiveau(int niveau);
	void incidentFacheux(Monstre monstre);
	void effetMalediction(Malediction malediction);
	void battreMonstre(Monstre monstre);
	virtual void afficherSacADos();

	std::vector<Carte> sac_a_dos;

private:
	sexe _sexe;
	std::vector<Carte> equipement;

	int _niveau;
	int _force;
};

#endif