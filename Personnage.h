#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>
#include <vector>
#include "carte.h"


typedef struct body_parts{
    int head;
    int arms;
    int chest;
    int legs;
    int foots;
};

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
	bool combat(Carte monstreACombattre);
	void calculerForce(Carte aEquiper);
	void ajouterNiveau(int niveau);
	void incidentFacheux(Monstre monstre);
	void effetMalediction(Malediction malediction);
	void battreMonstre(Monstre monstre);
	virtual void afficherSacADos() const;

	std::vector<Carte> sac_a_dos;

private:
	sexe _sexe;
	std::vector<Carte> equipement;

	int _niveau;
	int _force;
};
#endif;