/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include <sstream>
#include "GgaData.h"

using namespace std;

/******************************************************************************
                            Function definitions
******************************************************************************/
void GgaData::setTimeStamp(const string& strUtcIn)
{
    strUtc = strUtcIn;
}

void GgaData::setLatitude(const GgaPosition& latitudeIn)
{
    latitude = latitudeIn;
}

void GgaData::setLongitude(const GgaPosition& longitudeIn)
{
    longitude = longitudeIn;
}

void GgaData::setQualityIndicator(const string& strQualInd)
{
    quality.set(strQualInd);
}

void GgaData::setNumSatellites(const string& strNumSat)
{
    std::stringstream sstream(strNumSat);
    sstream >> szNumSatellites;
}

void GgaData::print()
{
    cout << "Timestamp:\t\t" << strUtc << endl;
    cout << "Latitude:\t\t" << latitude << endl;
    cout << "Longitude:\t\t" << longitude << endl;
    cout << "Quality:\t	" << quality << endl;
    cout << "Num sats:\t\t" << szNumSatellites << endl;
    /*
    //cout << "HDOP:\t" << hdop << endl;                      // TODO: implement out
    //cout << "Altitude:\t" << altitude << endl;              // TODO: implement out
    //cout << "Geods:\t" << geoid << endl;                    // TODO: implement out
     */
    cout << "Gps age diff:\t" << fAgeDiffGpsRecord << endl;
    cout << "Station ID:\t\t" << szStationId << endl;
    cout << "Checksum:\t\t" << szChecksum << endl;
}
