#include "counter.h"

Counter::Counter() : m_count(0){
  m_totalCount = 0;
}
void Counter::reset(){
  m_count = 0;
}
void Counter::count(){
  m_count++;
}
int Counter::getCount(){
  return m_count;
}
int Counter::getTotalCount(){
  return m_totalCount;
}
