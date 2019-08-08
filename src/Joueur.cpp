#include <string>
#include <iostream>
#include <vector>
#include "Personnage.h"
#include "Carte/Carte.h"
#include "Joueur.h"
using namespace std;


Joueur::Joueur(string nom){
    _nom=nom;
}

void Joueur::equiperPersonnage(Carte carte){
    personnageActuel.setEquipement(carte);
}

void Joueur::AjouterInventaire(Carte carte){
    personnageActuel.setSacADos(carte);
}

void Joueur::mortPersonnage(){
    Personnage personnage1(homme);
    personnageActuel=personnage1;
}

void Joueur::afficher() const {

}
