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
        int getNumber(){
            return  m_number;
        }
        std::string getKind(){
            return m_kind;
        }
        std::string getName(){
            return m_name;
        }
        virtual void play() = 0;
};

#endif // _BASEBALLPLAYER_H_