/******************************************************************************
                                Includes
******************************************************************************/

#ifndef CARTRACK_RECEIVERSTATUS_H
#define CARTRACK_RECEIVERSTATUS_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class ReceiverStatus {
    enum Status
    {
        IDLE,
        INIT,
        RUNNING,
        FAILED
    };

    Status status;
public:
    ReceiverStatus() : status(IDLE) {};

    /**
     * @fn      isIdle
     * @return  true if status is IDLE
     *          false otherwise
     */
    bool isIdle() { return status == IDLE; }

    /**
     * @fn      isInit
     * @return  true if status is INIT
     *          false otherwise
     */
    bool isInit() { return status == INIT; }

    /**
     * @fn      isRunning
     * @return  true if status is RUNNING
     *          false otherwise
     */
    bool isRunning() { return status == RUNNING; }

    /**
     * @fn      isFailed
     * @return  true if status is FAILED
     *          false otherwise
     */
    bool isFailed() { return status == FAILED; }

    /**
     * @fn      setIdle
     * @brief   Set value to IDLE
     */
    void setIdle() { status = IDLE; }

    /**
     * @fn      setInit
     * @brief   Set value to INIT
     */
    void setInit() { status = INIT; }

    /**
     * @fn      setRunning
     * @brief   Set value to RUNNING
     */
    void setRunning() { status = RUNNING; }

    /**
     * @fn      setFailed
     * @brief   Set value to FAILED
     */
    void setFailed() { status = FAILED; }
};


#endif //CARTRACK_RECEIVERSTATUS_H
