/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include "../inc/GpsCoordinates.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinates::print() const {
    cout << "Latitute: " << this->getLat() << " N" << endl;
    cout << "Longitude: " << this->getLon() << " W" << endl;
}

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
