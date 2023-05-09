#include <iostream>
#include <string>

int main(){
  std::string s, t;
  t = "入力された文字は、";
  std::cout << "文字列を入力：";
  std::cin >> s;
  std::cout << t+s << "です" << std::endl;
  return 0;
}
