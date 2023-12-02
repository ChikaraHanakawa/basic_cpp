#ifndef _CATCHER_H_
#define _CATCHER_H_

#include "baseballplayer.h"

class Catcher : public BaseballPlayer{
    public:
        Catcher(std::string name, int number);
        void play();
};

#endif // _CATCHER_H_