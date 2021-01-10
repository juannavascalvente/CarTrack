/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include <vector>
#include "GgaBuilder.h"

const string GgaBuilder::commaDelimiter = ",";

/******************************************************************************
                            Function definitions
******************************************************************************/
void GgaBuilder::BuildPosition(const string &strPosition, const string &strDirection, GgaPosition &position)
{
    position.setPosition(strPosition);
    position.setDirection(strDirection);
}

void GgaBuilder::BuildGga(const string& strGgaData, GgaData &gga)
{
    printf("GGA: %s\n",strGgaData.c_str());

    size_t pos = 0;
    string strOriginalData = strGgaData;
    vector<string> vTokens;
    while ((pos = strOriginalData.find(commaDelimiter)) != std::string::npos) {
        string strToken = strOriginalData.substr(0, pos);
        vTokens.push_back((strToken));
        strOriginalData.erase(0, pos + commaDelimiter.length());
    }

    // Set timestamp.
    gga.setTimeStamp(vTokens.at(0));

    // Set latitude and longitude
    GgaPosition latitude;
    GgaBuilder::BuildPosition(vTokens.at(1), vTokens.at(2), latitude);
    gga.setLatitude(latitude);
    GgaPosition longitude;
    GgaBuilder::BuildPosition(vTokens.at(3), vTokens.at(4), longitude);
    gga.setLongitude(longitude);

    // Set Number of satellites.
    gga.setNumSatellites(vTokens.at(6));
}
