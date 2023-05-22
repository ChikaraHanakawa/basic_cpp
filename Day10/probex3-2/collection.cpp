#include <iostream>
#include "collection.h"

template<typename T>
collection<T>::collection( T num1,int num2){
  n_array = new int[num2];
  n_length = num2;
  for(int i = 0;i < n_length;i++){
    n_array[i] = num1[i];
  }
}
template<typename T>
collection<T>::~collection(){
}
template<typename T>
T collection<T>::getMax(){
  T max = n_array[0];
  for(int i = 0;i < n_length; i++){
    if(max < n_array[i]){
      max = n_array[i];
    }
  }
  return max;
}
template<typename T>
T collection<T>::getMin(){
  T min = n_array[0];
  for(int i = 0;i < n_length;i++){
    if(min > n_array[i]){
      min = n_array[i];
    }
  }
  return min;
}
template<typename T>
void collection<T>::showArray(){
  for(int i = 0;i < n_length;i++){
    std::cout << n_array[i] << " ";
  }
  std::cout << std::endl;
}
