#ifndef _SUB2_H_
#define _SUB2_H_

#include "sup2.h"

class CSub2 : public CSup2{
    public:
        CSub2(){
            std::cout << "CSub2 コンストラクタ" << std::endl;
        }
        ~CSub2(){
            std::cout << "CSub2 デストラクタ" << std::endl;
        }
};

#endif // _SUB2_H_