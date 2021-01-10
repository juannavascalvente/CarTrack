/******************************************************************************
                                Includes
******************************************************************************/
#include <cstddef>
#include "GgaPosition.h"
#include "GgaQualityIndicator.h"
#include "GgaHdop.h"
#include "GgaAltitude.h"

#ifndef CARTRACK_GGADATA_H
#define CARTRACK_GGADATA_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaData {
    float fTimeStamp;
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
    GgaData() : fTimeStamp(0.0), szNumSatellites(0), fAgeDiffGpsRecord(0.0), szStationId(0), szChecksum(0) {}
    void print();
};

#endif //CARTRACK_GGADATA_H
