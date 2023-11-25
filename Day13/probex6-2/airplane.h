#ifndef _AIRPLANE_H_
#define _AIRPLANE_H_

#include <iostream>

class AirPlane{
    private:
        std::string m_type;
    public:
        AirPlane(){
            m_type = "飛行機";
        }
        std::string getType();
        virtual void fly() = 0;
        virtual void fight();
        virtual void carryPassenger();
};

#endif // _AIRPLANE_H_