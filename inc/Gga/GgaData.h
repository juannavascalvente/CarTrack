/******************************************************************************
                                Includes
******************************************************************************/
#include <cstddef>
#include <iostream>
#include "GgaPosition.h"
#include "GgaQualityIndicator.h"
#include "GgaHdop.h"
#include "GgaAltitude.h"

using namespace std;

#ifndef CARTRACK_GGADATA_H
#define CARTRACK_GGADATA_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaData {
    string strUtc;
    GgaPosition latitude;
    GgaPosition longitude;
    GgaQualityIndicator quality;
    size_t szNumSatellites;
    GgaHdop hdop;
    GgaAltitude altitude;
    GgaAltitude geoid;
    string strAgeDiffGpsRecord;
    string strStationId;
    string strChecksum;
public:
    GgaData() : szNumSatellites(0) {}
    void print();

    void setTimeStamp(const string& strUtcIn);
    void setLatitude(const GgaPosition& latitudeIn);
    void setLongitude(const GgaPosition& longitudeIn);
    void setQualityIndicator(const string& strQualInd);
    void setNumSatellites(const string& strNumSat);
    void setHdop(const string& strHdop);
    void setAltitude(const GgaAltitude& val);
    void setGeoid(const GgaAltitude& val);
    void setDiff(const string& val);
    void setStationId(const string& val);
    void setChecksum(const string& val);
};

#endif //CARTRACK_GGADATA_H
