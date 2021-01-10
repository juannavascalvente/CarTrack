/******************************************************************************
                            Includes section
******************************************************************************/
#include <iostream>
#include "GgaBuilder.h"

const string GgaBuilder::commaDelimiter = ",";

/******************************************************************************
                            Function definitions
******************************************************************************/
void GgaBuilder::BuildGga(const string& strGgaData, GgaData &gga)
{
    printf("GGA: %s\n",strGgaData.c_str());
    std::string strToken = strGgaData.substr(0, strGgaData.find(commaDelimiter));
    gga.setTimeStamp(strToken);
}
