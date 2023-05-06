#ifndef _VECTOR2D_H_
#define _VECTOR2D_H_

//  2次元ベクトルクラス
class Vector2D{
  protected:
    int m_x;
    int m_y;
  public:
    Vector2D();
    void setValue(int x, int y);
    int getX();
    int getY();
  protected:
    void init();
};
#endif // _VECTOR2D_H_
