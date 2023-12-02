#ifndef _AMBULANCE_H_
#define _AMBULANCE_H_

#include "car.h"
#include "car.cpp"

class CAmbulance : public CCar{
  public:
    CAmbulance();
    virtual ~CAmbulance();
    void savePeople();
  private:
    int m_number;
};
#endif // _AMBULANCE_H_
