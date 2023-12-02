#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include <string>

class CSample{
  private:
    std::string m_str;
  public:
    CSample();
    void setStr(const std::string str);
    std::string getStr() const;
  public:
    static const int m_cst = 100;
};
#endif // _SAMPLE_H_
