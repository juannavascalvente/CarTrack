/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include <fstream>
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
    ofstream of;

    of.open(strFileName, ios::out);
    if (of.is_open())
    {
        of << "Latitude: " << coord.getLat() << " N,";
        of << "Longitude: " << coord.getLon() << " W" << endl;
        of.close();

        isSuccess = true;
    }

    return isSuccess;
};

bool GpsCoordinatesIO::write(vector<GpsCoordinates> &vec, string &strFileName)
{
    bool isSuccess=false;
    ofstream of;

    of.open(strFileName, ios::out);
    if (of.is_open())
    {
        for (const auto& item : vec)
        {
            of << "Latitude: " << item.getLat() << " N,";
            of << "Longitude: " << item.getLon() << " W" << endl;
        }
        of.close();

        isSuccess = true;
    }

    return isSuccess;
};
