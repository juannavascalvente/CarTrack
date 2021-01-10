/******************************************************************************
                                Includes
******************************************************************************/
#include <string>
using namespace std;

#ifndef CARTRACK_COORDINATE_H
#define CARTRACK_COORDINATE_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class Coordinate
{
    string strLatitude;
    string strLongitude;
public:
    Coordinate() = default;

    void set(string &strLat, string &strLon)
    {
        strLatitude = strLat;
        strLongitude = strLon;
    }

    friend ostream& operator<<(ostream& os, Coordinate &coord)
    {
        const string strComma = ",";
        os << coord.strLatitude << strComma << coord.strLongitude;
        return os;
    }
};

#endif //CARTRACK_COORDINATE_H
