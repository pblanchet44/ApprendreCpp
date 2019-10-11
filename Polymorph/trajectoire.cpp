#include <iostream>
#include "trajectoire.h"
#include "segment.h"

using namespace std;

Trajectoire::Trajectoire(const int _nbEtapesMaxi):
    nbEtapesMax(_nbEtapesMaxi)
{
    parcours = new Element *[nbEtapesMax];
}

Trajectoire::~Trajectoire()
{
    delete[] parcours;
}

bool Trajectoire::Ajouter(Element *_pElement)
{
    bool retour = true;
    if (numero < nbEtapesMax)
        parcours[numero++] = _pElement;
    else
        retour = false;
    return retour;
}

void Trajectoire::Afficher()
{
    for (int indice=0; indice < nbEtapesMax; indice++) {
        parcours[numero]->Afficher();
        //cout << parcours[numero]->Afficher() << endl;
    }
}
