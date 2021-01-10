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

    bool isNorth(const string& strDirection) { return (strDirection == NORTH_STR); }
    bool isSouth(const string& strDirection) { return (strDirection == SOUTH_STR); }
    bool isEast(const string& strDirection) { return (strDirection == EAST_STR); }
    bool isWest(const string& strDirection) { return (strDirection == WEST_STR); }

public:
    CardinalDirection() : direction(NORTH) {};

    bool isNorth() { return (direction == NORTH); }
    bool isSouth() { return (direction == SOUTH); }
    bool isEast() { return (direction == EAST); }
    bool isWest() { return (direction == WEST); }

    string getDirectionAsString()
    {
        if (isNorth())
        {
            return NORTH_STR;
        }
        else if (isSouth())
        {
            return SOUTH_STR;
        }
        else if (isEast())
        {
            return EAST_STR;
        }
        else if (isWest())
        {
            return WEST_STR;
        }
        else
        {
            return "";
        }
    }

    bool setDirection(const string &strDirection) {
        bool isSuccess=true;

        if (isNorth(strDirection))
        {
            direction = NORTH;
        }
        else if (isSouth(strDirection))
        {
            direction = SOUTH;
        }
        else if (isEast(strDirection))
        {
            direction = EAST;
        }
        else if (isWest(strDirection))
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

    friend ostream& operator<<(ostream& os, CardinalDirection& dir)
    {
        os << dir.getDirectionAsString();
        return os;
    }
};

#endif //CARTRACK_CARDINALDIRECTION_H
