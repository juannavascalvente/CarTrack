/******************************************************************************
                                Includes
******************************************************************************/
#include <string>
#include "Coordinate.h"
#include "GgaData.h"

#ifndef CARTRACK_GPSCOORDINATEBUILDER_H
#define CARTRACK_GPSCOORDINATEBUILDER_H


/******************************************************************************
                            Class declaration
******************************************************************************/
class GpsCoordinateBuilder {
    static const uint uiZero = 0;
    static const uint uiTwo = 2;
    static const uint uiThree = 3;

    constexpr static const float f60Degrees = 60.0;

    static string GGAtoDecimalDegrees(const string& strVal, uint uiFirstIdx, uint uiSecondIdx);

public:
    static void fromGPGGAtoGPS(const GgaData& ggaData, Coordinate &coord);
};

#endif //CARTRACK_GPSCOORDINATEBUILDER_H
