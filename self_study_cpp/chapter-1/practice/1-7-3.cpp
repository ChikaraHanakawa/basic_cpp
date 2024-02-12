#include <iostream>

int main(){
  int i = 4;
  int array[] = {4, 2, 1, 9, 5};
  do{
    std::cout << array[i] << std::endl;
    --i;
  }while(i >= 0);
}
