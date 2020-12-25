/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include "../inc/GpsCoordinate.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinate::print() const {
    cout << "Latitute: " << this->getLat() << " N" << endl;
    cout << "Longitude: " << this->getLon() << " W" << endl;
}

void GpsCoordinate::setLat(const string &strLatIn) {
    GpsCoordinate::strLat = strLatIn;
}

void GpsCoordinate::setLon(const string &strLonIn) {
    GpsCoordinate::strLon = strLonIn;
}

const string &GpsCoordinate::getLat() const {
    return strLat;
}

const string &GpsCoordinate::getLon() const {
    return strLon;
}
