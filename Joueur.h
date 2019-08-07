#ifndef DEF_JOUEUR
#define DEF_JOUEUR
#include <string>
#include <vector>

class Joueur{
public:
	enum sexe{
		homme,
		femme,
		Hermaphrodite
	};
	Joueur(std::string nom, sexe sex);
	virtual void affiher() const;
private:
	sexe _sexe;
	std::string _nom;

};

#endif