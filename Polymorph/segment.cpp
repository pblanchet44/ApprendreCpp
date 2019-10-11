#include <iostream>
#include "segment.h"

using namespace std;

Segment::Segment(double _longueur, double _angle)
{
    double longueur(_longueur);
    double angle(_angle);
}

void Segment::Afficher()
{
    cout << "SEGMENT L = " << longueur << " " << "A = " << angle << endl;
}
