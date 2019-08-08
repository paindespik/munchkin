#include <string>
using namespace std;

#include "Monstre.h"



Monstre::Monstre(std::string name, int force , int recompense_tresor , int recompense_niveau, incidents_facheux incident, int force_incident):Carte(name){
    _force = force;
    _recompense_niveau = recompense_niveau;
    _recompense_tresor = recompense_tresor;

}
Monstre::~Monstre(){

}
int Monstre::get_recompense_tresor(){
    return _recompense_tresor;
}
int Monstre::get_recompense_niveau(){
    return _recompense_niveau;
}

int Monstre::get_force(){
    return _force;
}

incidents_facheux Monstre::get_incident_facheux() {
    return this->_incident_facheux;
}

int Monstre::get_force_incident() {
    return this->_force_incident;
}