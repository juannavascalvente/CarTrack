/******************************************************************************
                                Includes
******************************************************************************/
#include <string>

using namespace std;

#ifndef CARTRACK_GPSCOORDINATE_H
#define CARTRACK_GPSCOORDINATE_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GpsCoordinates {
    string strLat;
    string strLon;
public:
    /**
     * @brief   Prints latitude and longitude coordinates
     */
    void print() const;

    /**
     * @brief   Sets latitude coordinate
     * @param   strLatIn  (IN)    New latitude
     */
    void setLat(const string &strLatIn);

    /**
     * @brief   Sets longitude coordinate
     * @param   strLonIn  (IN)    New longitude
     */
    void setLon(const string &strLonIn);

    /**
     * @brief   Returns latitude coordinate
     * @return  Latitude coordinate
     */
    const string &getLat() const;

    /**
     * @brief   Returns longitude coordinate
     * @return  Longitude coordinate
     */
    const string &getLon() const;
};

#endif //CARTRACK_GPSCOORDINATE_H
