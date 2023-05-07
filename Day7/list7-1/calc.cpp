#include <iostream>
#include "calc.h"

CCalc::CCalc() : m_a(0), m_b(0){
}
CCalc::CCalc(int a, int b) : m_a(0), m_b(0){
}
int CCalc::add(){
  return m_a + m_b;
}
int CCalc::add(int a, int b){
  return a + b;
}
void CCalc::setValue(int a, int b){
  m_a = a;
  m_b = b;
}
int CCalc::getA(){
  return m_a;
}
int CCalc::getB(){
  return m_b;
}
