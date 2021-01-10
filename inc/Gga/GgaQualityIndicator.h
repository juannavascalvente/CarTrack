//
// Created by juannc on 10/1/21.
//

#ifndef CARTRACK_GGAQUALITYINDICATOR_H
#define CARTRACK_GGAQUALITYINDICATOR_H


class GgaQualityIndicator
{
    enum EnQualityIndicator
    {
        FIX_NOT_VALID,
        GPS_FIX,
        DGPS_FIX
    };

    EnQualityIndicator indicator;
    bool isValid;
public:
    GgaQualityIndicator() : indicator(FIX_NOT_VALID), isValid(false) {};

    void set(const string& strQualityIn)
    {
        isValid = true;
        if (strQualityIn == "0")
        {
            indicator = FIX_NOT_VALID;
        }
        else if (strQualityIn == "1")
        {
            indicator = GPS_FIX;
        }
        else if (strQualityIn == "2")
        {
            indicator = DGPS_FIX;
        }
        else
        {
            isValid = false;
        }
    }

    friend ostream& operator<<(ostream& os, GgaQualityIndicator &ind)
    {
        os << ind.indicator;
        return os;
    }
};


#endif //CARTRACK_GGAQUALITYINDICATOR_H
