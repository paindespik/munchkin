#include "Deck.h"
#include <stdexcept>
using namespace std;

Deck::Deck(type_deck type)
{
    if (type == tresor)
    {
        for (int i = 0; i < DECK_SIZE; i++)
        {
            place(Objet("Banane",2));
        }
        
    }else if(type == portes){
        
    }else{
        throw std::logic_error("Not implemented!");
    }
}

Deck::~Deck()
{
}

Carte Deck::pioche(){
    Carte retiree = *_pile_carte.back();
    _pile_carte.pop_back();
    return retiree;
}

void Deck::place(Carte carte){
    _pile_carte.push_back(&carte);
}