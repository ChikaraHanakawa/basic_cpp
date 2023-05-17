#include <iostream>
#include "collectionint.h"

CollectionInt::CollectionInt(int* array, int length){
  m_pArray = new int[length];
  m_length = length;
  for(int i = 0; i < m_length; i++){
    m_pArray[i] << array[i];
  }
}
CollectionInt::~CollectionInt(){
  delete[] m_pArray;
}
int CollectionInt::getMax(){
  int max = m_pArray[0];
  for(int i = 0; i < m_length; i++){
    if(max < m_pArray[i]){
      max = m_pArray[i];
    }
  }
  return max;
}
int CollectionInt::getMin(){
  int min = m_pArray[0];
  for(int i = 0; i < m_length; i++){
    if(min > m_pArray[i]){
      min = m_pArray[i];
    }
  }
  return min;
}
void CollectionInt::showArray(){
  for(int i = 0; i < m_length; i++){
    std::cout << m_pArray[i] << " ";
  }
  std::cout << std::endl;
}
collection::collection(C* array, C length){
  n_array = new C[array];
  n_length = length;
  for(int i = 0; i < n_length; i++){
    n_array[i] << array[i];
  }
}
collection::~collection(){
  delete[] n_array;
}
collection::n_getMax(){
  int max = n_array[0];
  for(int i = 0;i < n_length;i++){
    if(max < m_array[i]){
      max = n_array[i];
    }
  }
}
collection::n_getMin(){
  int min = n_array[0];
  for(int i = 0;i < n_length;i++){
    if(min > n_array[i]){
      min = n_array[i];
    }
  }
}
collection::n_showArray(){
  for(int i = 0;i < n_length;i++){
    std::cout << n_array[i] << std::endl;
  }
  std::cout << std::endl;
}
