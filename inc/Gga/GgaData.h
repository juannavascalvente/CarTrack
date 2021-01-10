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
    float fAgeDiffGpsRecord;
    size_t szStationId;
    size_t szChecksum;
public:
    GgaData() : szNumSatellites(0), fAgeDiffGpsRecord(0.0), szStationId(0), szChecksum(0) {}
    void print();

    void setTimeStamp(const string& strUtcIn);
    void setLatitude(const GgaPosition& latitudeIn);
    void setLongitude(const GgaPosition& longitudeIn);
    void setQualityIndicator(const string& strQualInd);
    void setNumSatellites(const string& strNumSat);
    void setHdop(const string& strHdop);
};

#endif //CARTRACK_GGADATA_H
