#include <iostream>
#include "number.h"

Number::Number() : a(0), b(0){
  std::cout << "aとbを初期化" << std::endl;
}
Number::~Number(){
  std::cout << "デストラクタ" << std::endl;
}
void Number::setNumber(int n1, int n2){
  a = n1;
  b = n2;
}
int Number::getAdd(){
  return a+b;
}
