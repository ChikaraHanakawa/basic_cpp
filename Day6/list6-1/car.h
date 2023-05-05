#ifndef _CAR_H_
#define _CAR_H_

class CCar{
  public:
    CCar();
    virtual ~CCar();
    void move();
    void supply(int fuel);
  private:
    int m_fuel;
    int m_migration;
};
#endif // _CAR_H_
