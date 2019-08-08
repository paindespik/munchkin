#include <iostream>
#include <string>
#include "Carte.h"

using namespace std;

Carte::Carte(string nom) : _nom(nom), _type(carte) {

}

void Carte::print_info(){
    std::string types_names[] = {"Carte","Objet","Monstre","Sort","Malediction"};

    cout << "Carte " << _nom << " de type " << types_names[(int)_type] << endl;
}