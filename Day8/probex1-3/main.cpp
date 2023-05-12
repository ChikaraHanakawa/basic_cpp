#include <iostream>

void swap(int&, int&);

int main(){
  int a = 1, b = 2;
  std::cout << "a = " << a << "b = " << b << std::endl;
  swap(a ,b);
  std::cout << "a = " << a << "b = " << b << std::endl;
  return 0;
}

void swap(int a, int b){
  int tmp;
  tmp = a;
  a = b;
  b = tmp;
}
