#ifndef TRAJECTOIRE_H
#define TRAJECTOIRE_H
#include "element.h"


class Trajectoire
{
private:
    Element **parcours;
    int numero;
    int nbEtapesMax;
    int prochaineEtape;

public:
    Trajectoire(const int _nbEtapesMaxi);
    ~Trajectoire();
    bool Ajouter(Element *_pElement);
    void Afficher();
};

#endif // TRAJECTOIRE_H
