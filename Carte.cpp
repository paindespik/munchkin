#include "Carte.h"

Carte::Carte(name)
{
    _name = name;
}

Carte::~Carte()
{
}

type_carte Carte::get_type(){
    return _type;
}