#include <iostream>
#include "hoge.h"

Hoge::Hoge(){
  std::cout << "コンストラクタ" << std::endl;
}
void Hoge::foo(){
  std::cout << "fooメソッド" << std::endl;
}
Hoge::~Hoge(){
  std::cout << "デストラクタ" << std::endl;
}
