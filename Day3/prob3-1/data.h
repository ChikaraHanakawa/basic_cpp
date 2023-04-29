#ifndef _CDATA_H_
#define _CDATA_H_

#include <iostream>
#include <string>

class CData{
  public:
    void init();
    void setNumber(int num);
    int getNumber();
    void setComment(std::string com);
    std::string getComment();
  private:
    int number;
    std::string comment;
};

#endif // _CDATA_H_