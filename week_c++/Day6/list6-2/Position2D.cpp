#include <iostream>
#include "Position2D.h"

void Position2D::resetPosition(){
  init();
}
void Position2D::move(int dx, int dy){
  m_x += dx;
  m_y += dy;
}
