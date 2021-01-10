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
        std::cout << strToken << std::endl;
        vTokens.push_back((strToken));
        strOriginalData.erase(0, pos + commaDelimiter.length());
    }

    gga.setTimeStamp(vTokens.at(0));
}
