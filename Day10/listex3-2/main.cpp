#include <iostream>
#include <string>
#include "calc.h"

int main(){
  CCalc<int> i1;
  CCalc<std::string> i2;
  i1.set(1, 2);
  i2.set("ABC", "DEF");
  std::cout << i1.add() << std::endl << i2.add() << std::endl;
  return 0;
}
