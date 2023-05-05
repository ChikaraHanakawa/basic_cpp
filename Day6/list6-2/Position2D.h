#ifndef _POSITION2D_H_
#define _POSITION2D_H_

#include "Vector2D.h"

class Position2D : public Vector2D{
  public:
    void resetPosition();
    void move(int dx, int dy);
};
#endif // _POSITION_H_
