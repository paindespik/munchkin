#ifndef DEF_DECK
#define DEF_DECK

#include "Carte.h"
#include "Objet.h"
#include "Monstre.h"
#include "Malediction.h"

#include <string>
#include <vector>

#define DECK_SIZE 40

enum type_of_deck{
    tresor,
    portes
};


class Deck
{
private:
    std::vector <Carte*> _pile_carte;
public:
    Deck(type_of_deck type);
    Carte pioche();
    void place(Carte carte);
    void print_top_card();
};



#endif
