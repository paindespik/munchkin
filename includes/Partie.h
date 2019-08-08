#ifndef DEF_PARTIE
#define DEF_PARTIE
#include "Joueur.h"

#include <iostream>
#include <string>
#include <vector>

class Partie
{
private:
    std::vector<Joueur> liste_joueurs;
public:
    Partie();
    ~Partie();
    void init();
    void play();
};

#endif