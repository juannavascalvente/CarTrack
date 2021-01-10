/******************************************************************************
                                Includes
******************************************************************************/
#include <string>
#include "GgaData.h"
#include "GgaPosition.h"

using namespace std;

#ifndef CARTRACK_GGABUILDER_H
#define CARTRACK_GGABUILDER_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaBuilder
{
    static const string commaDelimiter;
public:
    static void BuildGga(const string& strGgaData, GgaData &gga);

    static void BuildPosition(const string &strPosition, const string &strDirection, GgaPosition &position);
};


#endif //CARTRACK_GGABUILDER_H
