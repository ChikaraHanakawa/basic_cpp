#include <iostream>
#include "car.h"
#include "car.cpp"

int main(){
  CCar c;
  c.supply(10);
  c.move();
  c.move();
  return 0;
}
