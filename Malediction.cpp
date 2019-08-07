#include "Malediction.h"

Malediction::Malediction(std::string name, effets_maleciction effet_malediction, int force_malediction): Carte(name){
    _effet_malediction = effet_malediction;
    _force_maledeiction = force_malediction;
}

Malediction::~Malediction(){

}


effets_maleciction Malediction::get_effet_malediction() {
    return this->_effet_malediction;
}

int Malediction::get_force_maledeiction() {
    return this->_force_maledeiction;
}