/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include "../inc/GpsCoordinatesIO.h"

/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinatesIO::print(GpsCoordinates &coord)
{
    cout << "Latitude: " << coord.getLat() << " N" << endl;
    cout << "Longitude: " << coord.getLon() << " W" << endl;
};

bool GpsCoordinatesIO::write(GpsCoordinates &coord, string &strFileName)
{
    bool isSuccess=false;

    return isSuccess;
};

bool GpsCoordinatesIO::write(vector<GpsCoordinates> &v, string &strFileName)
{
    bool isSuccess=false;

    return isSuccess;
};
