#include <iostream>

int main(){
  int a = 7;
  int &n = a;
  std::cout << "a= " << a << std::endl;
  n += 3;
  std::cout << "a= " << a << std::endl;
}
