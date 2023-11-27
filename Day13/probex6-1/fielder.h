#ifndef _FIELDER_H_
#define _FIELDER_H_

#include "baseballplayer.h"

class Fielder : public BaseballPlayer{
    public:
        Fielder(std::string name, int number);
        void play();
};

#endif // _FIELDER_H_