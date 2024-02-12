#include <iostream>

int main(){
  int array[] = {4, 2, 1, 9, 5};
  int i = 4;
  while(i >= 0){
    std::cout << array[i] << std::endl;
    i -= 1;
  }
}
