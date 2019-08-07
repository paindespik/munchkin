#ifndef DEF_CARTE
#define DEF_CARTE
#include <string>
#include <vector>


enum type_carte{
    objet,
    race,
    monstre,
    malediction,
    sort,
    classe
}

class Carte
{
protected:
    std::string _name;
    std::string _description;
    type_carte _type;
public:
    Carte(name);
    type_carte get_type();
    ~Carte();
};

#endif