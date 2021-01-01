/******************************************************************************
                                Includes
******************************************************************************/
#include "../inc/GpsCoordinates.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinates::setLat(const string &strLatIn) {
    GpsCoordinates::strLat = strLatIn;
}

void GpsCoordinates::setLon(const string &strLonIn) {
    GpsCoordinates::strLon = strLonIn;
}

const string &GpsCoordinates::getLat() const {
    return strLat;
}

const string &GpsCoordinates::getLon() const {
    return strLon;
}
