#ifndef DEF_PERSONNAGE_H
#define DEF_PERSONNAGE_H

#include <iostream>
#include <string>
#include <vector>
#include "Carte/Carte.h"

enum sexe{
    homme,
    femme,
    hermaphrodite
};
class Personnage{


public:
    Personnage(sexe sex);
    std::vector<Carte> getSacADos();
    std::vector<Carte> getEquipement();
    void setSacADos(Carte carte);
    void setEquipement(Carte carte);
private:
    std::vector<Carte> sac_a_dos;
    std::vector<Carte> equipement;
    int _niveau;
    sexe _sexe;
};

#endif