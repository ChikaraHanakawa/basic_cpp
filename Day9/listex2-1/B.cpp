#include <iostream>
#include "A.h"
#include "B.h"

B::B(A* pA){
  m_pA = pA;
}
void B::hoge(){
  std::cout << "bar" << std::endl;
  m_pA->foo();
}
