#ifndef _SUB1_H_
#define _SUB1_H_

#include "sup1.h"

class CSub1 : public CSup1{
    public:
        CSub1(){
            std::cout << "CSub1 コンストラクタ" << std::endl;
        }
        ~CSub1(){
            std::cout << "CSub1 デストラクタ" << std::endl;
        }
};

#endif // _SUB1_H_