#include <iostream>
#include "calculation.h"
#include "calculation.cpp"

int main(){
  Calculation c;
  c.setNumber1(8);
  c.setNumber2(9);
  std::cout << c.getNumber1() << " + " << c.getNumber2() << " = " << c.add() << std::endl;
  std::cout << c.getNumber1() << " - " << c.getNumber2() << " = " << c.sub() << std::endl;
  return 0;
}
