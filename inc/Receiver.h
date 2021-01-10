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
    static bool is_GGA_received_completely;

    static CoordinatesContainer coordinates;
public:
    static bool Init();

    static bool Process();

    static bool IsRunning();
};

#endif //CARTRACK_RECEIVER_H
