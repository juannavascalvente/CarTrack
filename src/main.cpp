#include <iostream>
#include <cstdio>
#include <cstring>
#include <cerrno>

#ifdef __arm__
#include <wiringPi.h>
#include <wiringSerial.h>
#endif

int main() {
    std::cout << "Starting GPS!" << std::endl;
#ifdef __arm__
    int serial_port;
    char dat,buff[100],GGA_code[3];
    bool isItGgaString=false;
    unsigned int indexGga=0;
    bool is_GGA_received_completely = false;

    // Open serial port
    if ((serial_port = serialOpen("/dev/ttyS0", 9600)) < 0)
    {
        std::cerr << "Unable to open serial device: " << errno << std::endl;
        return 1;
    }

    // Initializes wiringPi setup
    if (wiringPiSetup () == -1)
    {
        fprintf (stdout, "Unable to start wiringPi: %s\n", strerror (errno)) ;
        std::cerr << "Unable to start wiringPi: " << errno << std::endl;
        return 1;
    }

    while (true)
    {
        // Check for any data available on serial port
        if(serialDataAvail (serial_port) )
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
    }
#endif

    return 0;
}
