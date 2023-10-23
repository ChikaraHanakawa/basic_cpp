#include "collectionint.h"
#include <iostream>

template <typename T>Collection<T>::Collection(T* array, T length){
    m_pArray = new T[length];
    m_length = length;
    for(int i = 0; i < length; i++){
        m_pArray[i] = array[i];
    }
}
template <typename T>Collection<T>::~Collection(){
    delete[] m_pArray;
}
template <typename T>
T Collection<T>::getMax(){
    T max = m_pArray[0];
    for(int i = 0; i < m_length; i++){
        if(m_pArray[i] > max){
            max = m_pArray[i];
        }
    }
    return max;
}
template <typename T>
T Collection<T>::getMin(){
    T min = m_pArray[0];
    for(int i = 0; i < m_length; i++){
        if(m_pArray[i] < min){
            min = m_pArray[i];
        }
    }
    return min;
}
template <typename T>
void Collection<T>::showArray(){
    if(m_pArray[0] == static_cast<double>(static_cast<int>(m_pArray[0]))){
        std::cout << "実数の場合" << std::endl;
    }else {
        std::cout << "整数の場合" << std::endl;
    }
    for(int i = 0; i < m_length; i++){
        std::cout << m_pArray[i] << " ";
    }
    std::cout << std::endl;
}