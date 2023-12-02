#include <iostream>
#include "minmax.cpp"
#include "minmax.h"

int main(){
  MinMax m;
  int a = 4;
  int b = 2;
  int c = 7;
  std::cout << a << "と" << b << "と" << c << "のうち、最大のものは" << m.max(a,b,c) << std::endl;
  std::cout << a << "と" << b << "と" << c << "のうち、最小のものは" << m.min(a,b,c) << std::endl;
  return 0;
}
