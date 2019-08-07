#ifndef DEF_MONSTRE
#define DEF_MONSTRE

#include "Carte.h"
#include <string>

enum incidents_facheux{
    perte_niveau,
    perte_objet,
    mort
};


class Monstre : public Carte
{
private:
    int _force;
    incidents_facheux _incident_facheux;
    int _force_incident = NULL;
    int _recompense_tresor;
    int _recompense_niveau;
public:
    Monstre(std::string name, int force , int recompense_tresor , int recompense_niveau, incidents_facheux incident, int force_incident);
    ~Monstre();
    int get_recompense_tresor();
    int get_recompense_niveau();
    int get_force();
    incidents_facheux get_incident_facheux();
    int get_force_incident();
};


#endif