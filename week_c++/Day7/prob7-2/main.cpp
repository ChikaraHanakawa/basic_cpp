#include <iostream>
#include "vector.cpp"

int main(){
  Vector *v1, *v2;
  v1 = new Vector();
  v2 = new Vector(1.1, 2.3);
  v1->set(3.1, 2.7);
  std::cout << "v1 =(" << v1->getX() << " , " << v1->getY() << ")" << std::endl;
  std::cout << "v2 =(" << v2->getX() << " , " << v2->getY() << ")" << std::endl;
  delete v1;
  delete v2;
  return 0;
}
