/******************************************************************************
                                Includes
******************************************************************************/
#include <string>
#include <vector>
#include "GpsCoordinates.h"

using namespace std;

#ifndef CARTRACK_GPSCOORDINATESIO_H
#define CARTRACK_GPSCOORDINATESIO_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GpsCoordinatesIO {
public:
    /**
    * @brief   Prints latitude and longitude coordinates
    */
    static void print(GpsCoordinates &coord);
    static bool write(GpsCoordinates &coord, string &strFileName);
    static bool write(vector<GpsCoordinates> &v, string &strFileName);
};

#endif //CARTRACK_GPSCOORDINATESIO_H
