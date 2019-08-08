#ifndef DEF_JOUEUR_H
#define DEF_JOUEUR_H

#include <string>
#include <iostream>
#include "Carte/Carte.h"
#include "Personnage.h"



class Joueur{
public:
    Joueur(std::string nom);
    virtual void afficher() const;
    void equiperPersonnage(Carte carte);
    void AjouterInventaire(Carte carte);
    void mortPersonnage();
    void combat();
    
private:
    std::string _nom;
    Personnage personnageActuel;
};

#endif