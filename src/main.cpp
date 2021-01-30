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
    Receiver receiver;

    receiver.Init();

    // Infinite loop for receiver processing while its status is RUNNING.
    do
    {
        receiver.Process();
    } while (receiver.IsRunning());

    return 0;
}
