#include <iostream>
#include "collection.h"

collection::collection(C array, C length){
  n_array = new int[length];
  n_length = length;
  for(int i = 0;i < n_length;i++){
    n_array[i] = array[i];
  }
}
collection::~collection(){
}
