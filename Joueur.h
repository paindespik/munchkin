#ifndef DEF_JOUEUR
#define DEF_JOUEUR
#include <string>
#include <vector>
#include "Personnage.h"

class Joueur{
public:
	Joueur(std::string nom, sexe sex);
	virtual void afficher() const;
private:
	sexe _sexe;
	std::string _nom;

};

#endif