#include "Deck.h"
#include <stdexcept>
using namespace std;

Deck::Deck(type_deck type)
{
    if (type == tresor)
    {

    }else if(type == portes){

    }else{
        throw std::logic_error("Not implemented!");
    }
}

Deck::~Deck()
{
}
