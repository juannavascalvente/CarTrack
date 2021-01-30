/******************************************************************************
                                Includes
******************************************************************************/
#include <string>

#include "CoordinatesContainer.h"
#include "ReceiverStatus.h"

using namespace std;

#ifndef CARTRACK_RECEIVER_H
#define CARTRACK_RECEIVER_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class Receiver {

    static ReceiverStatus status;

    static int serial_port;
    static char dat,buff[100],GGA_code[3];
    static bool isItGgaString;
    static unsigned int indexGga;
    static bool isGgaReceivedCompletely;

    static CoordinatesContainer coordinates;

    /**
     * @fn:         ReadData
     * @brief       Reads GPS coordinate from GPS device
     */
    static void ReadData();

    /**
     * @fn:         isDataReceived
     * @brief       Checks if a full coordinate has been received
     * @return      true if a GPS coordinate has been received
     *              false otherwise
     */
    static bool isDataReceived() {return isGgaReceivedCompletely; };

    /**
     * @fn:         setDataReceived
     * @brief       Sets  isGgaReceivedCompletely value to input value
     * @param value (IN) Value to set
     */
    static void setDataReceived(bool value) { isGgaReceivedCompletely = value; };
public:
    /**
     * @fn:         Init
     * @brief       Initializes receiver resources
     * @return      true if initialized
     *              false otherwise
     */
    static bool Init();

    /**
     * @fn:         Process
     * @brief       Receives GPS coordinates and saves them in coordinates container
     * @return      true if process finished while running
     *              false otherwise
     */
    static bool Process();

    /**
     * @fn:         IsRunning
     * @brief       Checks if receiver is in RUNNING process
     * @return      true if receiver is in RUNNING process
     *              false otherwise
     */
    static bool IsRunning();
};

#endif //CARTRACK_RECEIVER_H
