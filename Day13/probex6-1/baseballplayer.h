#ifndef _BASEBALLPLAYER_H_
#define _BASEBALLPLAYER_H_

#include <iostream>
#include <string>

class BaseballPlayer{
    protected:
        int m_number;
        std::string  m_kind;
        std::string m_name;
    public:
        int getNumber();
        std::string getKind();
        std::string getName();
        virtual void play() = 0;
};

#endif // _BASEBALLPLAYER_H_