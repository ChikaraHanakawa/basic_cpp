#include <iostream>
#include "collection.cpp"

int main(){
  //int array[] = {1,5,4,2,3};
  double array[] = {1.2,3.5,8.1,4.9,2.0,2.2};
  collection* c = new collection(array, 5);
  c->showArray();
  std::cout << "最大値 : " << c->getMax() << std::endl;
  std::cout << "最小値 : " << c->getMin() << std::endl;
  delete c;
  return 0;
}
