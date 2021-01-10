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

    string METERS_STR = "M";
    string FEETS_STR = "F";

    string getUnitAsString()
    {
        if (isMeter())
        {
            return METERS_STR;
        }
        else if (isFeet())
        {
            return FEETS_STR;
        }
        else
        {
            return "";
        }
    }

    Unit unit;
    bool isValidStatus;
public:
    DistanceUnit() : unit(METERS), isValidStatus(true) {};

    bool isMeter() { return (unit == METERS); }
    bool isFeet() { return (unit == FEETS); }

    void set(const string &strUnit)
    {
        isValidStatus = true;
        if (strUnit == "M")
        {
            unit = METERS;
        }
        else if (strUnit == "F")
        {
            unit = FEETS;
        }
        else
        {
            isValidStatus = false;
        }
    }

    bool isValid() const { return isValidStatus; }

    friend ostream& operator<<(ostream& os, DistanceUnit& unitIn)
    {
        os << unitIn.getUnitAsString();
        return os;
    }
};


#endif //CARTRACK_DISTANCEUNIT_H
