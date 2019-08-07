#include "Carte.h"
#include <iostream>
using namespace std;

Carte::Carte(string name)
{
    _name = name;
}

Carte::~Carte()
{
}

type_carte Carte::get_type(){
    return _type;
}

void Carte::print_info(){
    cout << _name << " | " << _description << endl;
}