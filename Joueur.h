#ifndef DEF_JOUEUR_H
#define DEF_JOUEUR_H

#include <string>
#include <iostream>



class Joueur{
public:
    Joueur(string nom, sexe sex);
    virtual void afficher() const;
private:
    string _nom;
    Personnage personnageActuel;
};

#endif