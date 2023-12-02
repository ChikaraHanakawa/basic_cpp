#include <iostream>
#include "hoge.h"
#include "hoge.cpp"

int main(){
  Hoge* pH;
  pH = new Hoge();
  pH -> foo();
  delete pH;
  return 0;
}
