#ifndef _VECTOR_H_
#define _VECTOR_H_

class Vector{
  private:
    double m_x;
    double m_y;
  public:
    Vector();
    Vector(double num, double ber);
    void set(double x, double y);
    double getX();
    double getY();
};
#endif // _VECTOR_H_
