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
public:
    Malediction(std::string name);
    ~Malediction();
};

#endif