#include <iostream>
#include "sup1.h"
#include "sup2.h"
#include "sub1.h"
#include "sub2.h"

int main(){
    CSup1 *s1 = new CSub1();
    CSup2 *s2 = new CSub2();
    delete s1;
    delete s2;
    return 0;
}