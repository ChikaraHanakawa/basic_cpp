#include <iostream>
#include "foo.h"
#include "bar.h"

void Bar::func1(Foo* pFoo){
  pFoo->hoge();
}
void Bar::func2(){
  std::cout << "Bar::func2" << std::endl;
}
