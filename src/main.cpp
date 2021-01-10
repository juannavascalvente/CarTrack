/******************************************************************************
                                Includes
******************************************************************************/
#include <iostream>
#include "Receiver.h"


/******************************************************************************
                                  MAIN
******************************************************************************/
int main() {
    std::cout << "Starting GPS!" << std::endl;

    // Initialize receiver
    Receiver::Init();

    // Infinite loop for receiver processing while its status is RUNNING.
    do
    {
        Receiver::Process();
    } while (Receiver::IsRunning());

    return 0;
}
