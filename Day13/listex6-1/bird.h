#ifndef _BERD_H_
#define _BIRD_H_

#include <iostream>
#include <string>

class CBird{
    public:
        virtual void sing(){
            std::cout << "鳥が鳴きます" << std::endl;
        }
        void fly(){
            std::cout << "鳥が飛びます" << std::endl;
        }
};

#endif // _BIRD_H_