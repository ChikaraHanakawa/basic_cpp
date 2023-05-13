#include "Sample.h"

CSample::CSample(){
  m_str = "";
}
void CSample::setStr(const std::string str){
  m_str = str;
  //str = "";
}
std::string CSample::getStr() const{
  //m_str = "";
  return m_str;
}
