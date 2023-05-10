#include <iostream>

struct data{
  int n;
  double d;
};
int main(){
  data dt;
  dt.n = 100;
  dt.d = 12.34;
  std::cout << "dt.n = " << dt.n << std::endl << "dt.d = " << dt.d << std::endl;
  return 0;
}
