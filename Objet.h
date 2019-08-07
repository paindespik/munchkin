#include "Carte.h"
#include <string>

typedef body_parts{
    int head;
    int arms;
    int chest;
    int legs;
    int foots;
};


class Objet : public Carte
{
private:
    int _force;
    body_parts body_usage; 
public:
    Objet(name, force);
    ~Objet();
};



#ifndef 
