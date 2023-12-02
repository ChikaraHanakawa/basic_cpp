#include <iostream>
#include "Vector2D.h"

Vector2D::Vector2D(){
  init();
}
void Vector2D::setValue(int x, int y){
  m_x = x;
  m_y = y;
}
int Vector2D::getX(){
  return m_x;
}
int Vector2D::getY(){
  return m_y;
}
void Vector2D::init(){
  m_x = 0;
  m_y = 0;
}
