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
                                    Defines
******************************************************************************/
#define BUFF_LEN            100
#define GGA_CODE_LEN        3
#define OUT_FILE_NAME       "coordinates.txt"


/******************************************************************************
                            Class declaration
******************************************************************************/
class Receiver {

    ReceiverStatus status;

    int serial_port;
    char dat,buff[BUFF_LEN],GGA_code[GGA_CODE_LEN];
    bool isItGgaString;
    unsigned int indexGga;
    bool isGgaReceivedCompletely;
    string strFileName;

    CoordinatesContainer coordinates;

    /**
     * @fn:         Read
     * @brief       Reads GPS coordinate from GPS device
     */
    void Read();

    bool isTimeToSave();

    bool Save();

    /**
     * @fn:         isDataReceived
     * @brief       Checks if a full coordinate has been received
     * @return      true if a GPS coordinate has been received
     *              false otherwise
     */
    bool isDataReceived() const {return isGgaReceivedCompletely; };

    /**
     * @fn:         setDataReceived
     * @brief       Sets  isGgaReceivedCompletely value to input value
     * @param value (IN) Value to set
     */
    void setDataReceived(bool value) { isGgaReceivedCompletely = value; };
public:

    Receiver() : serial_port(0), dat(0), buff(""), GGA_code(""), isItGgaString(false), indexGga(0),
                 isGgaReceivedCompletely(false), strFileName(OUT_FILE_NAME) {};

    /**
     * @fn:         Init
     * @brief       Initializes receiver resources
     * @return      true if initialized
     *              false otherwise
     */
    bool Init();

    /**
     * @fn:         Process
     * @brief       Receives GPS coordinates and saves them in coordinates container
     * @return      true if process finished while running
     *              false otherwise
     */
    bool Process();

    /**
     * @fn:         IsRunning
     * @brief       Checks if receiver is in RUNNING process
     * @return      true if receiver is in RUNNING process
     *              false otherwise
     */
    bool IsRunning();
};

#endif //CARTRACK_RECEIVER_H
