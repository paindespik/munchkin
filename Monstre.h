#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include "Carte.h"
#include <string>

enum incidents_facheux{
    perte_niveau,
    perte_objet,
    mort,
    gage
};


class Monstre : public Carte
{
private:
    int _niveau;
    incidents_facheux _incident_facheux;
    int _force_incident = NULL;
    int _recompense_tresor;
    int _recompense_niveau;
public:
    Monstre(std::string name);
    ~Monstre();
    int get_recompense_tresor();
    int get_recompense_niveau();
};


#endif