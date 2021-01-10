/******************************************************************************
                                Includes
******************************************************************************/

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

    Direction direction;
public:
    CardinalDirection() : direction(NORTH) {};
};

#endif //CARTRACK_CARDINALDIRECTION_H
