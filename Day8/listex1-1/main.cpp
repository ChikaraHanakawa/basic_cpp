#include <iostream>

void ref(int&);
void print(int);

int main(){
  int n = 5;
  print(n);
  ref(n);
  print(n);
  return 0;
}

void ref(int& n){
  n = 1;
}
void print(int n){
  std::cout << "n=" << n << std::endl;
}
