/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>

using namespace std;

#ifndef CARTRACK_CARDINALDIRECTION_H
#define CARTRACK_CARDINALDIRECTION_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class CardinalDirection {
    enum Direction
    {
        NORTH,
        SOUTH,
        EAST,
        WEST
    };

    string NORTH_STR = "N";
    string SOUTH_STR = "S";
    string EAST_STR = "E";
    string WEST_STR = "W";

    Direction direction;
public:
    CardinalDirection() : direction(NORTH) {};

    bool setDirection(const string &strDirection) {
        bool isSuccess=true;

        if (strDirection == NORTH_STR)
        {
            direction = NORTH;
        }
        else if (strDirection == SOUTH_STR)
        {
            direction = SOUTH;
        }
        else if (strDirection == EAST_STR)
        {
            direction = EAST;
        }
        else if (strDirection == WEST_STR)
        {
            direction = WEST;
        }
        else
        {
            cout << "Unknown input direction " << strDirection << endl;
            isSuccess = false;
        }

        return isSuccess;
    }
};

#endif //CARTRACK_CARDINALDIRECTION_H
