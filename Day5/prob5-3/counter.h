#ifndef _COUNTER_H_
#define _COUNTER_H_

class Counter{
  private:
    int m_count;
    static int m_totalCount;
  public:
    Counter();
    void reset();
    void count();
    int getCount();
    void setTotalCount();
    static int getTotalCount();
};
#endif // _COUNTER_H_
