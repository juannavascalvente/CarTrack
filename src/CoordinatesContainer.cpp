/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include "CoordinatesContainer.h"

using namespace std;


/******************************************************************************
                            Function definitions
******************************************************************************/
void CoordinatesContainer::add(Coordinate &coord)
{
    v.push_back(coord);
}

void CoordinatesContainer::flush()
{
    v.clear();
}

void CoordinatesContainer::print()
{
    for (auto& item : v)
    {
        cout << item << endl;
    }
}
