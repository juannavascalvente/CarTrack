#include <iostream>
#include "GpsCoordinateBuilder.h"
#include "GpsCoordinatesIO.h"
#include "GpsCoordinates.h"
#include "Receiver.h"

int main() {
    std::cout << "Starting GPS!" << std::endl;
    string strFileName1 = "test1.txt";
    string strFileName2 = "test2.txt";
    vector<GpsCoordinates> vector;

    GpsCoordinates coordinate;
    GpsCoordinateBuilder::fromGPGGAtoGPS("4024.61529", "00343.69067", coordinate);
    vector.push_back(coordinate);

    GpsCoordinatesIO::print(coordinate);
    GpsCoordinatesIO::write(coordinate, strFileName1);
    GpsCoordinatesIO::write(coordinate, strFileName2);

    // Initialize receiver
    Receiver::Init();

    // Infinite loop for receiver processing while its status is RUNNING.
    do
    {
        Receiver::Process();
    } while (Receiver::IsRunning());

    return 0;
}
