#include "fighteraircraft.h"

FighterAircraft::FighterAircraft() : AirPlane(){
    m_type = "戦闘機";
}
std::string FighterAircraft::getType(){
    return m_type;
}
void FighterAircraft::fly(){
    std::cout << "攻撃に出るために飛行" << std::endl;
}
void FighterAircraft::fight(){
    std::cout << "戦闘します" << std::endl;
}
FighterAircraft::~FighterAircraft(){
}