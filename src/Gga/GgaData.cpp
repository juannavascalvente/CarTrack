/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
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


void GgaData::print()
{
    cout << "Timestamp:\t\t" << strUtc << endl;
    cout << "Latitude:\t\t" << latitude << endl;              // TODO: implement out
    cout << "Longitude:\t\t" << longitude << endl;            // TODO: implement out
    /*
    //cout << "Quality:\t	" << quality << endl;                // TODO: implement out
     */
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
