#include <iostream>
#include "calculation.h"

void Calculation::setNumber1(int n){
  m_number1 = n;
}
void Calculation::setNumber2(int n){
  m_number2 = n;
}
int Calculation::getNumber1(){
  return m_number1;
}
int Calculation::getNumber2(){
  return m_number2;
}
int Calculation::add(){
  int ans = m_number1 + m_number2;
  return ans;
}
int Calculation::sub(){
  int ans = m_number1 - m_number2;
  return ans;
}
