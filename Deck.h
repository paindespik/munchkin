#ifndef DEF_DECK
#define DEF_DECK

#include "Carte.h"
#include "Objet.h"
#include "Monstre.h"
#include "Malediction.h"

#include <string>
#include <vector>

#define DECK_SIZE 40

enum type_deck{
    tresor,
    portes
};


class Deck
{
private:
    std::vector <Carte*> _pile_carte;
public:
    Deck(type_deck type);
    ~Deck();
    Carte pioche();
    void place(Carte carte);
};



#endif
