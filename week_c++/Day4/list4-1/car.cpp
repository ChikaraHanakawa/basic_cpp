#include <iostream>
#include "car.h"

CCar::CCar() : m_fuel(0),m_migration(0){
  std::cout << "CCarオブジェクト生成" << std::endl;
}
CCar::~CCar(){
  std::cout << "CCarオブジェクト破棄" << std::endl;
}
void CCar::move(){
  if(m_fuel >= 0){
    m_migration++;
    m_fuel--;
  }
  std::cout << "移動距離:" << m_migration << std::endl;
  std::cout << "燃料:" << m_fuel << std::endl;
}
void CCar::supply(int fuel){
  if(fuel > 0){
    m_fuel += fuel;
  }
  std::cout << "燃料" << m_fuel << std::endl;
}
