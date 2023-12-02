#include "sample.h"
#include <iostream>

void Sample::func1(){
  std::cout << "func1" << std::endl;
  a = 1;
  b = 1;
  func2();
}
void Sample::func2(){
  a = 2;
  b = 2;
  std::cout << "a=" << a << "," << "b=" << b << std::endl;
}
