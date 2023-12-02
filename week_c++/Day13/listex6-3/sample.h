#ifndef _SAMPLE_H_
#define _SAMPLE_H_

#include <iostream>
#include "iinf1.h"
#include "iinf2.h"

class CSample : public IInf1, public IInf2
{
    public:
        void func1(){
            std::cout << "func1" << std::endl;
        }
        void func2(){
            std::cout << "func2" << std::endl;
        }
        void func3(){
            std::cout << "func3" << std::endl;
        }
        void func4(){
            std::cout << "func4" << std::endl;
        }
};

#endif // _SAMPLE_H_