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
public:
    GgaAltitude() : fGeodesialSeparation(0.0), geoUnit() {};
};


#endif //CARTRACK_GGAALTITUDE_H
