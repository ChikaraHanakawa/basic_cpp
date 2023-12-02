#include <iostream>
#include "rat.h"

int CRat::m_count = 0;

CRat::CRat() : m_id(0){
  m_id = m_count;
  m_count++;
}
CRat::~CRat(){
  std::cout << "ネズミ" << m_id << "消去" << std::endl;
  m_count--;
}
void CRat::showNum(){
  std::cout << "現在のネズミの数は、" << m_count << "匹です" << std::endl;
}
void CRat::squeak(){
  std::cout << m_id << ":" << "チューナー" << std::endl;
}
