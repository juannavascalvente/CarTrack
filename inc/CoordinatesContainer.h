/******************************************************************************
                                Includes
******************************************************************************/
#include <vector>
#include "Coordinate.h"

#ifndef CARTRACK_COORDINATESCONTAINER_H
#define CARTRACK_COORDINATESCONTAINER_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class CoordinatesContainer
{
    vector<Coordinate> v;
public:
    /**
     * @fn      add
     * @brief   Adds a new coordinate
     * @param   coord   (IN)    Coordinate to add
     */
    void add(Coordinate &coord);

    /**
     * @fn      flush
     * @brief   Flushes container
     */
    void flush();

    /**
     * @fn      size
     * @brief   Gets container number of elements
     * @return  Container number of elements
     */
    size_t size() { return v.size(); }

    /**
     * @fn      print
     * @brief   Prints container elements
     */
    void print();

    /**
     * @fn      write
     * @brief   Writes container elements to output file stream
     */
    void write(ofstream ofs);
};


#endif //CARTRACK_COORDINATESCONTAINER_H
