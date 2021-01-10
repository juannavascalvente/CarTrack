/******************************************************************************
                                Includes
******************************************************************************/

#ifndef CARTRACK_DISTANCEUNIT_H
#define CARTRACK_DISTANCEUNIT_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class DistanceUnit {
    enum Unit
    {
        METERS,
        FEETS
    };

    Unit unit;
public:
    DistanceUnit() : unit(METERS) {};
};


#endif //CARTRACK_DISTANCEUNIT_H
