#include <iostream>
#include <string>

template <typename T>
T add(T x, T y){
  return x + y;
}
int main(){
  std::cout << add<int>(4, 3) << std::endl;
  std::cout << add<std::string>("ABC", "DEF") << std::endl;
  std::cout << add(1, 2) << std::endl;
  // std::cout << add("abc", "def") << std::endl; stringの場合、型指定が必要
  // std::cout << add(1, 2.3) << std::endl; 型が不一致した場合、使えない
  return 0;
}
