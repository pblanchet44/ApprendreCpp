#ifndef SEGMENT_H
#define SEGMENT_H
#include "element.h"

class Segment : public Element
{
private:
    double longueur;
    double angle;

public:
    Segment(double in_longueur, double in_angle);
    void Afficher();
};

#endif // SEGMENT_H
