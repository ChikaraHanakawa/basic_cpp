#ifndef _CALCULATION_H_
#define _CALCULATION_H_

#include <iostream>

class Calculation{
  public:
    void setNumber1(int n);
    void setNumber2(int n);
    int getNumber1();
    int getNumber2();
    int add();
    int sub();
  private:
    int m_number1;
    int m_number2;
};

#endif // _TWOSTRINGS_H_
