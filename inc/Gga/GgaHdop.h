/******************************************************************************
                                Includes
******************************************************************************/

#ifndef CARTRACK_GGAHDOP_H
#define CARTRACK_GGAHDOP_H

/******************************************************************************
                            Class declaration
******************************************************************************/
class GgaHdop {
    string strHdo;
public:
    void set(const string& strHdoIn) { strHdo = strHdoIn; }
    friend ostream& operator<<(ostream& os, GgaHdop &hdop)
    {
        os << hdop.strHdo;
        return os;
    }
};


#endif //CARTRACK_GGAHDOP_H
