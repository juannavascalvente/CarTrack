/******************************************************************************
                                Includes
******************************************************************************/
#include <vector>
#include "Coordinate.h"

#ifndef CARTRACK_COORDINATESCONTAINER_H
#define CARTRACK_COORDINATESCONTAINER_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class CoordinatesContainer
{
    vector<Coordinate> data;
public:
    void add(Coordinate &coord);
    void flush();
};


#endif //CARTRACK_COORDINATESCONTAINER_H
