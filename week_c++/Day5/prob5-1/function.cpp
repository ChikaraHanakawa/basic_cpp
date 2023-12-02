#include <iostream>
#include "function.h"

int Function::max(int n1, int n2){
  if(n1 > n2){
    return n1;
  }
  else return n2;
}
int Function::min(int n1, int n2){
  if(n1 > n2){
    return n2;
  }
  else return n1;
}
