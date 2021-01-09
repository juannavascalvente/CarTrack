/******************************************************************************
                                Includes
******************************************************************************/
#include <cstring>
#include <iostream>
#include "Receiver.h"

#ifdef __arm__
#include <wiringPi.h>
#include <wiringSerial.h>
#endif

/******************************************************************************
                                    Defines
******************************************************************************/
#define BUFF_LEN            100
#define GGA_CODE_LEN        3


/******************************************************************************
                            Members definitions
******************************************************************************/
ReceiverStatus Receiver::status;
int Receiver::serial_port;
char Receiver::dat;
char Receiver::buff[BUFF_LEN];
char Receiver::GGA_code[GGA_CODE_LEN];
bool Receiver::isItGgaString;
unsigned int Receiver::indexGga;
bool Receiver::is_GGA_received_completely;


/******************************************************************************
                            Function definitions
******************************************************************************/
bool Receiver::Init()
{
    serial_port = 0;
    dat = 0;
    memset(buff, 0, sizeof(buff));
    memset(GGA_code, 0, sizeof(GGA_code));
    isItGgaString = false;
    indexGga=0;
    is_GGA_received_completely = false;

    // Check receiver is in IDLE status.
    if (status.isIdle())
    {
#ifdef __arm__
        // Open serial port
        if ((serial_port = serialOpen("/dev/ttyS0", 9600)) < 0)
        {
            std::cerr << "Unable to open serial device: " << errno << std::endl;
            status.setFailed();
        }

        // Initializes wiringPi setup
        if (wiringPiSetup () == -1)
        {
            fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
            std::cerr << "Unable to start wiringPi: " << errno << std::endl;
            status.setFailed();
        }
#endif
        // Set status as initialized
        status.setInit();
    }

    return status.isInit();
}

bool Receiver::IsRunning()
{
    return status.isRunning();
}

bool Receiver::Process()
{
    while (Receiver::IsRunning())
    {
#ifdef __arm__
        // Check for any data available on serial port
        if (serialDataAvail(serial_port) )
        {
            // Receive character serially
            dat = serialGetchar(serial_port);
            printf("%c ", dat);
            if (dat == '$')
            {
                isItGgaString = false;
                indexGga = 0;
            }
            else if (isItGgaString)
            {
                buff[indexGga++] = dat;
                if(dat=='\r')
                {
                    is_GGA_received_completely = true;
                }
            }
            else if ((GGA_code[0] =='G') && (GGA_code[1] =='G') && (GGA_code[2] =='A'))
            {
                isItGgaString = true;
                GGA_code[0]= 0;
                GGA_code[0]= 0;
                GGA_code[0]= 0;
            }
            else
                {
                GGA_code[0] = GGA_code[1];
                GGA_code[1] = GGA_code[2];
                GGA_code[2] = dat;
            }
        }
        if (is_GGA_received_completely)
        {
            printf("GGA: %s",buff);
            is_GGA_received_completely = false;
        }
#endif
    }

    return Receiver::IsRunning();
}
