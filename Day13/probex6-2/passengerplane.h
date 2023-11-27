#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>
#include "airplane.h"

class PassengerPlane : public AirPlane{
    private:
        std::string m_type;
    public:
        PassengerPlane();
        std::string getType();
        void fly();
        void carryPassenger();
        virtual ~PassengerPlane();
};

#endif // _PASSENGERPLANE_H_