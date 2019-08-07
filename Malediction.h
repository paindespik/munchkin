#ifndef DEF_MALEDICTION
#define DEF_MALEDICTION

#include "Carte.h"
#include <string>

enum effets_maleciction{
    perte_niveau,
    perte_objet,
    gain_niveau
};


class Malediction : public Carte
{
private:
    effets_maleciction _effet_malediction;
    int _force_maledeiction;
public:
    Malediction(std::string name, effets_maleciction effet_malediction, int force_malediction);
    ~Malediction();
    effets_maleciction get_effet_malediction();
    int get_force_maledeiction();
};

#endif