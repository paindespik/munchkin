#ifndef DEF_CARTE_H
#define DEF_CARTE_H

#include <string>
enum type{
    carte,
    objet,
    monstre,
    sort,
    malediction
};

class Carte{
public:
    Carte(std::string nom);
protected:
    std::string nom;
    type _type;
};

#endif