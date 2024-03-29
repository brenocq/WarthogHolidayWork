#ifndef POTENTIALFIELD_H
#define POTENTIALFIELD_H
#include "navigationalgorithm.h"

class PotentialField: public NavigationAlgorithm
{
public:
    PotentialField();
    PotentialField(Position* _start, Position* _end);
    ~PotentialField();
    void generatePath();
    void draw();
    void clean();
};

#endif // POTENTIALFIELD_H
