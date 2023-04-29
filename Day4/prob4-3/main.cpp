#include <iostream>

int main(){
  int* num = new int[4];
  int i;
  for(i = 0;i < 4;i++){
    num[i] = i;
  }
  for(i = 0;i < 4;i++){
    std::cout << "num[" << i << "]=" << i << " ";
  }
  std::cout << std::endl;
  delete [] num;
  return 0;
}
