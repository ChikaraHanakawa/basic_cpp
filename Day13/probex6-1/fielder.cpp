#include "fielder.h"

Fielder::Fielder(std::string name, int number){
    m_name = name;
    m_number = number;
    m_kind = "キャッチャー";
}
void Fielder::play(){
    std::cout << "ピッチャーの球を受ける" << std::endl;
}