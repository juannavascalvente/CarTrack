/******************************************************************************
                            Includes section
******************************************************************************/
#include "../inc/GpsCoordinateBuilder.h"


/******************************************************************************
                            Function definitions
******************************************************************************/
void GpsCoordinateBuilder::fromGPGGAtoGPS(const std::string& strLat, const std::string& strLong, GpsCoordinates &coord)
{
    // Get latitude and longitude
    string strDDLat = GGAtoDecimalDegrees(strLat, uiZero, uiTwo);
    string strDDLon = GGAtoDecimalDegrees(strLong, uiZero, uiThree);

    // Update coordinate
    coord.setLat(strDDLat);
    coord.setLon(strDDLon);
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
