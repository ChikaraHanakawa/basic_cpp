#include "pitcher.h"

Pitcher::Pitcher(std::string name, int number){
    m_name = name;
    m_number = number;
    m_kind = "ピッチャー";
}
void Pitcher::play(){
    std::cout << "投球する" << std::endl;
}