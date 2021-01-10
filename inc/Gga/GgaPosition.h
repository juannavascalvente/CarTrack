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
    string strPos;
    CardinalDirection direction;
public:
    GgaPosition() = default;;
    GgaPosition(string &strPosIn, CardinalDirection &directionIn) : strPos(strPosIn), direction(directionIn) {};

    const string &getPosition() const {
        return strPos;
    }

    void setPosition(const string &strPositionIn) {
        GgaPosition::strPos = strPositionIn;
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

    friend ostream& operator<<(ostream& os, GgaPosition &pos)
    {
        os << pos.getPosition() << ',' << pos.direction;
        return os;
    }
};


#endif //CARTRACK_GGAPOSITION_H
