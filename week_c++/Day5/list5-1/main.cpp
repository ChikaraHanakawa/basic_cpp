#include <iostream>
#include "rat.h"
#include "rat.cpp"

int main(){
  CRat *r1, *r2, *r3;
  r1 = new CRat();
  r1 -> squeak();
  CRat::showNum();
  r2 = new CRat();
  r3 = new CRat();
  r2 -> squeak();
  r3 -> squeak();
  delete r1;
  delete r2;
  CRat::showNum();
  delete r3;
  CRat::showNum();
  return 0;
}
