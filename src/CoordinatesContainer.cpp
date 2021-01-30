/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include <fstream>

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

void CoordinatesContainer::write(ofstream &ofs)
{
    for (auto& item : v)
    {
        ofs << item << endl;
    }
}
