#include <iostream>
#include "object.h"
#include "object.cpp"

int main(){
  Object *o1, *o2, *o3;
  o1 = new Object();
  o2 = new Object();
  o3 = new Object();
  std::cout << "オブジェクトの数:" << Object::getObjectNum() << std::endl;
  delete o3;
  std::cout << "オブジェクトの数:" << Object::getObjectNum() << std::endl;
  delete o2;
  delete o1;
  return 0;
}
