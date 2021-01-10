/******************************************************************************
                            Includes section
******************************************************************************/
#include "CoordinatesContainer.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void CoordinatesContainer::add(Coordinate &coord)
{
    data.push_back(coord);
}

void CoordinatesContainer::flush()
{
    data.clear();
}
