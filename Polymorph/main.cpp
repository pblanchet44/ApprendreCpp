#include <iostream>
#include "trajectoire.h"
#include "segment.h"
#include "element.h"

using namespace std;

int main()
{
    Trajectoire laTrajectoire(2);
    Segment leSegment(9,0);

    laTrajectoire.Afficher();
    return 0;
}
