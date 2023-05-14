#include <iostream>
#include <string>

template <typename C>
C max(C a, C b){
  if(a > b){
    return a;
  }
  return b;
}

int main(){
  std::cout << max(1,2) << std::endl;
  std::cout << max(1.75, 3.12) << std::endl;
  std::cout << max("aiu", "eo") << std::endl;
  return 0;
}
