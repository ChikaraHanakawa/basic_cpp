#include <iostream>
#include "bar.h"
#include "foo.h"

void Foo::hoge(){
  std::cout << "Foo::hoge()" << std::endl;
}
void Foo::fuga(Bar* pBar){
  std::cout << "Foo::fuga()" << std::endl;
  pBar->func2();
}
