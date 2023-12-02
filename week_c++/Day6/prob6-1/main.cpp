#include <iostream>
#include "airplane.h"
#include "airplane.cpp"
#include "fighter.h"
#include "fighter.cpp"

int main(){
  Fighter f;
  Airplane a;
  a.fly();
  f.fly();
  f.fight();
  return 0;
}
