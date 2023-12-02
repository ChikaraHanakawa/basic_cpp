#include <iostream>
#include "data.h"
#include "data.cpp"

int main(){
  CData d;
  d.init();
  d.setNumber(100);
  d.setComment("Programming C++");
  std::cout << "number = " << d.getNumber() << " comment = " << d.getComment() << std::endl;
  return 0;
}
