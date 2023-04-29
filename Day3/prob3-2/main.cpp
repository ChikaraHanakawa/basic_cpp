#include <iostream>
#include "twostrings.h"
#include "twostrings.cpp"

int main(){
  TwoStrings s;
  s.init();
  s.setString1("Hello");
  s.setString2("World");
  std::cout << "１つ目の文字列は" << s.getString1() << std::endl;
  std::cout << "２つ目の文字列は" << s.getString2() << std::endl;
  std::cout << "２つの文字列を合成したものは" << s.getConnectedString() << std::endl;
  std::cout << "合成した文字列の長さは" << s.getConnectedLength(0) << "文字" << std::endl;
  return 0;
}
