#include <iostream>
#include "bar.cpp"
#include "foo.cpp"

int main(){
  Foo* pFoo;
  Bar* pBar;
  pBar->func1(pFoo);
  pBar->func2();
  pFoo->fuga(pBar);
  pFoo->hoge();
}
