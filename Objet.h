#ifndef DEF_OBJET
#define DEF_OBJET

#include "Carte.h"
#include <string>


class Objet : public Carte
{
private:
    int _force;
    body_parts body_usage; 
public:
    Objet(std::string name,int force);
    ~Objet();
};



#endif
