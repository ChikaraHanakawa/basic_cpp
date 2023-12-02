#include "fielder.h"

Fielder::Fielder(std::string name, int number){
    m_name = name;
    m_number = number;
    m_kind = "野手";
}
void Fielder::play(){
    std::cout << "捕球する" << std::endl;
}