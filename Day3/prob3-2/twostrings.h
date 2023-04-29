#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_

#include <iostream>
#include <string>

class TwoStrings{
  private:
    std::string m_string1;
    std::string m_string2;
  public:
    void init();
    void setString1(std::string s);
    void setString2(std::string s);
    std::string getString1();
    std::string getString2();
    std::string getConnectedString();
    int getConnectedLength(int m_sum);
};

#endif // _TWOSTRING_H_
