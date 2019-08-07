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
};

typedef struct body_parts{
    int head;
    int arms;
    int chest;
    int legs;
    int foots;
};

class Carte
{
protected:
    std::string _name;
    std::string _description;
    type_carte _type;
public:
    Carte(std::string name);
    type_carte get_type();
    virtual void print_info();
    ~Carte();
};

#endif