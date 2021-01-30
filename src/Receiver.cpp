/******************************************************************************
                                Includes
******************************************************************************/
#include <cstring>
#include <iostream>
#include <unistd.h>
#include <fstream>

#include "GgaBuilder.h"
#include "GgaData.h"
#include "GpsCoordinateBuilder.h"
#include "Receiver.h"

#ifdef __arm__
#include <wiringPi.h>
#include <wiringSerial.h>
#endif


/******************************************************************************
                            Function definitions
******************************************************************************/
bool Receiver::Init()
{
    cout << "Receiver Init..." << endl;

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
        coordinates.flush();

        // Set status as initialized
        status.setInit();
    }

    status.print();
    cout << "Receiver Init...end" << endl;
    return status.isInit();
}

bool Receiver::IsRunning()
{
    return status.isRunning();
}

bool Receiver::Process()
{
    cout << "Receiver Process..." << endl;

    status.setRunning();

    while (Receiver::IsRunning())
    {
        // Read data from GPS
        Receiver::Read();

        // Check data received
        if (isDataReceived())
        {
            printf("GGA: %s",buff);

            // Convert raw data to gps coordinates
            GgaData ggaData;
            GgaBuilder::BuildGga(buff, ggaData);

            Coordinate coord;
            GpsCoordinateBuilder::fromGPGGAtoGPS(ggaData, coord);
            coordinates.add(coord);

            // Check if coordinates must be saved
            if (isTimeToSave())
            {
                // Save coordinates and flush buffer
                Save();
                coordinates.flush();
            }
        }
    }

    cout << "Receiver Process...end" << endl;

    return Receiver::IsRunning();
}

void Receiver::Read()
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
                setDataReceived(true);
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
#else
    sleep(1);
    strcpy(buff, "152601.000,1832.9498,N,07347.4051,E,1,6,1.47,606.9,M,-64.6,M,,,*74");
    setDataReceived(true);
#endif
}

bool Receiver::Save()
{
    bool isSaved=true;

    ofstream fd;
    fd.open(strFileName, ios::out | ios::app);
    if (fd.is_open())
    {
        std::cout << "SAVING" << std::endl;
        //coordinates.write(fd);
        coordinates.print();
        fd << "Writing this to a file.\n";
        std::cout << "SAVED" << std::endl;
        fd.close();
    }
    else
    {
        isSaved = false;
        std::cout << "Error opening file: " << strFileName << std::endl;
    }

    return isSaved;
}

bool Receiver::isTimeToSave()
{
    return (coordinates.size() % 2 == 0);
}