#ifndef _PASSENGERPLANE_H_
#define _PASSENGERPLANE_H_

#include <iostream>
#include <string>

class PassengerPlane{
    private:
        std:::string m_type;
    public:
        PassengerPlane();
        std::string getType();
        void fly();
        void carryPassengers();
};

#endif // _PASSENGERPLANE_H_