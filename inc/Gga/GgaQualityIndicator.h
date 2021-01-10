//
// Created by juannc on 10/1/21.
//

#ifndef CARTRACK_GGAQUALITYINDICATOR_H
#define CARTRACK_GGAQUALITYINDICATOR_H


class GgaQualityIndicator
{
    enum QualityIndicator
    {
        FIX_NOT_VALID,
        GPS_FIX,
        DGPS_FIX
    };

    QualityIndicator indicator;
public:
    GgaQualityIndicator() : indicator(FIX_NOT_VALID) {};
};


#endif //CARTRACK_GGAQUALITYINDICATOR_H
