#include <iostream>
#include <string>
#include <vector>

#include "Personnage.h"
#include "Carte.h"

using namespace std;

Personnage::Personnage(){
    _sexe = homme;
    _niveau = 1;
}

Personnage::Personnage(sexe sex) : _sexe(sex), _niveau(1){
    
}

vector<Carte> Personnage::getSacADos(){
    return sac_a_dos;
}
vector<Carte> Personnage::getEquipement(){
    return equipement;
}

void Personnage::setSacADos(Carte carte){
    sac_a_dos.push_back(carte);
}

void Personnage::setEquipement(Carte carte){
    equipement.push_back(carte);
}