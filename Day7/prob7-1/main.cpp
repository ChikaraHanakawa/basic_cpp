#include <iostream>
#include "counter.cpp"

int main(){
  Counter* pC = new Counter();
  pC->count();
  pC->count();
  std::cout << "回転:" << pC->getCount() << "回" << std::endl;
  pC->count(4);
  std::cout << "回転:" << pC->getCount() << "回" << std::endl;
  pC->reset();
  std::cout << "回転:" << pC->getCount() << "回" << std::endl;
  delete pC;
  return 0;
}
