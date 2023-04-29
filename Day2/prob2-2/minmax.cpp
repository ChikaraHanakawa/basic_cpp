#include "minmax.h"

int MinMax::max(int n1,int n2,int n3){
  if (n1 > n2 && n1 > n3){
    return n1;
  }
  else if (n2 > n3){
    return n2;
  }
  return n3;
}
int MinMax::min(int n1,int n2,int n3){
  if (n1 < n2 && n1 < n3){
    return n1;
  }
  else if (n2 < n3){
    return n2;
  }
  return n3;
}
