#ifndef DEF_TOUR
#define DEF_TOUR

#include <string>
#include <iostream>
#include <vector>

#include "Joueur.h"
#include "Personnage.h"
#include "Carte.h"
#include "Malediction.h"
#include "Monstre.h"
#include "Objet.h"

class Tour
{
private:

public:
    Tour(Joueur joueurCourant);

private:
    Joueur _joueurCourant;
};

#endif

