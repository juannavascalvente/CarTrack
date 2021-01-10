/******************************************************************************
                                Includes
******************************************************************************/
#include "DistanceUnit.h"

#ifndef CARTRACK_GGAALTITUDE_H
#define CARTRACK_GGAALTITUDE_H


/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaAltitude {
    float fGeodesialSeparation;
    DistanceUnit geoUnit;
    bool isValid;
public:
    GgaAltitude() : fGeodesialSeparation(0.0), geoUnit(), isValid(false) {};

    void set(const string &strVal, const string &strUnit)
    {
        fGeodesialSeparation = std::stof(strVal);
        geoUnit.set(strUnit);
        isValid = geoUnit.isValid();
    }

    friend ostream& operator<<(ostream& os, GgaAltitude &altitude)
    {
        os << altitude.fGeodesialSeparation << ',' << altitude.geoUnit;
        return os;
    }
};


#endif //CARTRACK_GGAALTITUDE_H
