#include "Objet.h"
#include <iostream>
using namespace std;


Objet::Objet(string name, int force):Carte(name){
    _force = force;
}

Objet::~Objet()
{
}

int Objet::get_force(){
    return _force;
}