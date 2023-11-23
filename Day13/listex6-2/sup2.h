#ifndef _SUP2_H_
#define _SUP2_H_

#include <iostream>

class CSup2{
    public:
        CSup2(){
            std::cout << "CSup2 コンストラクタ" << std::endl;
        }
        virtual ~CSup2(){
            std::cout << "CSup2 デストラクタ" << std::endl;
        }
};

#endif // _SUP2_H_