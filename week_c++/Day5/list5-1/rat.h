#ifndef _RAT_H_
#define _RAT_H_

class CRat{
  public:
    CRat();
    ~CRat();
    static void showNum();
    void squeak();
  private:
    int m_id;
    static int m_count;
};

#endif // _RAT_H_
