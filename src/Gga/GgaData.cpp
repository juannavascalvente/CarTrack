/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include "GgaData.h"

using namespace std;

/******************************************************************************
                            Function definitions
******************************************************************************/
void GgaData::print()
{
    cout << "Timestamp:\t" << fTimeStamp << endl;
    //cout << "Latitude:\t" << latitude << endl;              // TODO: implement out
    //cout << "Longitude:\t" << longitude << endl;            // TODO: implement out
    //cout << "Quality:\t" << quality << endl;                // TODO: implement out
    cout << "Num sats:\t" << szNumSatellites << endl;
    //cout << "HDOP:\t" << hdop << endl;                      // TODO: implement out
    //cout << "Altitude:\t" << altitude << endl;              // TODO: implement out
    //cout << "Geods:\t" << geoid << endl;                    // TODO: implement out
    cout << "Gps age diff:\t" << fAgeDiffGpsRecord << endl;
    cout << "Station ID:\t" << szStationId << endl;
    cout << "Checksum:\t" << szChecksum << endl;
}
