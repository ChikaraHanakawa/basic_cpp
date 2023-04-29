#include <iostream>
#include "number.h"
#include "number.cpp"

int main(){
  Number* pN;
  pN = new Number();
  pN -> setNumber(1, 2);
  std::cout << pN -> getAdd() << std::endl;
  delete pN;
  return 0;
}
