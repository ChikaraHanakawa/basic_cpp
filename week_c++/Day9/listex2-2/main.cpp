#include <iostream>
#include "Sample.cpp"

int main(){
  CSample s;
  std::cout << "定数" << s.m_cst << std::endl;
  s.setStr("ABC");
  std::cout << s.getStr() << std::endl;
  return 0;
}
