#ifndef DEF_MALEDICTION
#define DEF_MALEDICTION

#include "Carte.h"
#include <string>


class Malediction : public Carte
{
private:
    incidents_facheux _effet_malediction;
    int _force_maledeiction;
public:
    Malediction(std::string name, incidents_facheux effet_malediction, int force_malediction);
    ~Malediction();
    incidents_facheux get_effet_malediction();
    int get_force_maledeiction();
};

#endif