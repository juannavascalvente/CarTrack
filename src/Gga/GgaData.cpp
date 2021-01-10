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

void GgaData::setHdop(const string& strHdop)
{
    hdop.set(strHdop);
}

void GgaData::setAltitude(const GgaAltitude& val)
{
    altitude = val;
}

void GgaData::setGeoid(const GgaAltitude& val)
{
    geoid = val;
}

void GgaData::setDiff(const string& val)
{
    strAgeDiffGpsRecord = val;
}

void GgaData::setStationId(const string& val)
{
    strStationId = val;
}

void GgaData::setChecksum(const string& val)
{
    strChecksum = val;
}

void GgaData::print()
{
    cout << "Timestamp:\t\t" << strUtc << endl;
    cout << "Latitude:\t\t" << latitude << endl;
    cout << "Longitude:\t\t" << longitude << endl;
    cout << "Quality:\t	" << quality << endl;
    cout << "Num sats:\t\t" << szNumSatellites << endl;
    cout << "HDOP:\t\t\t" << hdop << endl;
    cout << "Altitude:\t\t" << altitude << endl;
    cout << "Geods:\t\t\t" << geoid << endl;
    cout << "Gps age diff:\t" << strAgeDiffGpsRecord << endl;
    cout << "Station ID:\t\t" << strStationId << endl;
    cout << "Checksum:\t\t" << strChecksum << endl;
}

const GgaPosition &GgaData::getLatitude() const {
    return latitude;
}

const GgaPosition &GgaData::getLongitude() const {
    return longitude;
}
