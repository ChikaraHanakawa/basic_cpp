/*このソースコードはlist4-1にあるcar.hとcar.cppを用います*/
#include <iostream>
#include "car.h"
#include "car.cpp"

int main(){
  CCar* pC = 0;
  pC = new CCar();
  pC -> supply(10);
  pC -> move();
  pC -> move();
  delete pC;
  std::cout << "インスタンスの消去終了" << std::endl;
  return 0;
}
