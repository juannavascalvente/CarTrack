/******************************************************************************
                            Includes section
******************************************************************************/
#include "../inc/GpsCoordinateBuilder.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinateBuilder::fromGPGGAtoGPS(const GgaData& ggaData, Coordinate &coord)
{
    // Get latitude and longitude
    string strDecDegreeLat = GGAtoDecimalDegrees(ggaData.getLatitude().getPosition(), uiZero, uiTwo);
    string strDecDegreeLon = GGAtoDecimalDegrees(ggaData.getLongitude().getPosition(), uiZero, uiThree);

    // Update coordinate
    CardinalDirection latDirection = ggaData.getLatitude().getDirection();
    CardinalDirection lonDirection = ggaData.getLongitude().getDirection();
    string strLat = strDecDegreeLat + latDirection.getDirectionAsString();
    string strLon = strDecDegreeLon + lonDirection.getDirectionAsString();
    coord.set(strLat, strLon);
}

string GpsCoordinateBuilder::GGAtoDecimalDegrees(const string& strVal, uint uiFirstIdx, uint uiSecondIdx)
{
    // Get degrees in float format
    string strDd = strVal.substr(uiFirstIdx, uiSecondIdx);
    float fDd = stof(strDd);

    // Get minutes Dd in float format
    string strMmm = strVal.substr(uiSecondIdx, strVal.length());
    float fMm = stof(strMmm);

    // Convert to decimal degrees
    float fResult = fDd + (fMm / f60Degrees);
    string strResult = to_string(fResult);

    return strResult;
}
