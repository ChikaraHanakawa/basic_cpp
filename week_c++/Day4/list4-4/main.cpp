#include <iostream>

int main(){
  int *p = 0;
  int i;
  p = new int[10];
  for(i=0;i<10;++i){
    p[i] = i;
    std::cout << p[i] << std::endl;
  }
  delete [] p;
  return 0;
}
