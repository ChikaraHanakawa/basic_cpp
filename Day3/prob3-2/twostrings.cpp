#include <string>
#include "twostrings.h"

void TwoStrings::init(){
  m_string1 = "";
  m_string2 = "";
}
void TwoStrings::setString1(std::string s){
  m_string1 = s;
}
void TwoStrings::setString2(std::string s){
  m_string2 = s;
}
std::string TwoStrings::getString1(){
  return m_string1;
}
std::string TwoStrings::getString2(){
  return m_string2;
}
std::string TwoStrings::getConnectedString(){
  m_string1 += m_string2;
  return m_string1;
}
int TwoStrings::getConnectedLength(int m_sum){
  m_sum = m_string1.length();
  return m_sum;
}
