#include <iostream>
#include "collectionint.h"

int main(){
  int array[] = {1,5,4,2,3};
  CollectionInt* c = new CollectionInt(array, 5);
  c->showArray();
  std::cout << "最大値" << c->getMax() << std::endl;
  std::cout << "最小値" << c->getMin() << std::endl;
  delete c;
  return 0;
}
