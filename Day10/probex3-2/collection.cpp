#include <iostream>
#include "collectionint.h"

template<typename T>
collection<T>::collection(const T num1,const T num2){
  n_array = new T[num2];
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
  int max = n_array[0];
  for(int i = 0;i < n_length; i++){
    if(max < n_array[i]){
      max = n_array[i];
    }
  }
}
template<typename T>
T collection<T>::getMin(){
  T min = n_array[0];
  for(int i = 0;i < n_length;i++){
    if(min > n_array[i]){
      min = n_array[i];
    }
  }
  return 0;
}
template<typename T>
T collection<T>::showArray(){
  for(int i = 0;i < n_length;i++){
    std::cout << n_array[i] << " ";
  }
  std::cout << std::endl;
}
