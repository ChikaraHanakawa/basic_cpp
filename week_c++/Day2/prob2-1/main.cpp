#include <iostream>
#include "keisan.cpp"
#include "keisan.h"

int main(){
  Keisan k;
  k.a = 4;
  k.b = 3;
  std::cout << k.a << "+" << k.b << "=" << k.add() << std::endl;
  std::cout << k.a << "-" << k.b << "=" << k.sub() << std::endl;
  return 0;
}
