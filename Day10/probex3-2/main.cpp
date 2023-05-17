#include <iostream>
#include "collection.cpp"

int main(){
  double array[] = {1.2,3.5,8.1,4.9,2.0,2.2};
  collection<int> i1;
  collection<double> i2;
  collection c = new collection(array, 5);
}
