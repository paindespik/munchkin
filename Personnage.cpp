#include <iostream>
#include <string>
#include <vector>

#include "Personnage.h"
#include "Carte/Carte.h"

using namespace std;

Personnage::Personnage(sexe sex) : _sexe(sex), _niveau(1){

}

vector<Carte> Personnage::getSacADos(){
    return sac_a_dos;
}
vector<Carte> Personnage::getEquipement(){
    return equipement;
}

void setSacAdos(Carte carte){
    setSacAdos.push_back(carte);
}

void setEquipement(Carte carte){
    equipement.push_back(carte);
}