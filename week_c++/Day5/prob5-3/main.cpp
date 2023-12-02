#include <iostream>
#include "counter.h"
#include "counter.cpp"

int main(){
  Counter c1, c2;
  c1.count();
  c2.count();
  c2.count();
  c2.reset();
  c1.count();
  c1.count();
  c2.count();
  c1.setTotalCount();
  c2.setTotalCount();
  std::cout << "c1のカウント数:" << c1.getCount() << std::endl;
  std::cout << "c2のカウント数:" << c2.getCount() << std::endl;
  std::cout << "トタールのカウント数:" << Counter::getTotalCount() << std::endl;
  return 0;
}
