#include "counter.h"

Counter::Counter() : m_count(0){
}
void Counter::reset(){
  m_count = 0;
}
int Counter::getCount(){
  return m_count;
}
void Counter::count(){
  m_count++;
}
void Counter::count(int num){
  m_count += num;
}
