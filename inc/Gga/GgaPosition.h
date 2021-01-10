/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include "CardinalDirection.h"

using namespace std;

#ifndef CARTRACK_GGAPOSITION_H
#define CARTRACK_GGAPOSITION_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaPosition {
    string strPosition;
    CardinalDirection direction;
public:
    GgaPosition() {};
    GgaPosition(string &strPosIn, CardinalDirection &directionIn) : strPosition(strPosIn), direction(directionIn) {};

    const string &getPosition() const {
        return strPosition;
    }

    void setPosition(const string &strPositionIn) {
        GgaPosition::strPosition = strPositionIn;
    }

    const CardinalDirection &getDirection() const {
        return direction;
    }

    void setDirection(const CardinalDirection &directionIn) {
        GgaPosition::direction = directionIn;
    }

    void setDirection(const string &strDirection) {
        GgaPosition::direction.setDirection(strDirection);
    }
};


#endif //CARTRACK_GGAPOSITION_H
