#include <iostream>

void changeNumber(int&);

int main(){
  int n = 5;
  std::cout << "変更前 : " << n << std::endl;
  changeNumber(n);
  std::cout << "変更後 : " << n << std::endl;
}
void changeNumber(int& n){
  n *= 2;
}
