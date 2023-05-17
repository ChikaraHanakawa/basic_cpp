#include <iostream>
#include "collectionint.cpp"

int main(){
  int array[] = {1,5,4,2,3};
  CollectionInt* a = new CollectionInt(array, 5);
  a->showArray();
  std::cout << "最大値" << a->getMax() << std::endl;
  std::cout << "最小値" << a->getMin() << std::endl;
  delete c;
  return 0;
}
