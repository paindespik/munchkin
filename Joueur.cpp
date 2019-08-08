#include <string>
#include <iostream>
#include <vector>
#include "Joueur.h"
#include "Carte/Carte.h"
using namespace std;


Joueur(string  nom, sexe sex){
    _nom=nom;
}
void Joueur::equiperPersonnage(Carte carte){
    personnageActuel.setEquipement(carte);
}

void Joueur::AjouterInventaire(Carte carte){
    personnageActuel.setSacADos(carte);
}

void Joueur::MortPersonnage(){
    Personnage  personnage1(homme);
    personnageActuel=personnage1;
}

