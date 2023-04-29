#include <iostream>
#include "sample.cpp"

int main(){
  CSample s;
  s.setNum(5);
  std::cout << s.getNum() << std::endl;
  return 0;
}
