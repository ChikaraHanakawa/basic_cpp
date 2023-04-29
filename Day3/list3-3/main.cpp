#include <iostream>
#include <string>

int main(){
  std::string s;
  s = "This is a";
  s.append(" pen.");
  std::cout << s << std::endl;
  std::cout << "文字列の長さ" << s.length() << std::endl;
  printf("char*:%s\n", s.c_str());
}
