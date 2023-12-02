#include <iostream>
#include "A.h"
#include "B.h"

A::A(){
  m_p8 = new B(this);
}
void A::foo(){
  std::cout << "foo" << std::endl;
}
void A::bar(){
  m_p8->hoge();
}
