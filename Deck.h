#ifndef DEF_DECK
#define DEF_DECK

#include "Carte.h"
#include "Objet.h"
#include "Monstre.h"
#include "Malediction.h"

#include <string>
#include <vector>

enum type_deck{
    tresor,
    portes
};


class Deck
{
private:
    std::vector <Carte*> pile_carte;
public:
    Deck(type_deck type);
    ~Deck();
    Carte pioche();
};



#endif
