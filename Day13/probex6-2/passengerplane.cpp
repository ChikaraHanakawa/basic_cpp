#include "passengerplane.h"

PassengerPlane::PassengerPlane() : AirPlane(){
    m_type = "旅客機";
}

std::string PassengerPlane::getType(){
    return m_type;
}
void PassengerPlane::fly(){
    std::cout << "乗客を乗せて目的地まで飛行します" << std::endl;
}
void PassengerPlane::carryPassenger(){
    std::cout << "乗客を運びます" << std::endl;
}