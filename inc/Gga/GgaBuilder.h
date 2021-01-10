/******************************************************************************
                                Includes
******************************************************************************/
#include <string>
#include "GgaData.h"

using namespace std;

#ifndef CARTRACK_GGABUILDER_H
#define CARTRACK_GGABUILDER_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaBuilder
{
public:
    static void BuildGga(string strGgaData, GgaData &gga);
};


#endif //CARTRACK_GGABUILDER_H
