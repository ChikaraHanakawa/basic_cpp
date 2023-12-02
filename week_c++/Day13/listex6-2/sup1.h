#ifndef _SUP1_H_
#define _SUP1_H_

#include <iostream>

class CSup1{
    public:
        CSup1(){
            std::cout << "CSup1 コンストラクタ" << std::endl;
        }
        virtual ~CSup1(){
            std::cout << "CSup1 デストラクタ" << std::endl;
        }
};

#endif // _SUP1_H_