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

struct body_parts{
    int head;
    int arms;
    int chest;
    int legs;
    int foots;
};

enum incidents_facheux{
    perte_niveau,
    perte_objet,
    gain_niveau,
    mort
};


class Carte{
public:
    Carte(std::string nom);
protected:
    std::string _nom;
    type _type;
};

#endif